/**
 * ============================================================
 *  Portfolio Script — about.js
 *  Copyright (c) 2024–2026 Mosa Moleleki ("Mr-Shoez" / "S.U.D.O")
 *  All Rights Reserved. Proprietary & Confidential.
 *  See LICENSE in the project root for full terms.
 *  Contact: Molelekishoez@gmail.com
 * ============================================================
 */

// ─── DevTools Copyright Notice ───────────────────────────────────────────────
console.log(
  '%c⚠ STOP!',
  'color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;'
);
console.log(
  '%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-Shoez/personalPortfolioProject/blob/main/LICENSE',
  'color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;'
);
// ─────────────────────────────────────────────────────────────────────────────

document.addEventListener('DOMContentLoaded', function () {

    // =========================================
    // Theme System — delegate to theme.js
    // =========================================
    if (window.ThemeSystem) {
        window.ThemeSystem.init();

        // Sync profile photo whenever theme changes
        function syncPhoto(theme) {
            var heroPhoto = document.querySelector('.about-hero-photo');
            if (heroPhoto) {
                heroPhoto.src = theme === 'light'
                    ? 'my pictures/light mode.webp'
                    : 'my pictures/dark mode.webp';
            }
        }
        // Apply immediately on load
        syncPhoto(window.ThemeSystem.get());
        // Re-apply on every toggle
        document.addEventListener('themechange', function (e) {
            syncPhoto(e.detail.theme);
        });
    }

    // =========================================
    // Scroll Animations — Fade Up
    // =========================================
    var fadeEls = document.querySelectorAll('.ap-fade');
    if (fadeEls.length > 0) {
        var fadeObserver = new IntersectionObserver(function (entries) {
            entries.forEach(function (entry) {
                if (entry.isIntersecting) {
                    entry.target.classList.add('visible');
                    fadeObserver.unobserve(entry.target);
                }
            });
        }, { threshold: 0.1 });

        fadeEls.forEach(function (el) { fadeObserver.observe(el); });
    }

    // =========================================
    // Back To Top Button
    // =========================================
    var backToTopBtn = document.getElementById('backToTop');
    if (backToTopBtn) {
        window.addEventListener('scroll', function () {
            if (window.scrollY > 400) {
                backToTopBtn.classList.add('visible');
            } else {
                backToTopBtn.classList.remove('visible');
            }
        });

        backToTopBtn.addEventListener('click', function () {
            window.scrollTo({ top: 0, behavior: 'smooth' });
        });
    }

    // =========================================
    // Animate edu dots when card scrolls in
    // =========================================
    var eduEntries = document.querySelectorAll('.about-edu-entry');
    if (eduEntries.length > 0) {
        var eduObserver = new IntersectionObserver(function (entries) {
            entries.forEach(function (entry, i) {
                if (entry.isIntersecting) {
                    setTimeout(function () {
                        var dot = entry.target.querySelector('.about-edu-dot');
                        if (dot) dot.classList.add('filled');
                    }, i * 150);
                    eduObserver.unobserve(entry.target);
                }
            });
        }, { threshold: 0.5 });

        eduEntries.forEach(function (el) { eduObserver.observe(el); });
    }

    // =========================================
    // Stagger skill cards
    // =========================================
    var skillCards = document.querySelectorAll('.skill-card');
    if (skillCards.length > 0) {
        var cardObserver = new IntersectionObserver(function (entries) {
            entries.forEach(function (entry) {
                if (entry.isIntersecting) {
                    entry.target.style.transitionDelay = entry.target.dataset.delay || '0s';
                    entry.target.classList.add('visible');
                    cardObserver.unobserve(entry.target);
                }
            });
        }, { threshold: 0.15 });

        skillCards.forEach(function (card, i) {
            card.dataset.delay = (i * 0.06) + 's';
            card.classList.add('ap-fade');
            cardObserver.observe(card);
        });
    }

}); // end DOMContentLoaded
