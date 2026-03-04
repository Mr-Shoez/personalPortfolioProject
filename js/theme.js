/**
 * theme.js — Universal Theme System
 * ============================================================
 * Must be loaded as a regular (non-deferred) <script> in <head>
 * so that [data-theme] is applied before first paint (no flash).
 *
 * localStorage key: 'theme'  ('light' | 'dark')
 * ============================================================
 */
(function () {
    const STORAGE_KEY = 'theme';

    // Read saved preference, fall back to OS preference
    function resolveTheme() {
        const saved = localStorage.getItem(STORAGE_KEY);
        if (saved === 'light' || saved === 'dark') return saved;
        return window.matchMedia('(prefers-color-scheme: light)').matches ? 'light' : 'dark';
    }

    // Apply on documentElement so [data-theme="light"] CSS vars fire instantly
    document.documentElement.setAttribute('data-theme', resolveTheme());

    // ── detect the path depth so favicon paths resolve correctly ──────────────
    // e.g. root pages: prefix = ''
    //      pages one level in (projects/, posts/): prefix = '../'
    function getFaviconBase(theme) {
        var depth = (window.location.pathname.match(/\//g) || []).length - 1;
        var prefix = depth > 1 ? '../' : '';
        var folder = theme === 'dark' ? 'dark mode favicon' : 'light mode favicon';
        return prefix + 'asserts/' + folder + '/';
    }

    var _faviconWired = false;

    function syncFaviconsNow(theme) {
        var base = getFaviconBase(theme);
        var faviconMap = [
            { id: 'favicon-32',    file: 'favicon-32x32.png'    },
            { id: 'favicon-16',    file: 'favicon-16x16.png'    },
            { id: 'favicon-ico',   file: 'favicon.ico'          },
            { id: 'favicon-apple', file: 'apple-touch-icon.png' },
        ];
        faviconMap.forEach(function (f) {
            var el = document.getElementById(f.id);
            if (el) el.href = base + f.file;
        });
    }

    // Expose a global helper for every page's toggle button
    window.ThemeSystem = {
        KEY: STORAGE_KEY,

        get: resolveTheme,

        set: function (themeName) {
            document.documentElement.setAttribute('data-theme', themeName);
            localStorage.setItem(STORAGE_KEY, themeName);
            // Update any theme-toggle button icons on the page
            document.querySelectorAll('[data-theme-toggle]').forEach(function (btn) {
                var icon = btn.querySelector('i');
                if (icon) {
                    icon.className = themeName === 'light' ? 'fa-solid fa-sun' : 'fa-solid fa-moon';
                }
            });
            syncFaviconsNow(themeName);
            // Fire a custom event so any page can react
            document.dispatchEvent(new CustomEvent('themechange', { detail: { theme: themeName } }));
        },

        toggle: function () {
            var current = document.documentElement.getAttribute('data-theme') || 'dark';
            window.ThemeSystem.set(current === 'dark' ? 'light' : 'dark');
        },

        // Call once per page (or rely on the auto-init below)
        init: function () {
            var theme = document.documentElement.getAttribute('data-theme') || 'dark';

            // Wire every toggle button — guard against double-binding
            document.querySelectorAll('[data-theme-toggle], .theme-toggle').forEach(function (btn) {
                // Ensure the attribute is present so set() can find the icon later
                btn.setAttribute('data-theme-toggle', '');
                // Update icon to match current theme
                var icon = btn.querySelector('i');
                if (icon) {
                    icon.className = theme === 'light' ? 'fa-solid fa-sun' : 'fa-solid fa-moon';
                }
                // Guard: don't bind twice
                if (btn.dataset.themeWired) return;
                btn.dataset.themeWired = 'true';
                btn.addEventListener('click', function () {
                    window.ThemeSystem.toggle();
                });
            });

            // Favicon sync (only register the listener once per page load)
            syncFaviconsNow(theme);
            if (!_faviconWired) {
                _faviconWired = true;
                document.addEventListener('themechange', function (e) {
                    syncFaviconsNow(e.detail.theme);
                });
            }
        }
    };

    // Auto-init when DOM is ready — covers every page without needing manual init() calls
    document.addEventListener('DOMContentLoaded', function () {
        window.ThemeSystem.init();
    });

})();
