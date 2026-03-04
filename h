[33mcommit da924fddacea50043e0513ee6389a07dfc8f9f45[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmain[m[33m)[m
Author: Mosa Moleleki <molelekishoez@gmail.com>
Date:   Thu Mar 5 00:07:51 2026 +0200

    trying to minify my css and js

[1mdiff --git a/404.html b/404.html[m
[1mindex 9915912..946c925 100644[m
[1m--- a/404.html[m
[1m+++ b/404.html[m
[36m@@ -19,11 +19,11 @@[m
     <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700&family=Playfair+Display:wght@700&display=swap" rel="stylesheet">[m
 [m
     <!-- Styles -->[m
[31m-    <link rel="stylesheet" href="css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/style.min.css">[m
     <link rel="stylesheet" href="css/all.min.css">[m
 [m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="js/theme.js"></script>[m
[32m+[m[32m    <script src="js/theme.min.js"></script>[m
 [m
     <style>[m
         /* =============================================[m
[1mdiff --git a/about.html b/about.html[m
[1mindex 9bdc156..5a55621 100644[m
[1m--- a/about.html[m
[1m+++ b/about.html[m
[36m@@ -38,12 +38,12 @@[m
     <meta property="og:image" content="https://yourportfolio.com/my pictures/dark mode.webp">[m
 [m
     <!-- Styles -->[m
[31m-    <link rel="stylesheet" href="css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/style.min.css">[m
     <link rel="stylesheet" href="css/all.min.css">[m
[31m-    <link rel="stylesheet" href="css/about.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/about.min.css">[m
 [m
     <!-- ===================== Universal Theme System (sync — prevents flash) ===================== -->[m
[31m-    <script src="js/theme.js"></script>[m
[32m+[m[32m    <script src="js/theme.min.js"></script>[m
 [m
     <!-- ===================== Scroll Unlock (inline — before paint) ===================== -->[m
     <script>[m
[36m@@ -489,7 +489,7 @@[m
     <!-- ========================================= -->[m
     <!-- Scripts                                   -->[m
     <!-- ========================================= -->[m
[31m-    <script src="js/about.js" defer></script>[m
[32m+[m[32m    <script src="js/about.min.js" defer></script>[m
 [m
 </body>[m
 </html>[m
[1mdiff --git a/articles.html b/articles.html[m
[1mindex 988400c..7b494d6 100644[m
[1m--- a/articles.html[m
[1m+++ b/articles.html[m
[36m@@ -9,11 +9,11 @@[m
     <meta property="og:type" content="website">[m
     <meta property="og:url" content="https://www.sudo.co.za/articles.html">[m
     <meta property="og:title" content="All Articles | Mosa Moleleki">[m
[31m-    <link rel="stylesheet" href="css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/style.min.css">[m
     <link rel="stylesheet" href="css/all.min.css">[m
[31m-    <link rel="stylesheet" href="css/blog.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/blog.min.css">[m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="js/theme.js"></script>[m
[32m+[m[32m    <script src="js/theme.min.js"></script>[m
 </head>[m
 <body>[m
     <!-- Theme Toggle -->[m
[1mdiff --git a/css/about.css b/css/about.css[m
[1mindex d5d2bf9..5081a2b 100644[m
[1m--- a/css/about.css[m
[1m+++ b/css/about.css[m
[36m@@ -1,945 +1,797 @@[m
[31m-/**[m
[31m- * ============================================================[m
[31m- *  Portfolio Stylesheet — about.css[m
[31m- *  Copyright (c) 2024–2026 Mosa Moleleki ("Mr-S-U-D-O" / "S.U.D.O")[m
[31m- *  All Rights Reserved. Proprietary & Confidential.[m
[31m- *  See LICENSE in the project root for full terms.[m
[31m- *  Contact: Molelekishoez@gmail.com[m
[31m- * ============================================================[m
[31m- */[m
[31m-[m
[31m-/* =========================================[m
[31m-   Page Base[m
[31m-========================================= */[m
[31m-/* Reset the global overflow:hidden so the about page scrolls normally */[m
[31m-html:has(body.about-page),[m
[31m-body.about-page {[m
[31m-    overflow-y: auto !important;[m
[31m-    overflow-x: hidden !important;[m
[31m-    height: auto !important;[m
[31m-}[m
[31m-[m
[32m+[m[32mbody.about-page,[m
[32m+[m[32mhtml:has(body.about-page) {[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden !important;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m}[m
 .about-page {[m
[31m-    min-height: 100vh;[m
[31m-    background: var(--bg-dark);[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Shared fade-up animation[m
[31m-========================================= */[m
[32m+[m[32m  min-height: 100vh;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m}[m
 .ap-fade {[m
[31m-    opacity: 0;[m
[31m-    transform: translateY(35px);[m
[31m-    transition: opacity 0.75s ease-out, transform 0.75s ease-out;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(35px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.75s ease-out,[m
[32m+[m[32m    transform 0.75s ease-out;[m
 }[m
[31m-[m
 .ap-fade.visible {[m
[31m-    opacity: 1;[m
[31m-    transform: translateY(0);[m
[31m-}[m
[31m-[m
[31m-.ap-fade-delay-1 { transition-delay: 0.1s; }[m
[31m-.ap-fade-delay-2 { transition-delay: 0.2s; }[m
[31m-.ap-fade-delay-3 { transition-delay: 0.3s; }[m
[31m-.ap-fade-delay-4 { transition-delay: 0.4s; }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Back Nav Bar[m
[31m-========================================= */[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-1 {[m
[32m+[m[32m  transition-delay: 0.1s;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-2 {[m
[32m+[m[32m  transition-delay: 0.2s;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-3 {[m
[32m+[m[32m  transition-delay: 0.3s;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-4 {[m
[32m+[m[32m  transition-delay: 0.4s;[m
[32m+[m[32m}[m
 .about-topbar {[m
[31m-    position: fixed;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    right: 0;[m
[31m-    z-index: 9000;[m
[31m-    padding: 16px 40px;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: space-between;[m
[31m-    background: var(--glass-bg);[m
[31m-    backdrop-filter: blur(12px);[m
[31m-    border-bottom: 1px solid var(--glass-border);[m
[31m-    transition: background 0.4s ease;[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  z-index: 9000;[m
[32m+[m[32m  padding: 16px 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(12px);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m  transition: background 0.4s ease;[m
 }[m
[31m-[m
 .about-back-link {[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 10px;[m
[31m-    text-decoration: none;[m
[31m-    color: var(--text-muted);[m
[31m-    font-size: 0.9rem;[m
[31m-    font-weight: 500;[m
[31m-    letter-spacing: 1px;[m
[31m-    text-transform: uppercase;[m
[31m-    transition: color 0.3s ease, gap 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    gap 0.3s ease;[m
[32m+[m[32m}[m
 .about-back-link:hover {[m
[31m-    color: var(--accent-primary);[m
[31m-    gap: 14px;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  gap: 14px;[m
 }[m
[31m-[m
 .about-topbar-name {[m
[31m-    font-size: 0.9rem;[m
[31m-    color: var(--text-muted);[m
[31m-    font-weight: 500;[m
[31m-    letter-spacing: 2px;[m
[31m-    text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-/* Theme + Mute toggles inherited from style.css */[m
[31m-[m
[31m-/* =========================================[m
[31m-   Section Container Utility[m
[31m-========================================= */[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m}[m
 .ap-section {[m
[31m-    padding: 100px 40px;[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .ap-section-wide {[m
[31m-    padding: 100px 40px;[m
[31m-    max-width: 100%;[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 100%;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   1. Hero Section[m
[31m-========================================= */[m
 .about-hero {[m
[31m-    padding-top: 160px; /* Clear the fixed topbar */[m
[31m-    padding-bottom: 80px;[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[31m-    padding-left: 40px;[m
[31m-    padding-right: 40px;[m
[31m-    display: grid;[m
[31m-    grid-template-columns: 300px 1fr;[m
[31m-    gap: 70px;[m
[31m-    align-items: center;[m
[32m+[m[32m  padding-top: 160px;[m
[32m+[m[32m  padding-bottom: 80px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding-left: 40px;[m
[32m+[m[32m  padding-right: 40px;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: 300px 1fr;[m
[32m+[m[32m  gap: 70px;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
 .about-hero-photo-wrap {[m
[31m-    position: relative;[m
[32m+[m[32m  position: relative;[m
 }[m
[31m-[m
 .about-hero-photo {[m
[31m-    width: 100%;[m
[31m-    aspect-ratio: 3 / 4;[m
[31m-    object-fit: cover;[m
[31m-    object-position: top;[m
[31m-    border-radius: 20px;[m
[31m-    display: block;[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    box-shadow: 0 30px 80px rgba(0,0,0,0.4);[m
[31m-}[m
[31m-[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  aspect-ratio: 3/4;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  object-position: top;[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  box-shadow: 0 30px 80px rgba(0, 0, 0, 0.4);[m
[32m+[m[32m}[m
 .about-hero-photo-accent {[m
[31m-    position: absolute;[m
[31m-    top: 20px;[m
[31m-    left: -20px;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    border: 2px solid var(--accent-primary);[m
[31m-    border-radius: 20px;[m
[31m-    z-index: -1;[m
[31m-    opacity: 0.4;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  left: -20px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  border: 2px solid var(--accent-primary);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  z-index: -1;[m
[32m+[m[32m  opacity: 0.4;[m
[32m+[m[32m}[m
 .about-hero-text {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 22px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 22px;[m
 }[m
[31m-[m
 .about-hero-label {[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .about-hero-name {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(3rem, 5vw, 5rem);[m
[31m-    font-weight: 700;[m
[31m-    line-height: 1.05;[m
[31m-    margin: 0;[m
[31m-    color: var(--text-light);[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(3rem, 5vw, 5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  line-height: 1.05;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
 .about-hero-role {[m
[31m-    font-size: 1.1rem;[m
[31m-    color: var(--text-muted);[m
[31m-    font-weight: 400;[m
[31m-    margin: 0;[m
[31m-    letter-spacing: 1px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  letter-spacing: 1px;[m
 }[m
[31m-[m
 .about-hero-role span {[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .about-hero-pills {[m
[31m-    display: flex;[m
[31m-    flex-wrap: wrap;[m
[31m-    gap: 10px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 10px;[m
 }[m
[31m-[m
 .about-pill {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 7px;[m
[31m-    padding: 7px 16px;[m
[31m-    background: var(--glass-bg);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 50px;[m
[31m-    font-size: 0.82rem;[m
[31m-    font-weight: 500;[m
[31m-    color: var(--text-muted);[m
[31m-    backdrop-filter: blur(8px);[m
[31m-    transition: border-color 0.3s ease, color 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 7px;[m
[32m+[m[32m  padding: 7px 16px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 0.82rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  backdrop-filter: blur(8px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    color 0.3s ease;[m
[32m+[m[32m}[m
 .about-pill:hover {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    color: var(--text-light);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--text-light);[m
 }[m
[31m-[m
 .about-pill i {[m
[31m-    font-size: 0.75rem;[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  font-size: 0.75rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .about-hero-intro {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 18px;[m
[31m-    padding-top: 10px;[m
[31m-    border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m  padding-top: 10px;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
 }[m
[31m-[m
 .about-hero-intro p {[m
[31m-    font-size: 1rem;[m
[31m-    line-height: 1.8;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-hero-intro p strong {[m
[31m-    color: var(--text-light);[m
[31m-    font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 600;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   2. Stats Strip[m
[31m-========================================= */[m
 .about-stats-strip {[m
[31m-    background: var(--glass-bg);[m
[31m-    border-top: 1px solid var(--glass-border);[m
[31m-    border-bottom: 1px solid var(--glass-border);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    padding: 50px 40px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  padding: 50px 40px;[m
 }[m
[31m-[m
 .about-stats-inner {[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(4, 1fr);[m
[31m-    gap: 20px;[m
[31m-    text-align: center;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(4, 1fr);[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  text-align: center;[m
 }[m
[31m-[m
 .about-stat-item {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 8px;[m
[31m-    padding: 20px;[m
[31m-    position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  position: relative;[m
 }[m
[31m-[m
 .about-stat-item:not(:last-child)::after {[m
[31m-    content: '';[m
[31m-    position: absolute;[m
[31m-    right: 0;[m
[31m-    top: 20%;[m
[31m-    height: 60%;[m
[31m-    width: 1px;[m
[31m-    background: var(--glass-border);[m
[31m-}[m
[31m-[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  top: 20%;[m
[32m+[m[32m  height: 60%;[m
[32m+[m[32m  width: 1px;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m}[m
 .about-stat-number {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2.5rem, 4vw, 3.5rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    line-height: 1;[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2.5rem, 4vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  line-height: 1;[m
 }[m
[31m-[m
 .about-stat-label {[m
[31m-    font-size: 0.85rem;[m
[31m-    color: var(--text-muted);[m
[31m-    font-weight: 500;[m
[31m-    letter-spacing: 1px;[m
[31m-    text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   3. Origin Story[m
[31m-========================================= */[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m}[m
 .about-origin {[m
[31m-    padding: 120px 40px;[m
[31m-    max-width: 800px;[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  padding: 120px 40px;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .about-origin-eyebrow {[m
[31m-    display: block;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin-bottom: 20px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 20px;[m
[32m+[m[32m}[m
 .about-origin-heading {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2rem, 3.5vw, 3rem);[m
[31m-    font-weight: 700;[m
[31m-    line-height: 1.2;[m
[31m-    margin: 0 0 50px 0;[m
[31m-    color: var(--text-light);[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  line-height: 1.2;[m
[32m+[m[32m  margin: 0 0 50px 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
 .about-origin-body {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 24px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 24px;[m
 }[m
[31m-[m
 .about-origin-body p {[m
[31m-    font-size: 1.05rem;[m
[31m-    line-height: 1.85;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1.05rem;[m
[32m+[m[32m  line-height: 1.85;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-origin-body p strong {[m
[31m-    color: var(--text-light);[m
[31m-    font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 600;[m
 }[m
[31m-[m
 .about-pull-quote {[m
[31m-    margin: 30px 0;[m
[31m-    padding: 28px 36px;[m
[31m-    border-left: 4px solid var(--accent-primary);[m
[31m-    background: var(--glass-bg);[m
[31m-    border-radius: 0 12px 12px 0;[m
[31m-    backdrop-filter: blur(8px);[m
[31m-}[m
[31m-[m
[32m+[m[32m  margin: 30px 0;[m
[32m+[m[32m  padding: 28px 36px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-radius: 0 12px 12px 0;[m
[32m+[m[32m  backdrop-filter: blur(8px);[m
[32m+[m[32m}[m
 .about-pull-quote p {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: 1.3rem;[m
[31m-    font-style: italic;[m
[31m-    color: var(--text-light) !important;[m
[31m-    line-height: 1.6;[m
[31m-    margin: 0 !important;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   4. Education Decision[m
[31m-========================================= */[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: 1.3rem;[m
[32m+[m[32m  font-style: italic;[m
[32m+[m[32m  color: var(--text-light) !important;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  margin: 0 !important;[m
[32m+[m[32m}[m
 .about-education {[m
[31m-    padding: 100px 40px;[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[31m-    display: grid;[m
[31m-    grid-template-columns: 1fr 1fr;[m
[31m-    gap: 70px;[m
[31m-    align-items: center;[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: 1fr 1fr;[m
[32m+[m[32m  gap: 70px;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
 .about-edu-card {[m
[31m-    background: var(--glass-bg);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 20px;[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    padding: 40px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 0;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  padding: 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 0;[m
 }[m
[31m-[m
 .about-edu-entry {[m
[31m-    display: flex;[m
[31m-    gap: 20px;[m
[31m-    padding: 24px 0;[m
[31m-    position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  padding: 24px 0;[m
[32m+[m[32m  position: relative;[m
 }[m
[31m-[m
 .about-edu-entry:not(:last-child) {[m
[31m-    border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
 }[m
[31m-[m
 .about-edu-dot-col {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-    gap: 6px;[m
[31m-    padding-top: 5px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 6px;[m
[32m+[m[32m  padding-top: 5px;[m
 }[m
[31m-[m
 .about-edu-dot {[m
[31m-    width: 12px;[m
[31m-    height: 12px;[m
[31m-    border-radius: 50%;[m
[31m-    border: 2px solid var(--glass-line);[m
[31m-    background: var(--bg-dark);[m
[31m-    flex-shrink: 0;[m
[31m-    transition: border-color 0.3s ease;[m
[32m+[m[32m  width: 12px;[m
[32m+[m[32m  height: 12px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  border: 2px solid var(--glass-line);[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  transition: border-color 0.3s ease;[m
 }[m
[31m-[m
 .about-edu-dot.filled {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    background: var(--accent-primary);[m
[31m-    box-shadow: 0 0 10px var(--accent-primary);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 10px var(--accent-primary);[m
 }[m
[31m-[m
 .about-edu-dot-line {[m
[31m-    width: 2px;[m
[31m-    flex: 1;[m
[31m-    background: var(--glass-border);[m
[31m-    min-height: 20px;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m  min-height: 20px;[m
 }[m
[31m-[m
 .about-edu-info {[m
[31m-    flex: 1;[m
[32m+[m[32m  flex: 1;[m
 }[m
[31m-[m
 .about-edu-date {[m
[31m-    font-size: 0.8rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 2px;[m
[31m-    text-transform: uppercase;[m
[31m-    margin-bottom: 4px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin-bottom: 4px;[m
[32m+[m[32m}[m
 .about-edu-title {[m
[31m-    font-size: 1rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-light);[m
[31m-    margin-bottom: 4px;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin-bottom: 4px;[m
 }[m
[31m-[m
 .about-edu-sub {[m
[31m-    font-size: 0.88rem;[m
[31m-    color: var(--text-muted);[m
[31m-    line-height: 1.5;[m
[32m+[m[32m  font-size: 0.88rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  line-height: 1.5;[m
 }[m
[31m-[m
 .about-edu-text {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 22px;[m
[31m-    justify-content: center;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 22px;[m
[32m+[m[32m  justify-content: center;[m
 }[m
[31m-[m
 .about-edu-eyebrow {[m
[31m-    display: block;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
 .about-edu-heading {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(1.8rem, 3vw, 2.5rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    margin: 0;[m
[31m-    line-height: 1.2;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(1.8rem, 3vw, 2.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  line-height: 1.2;[m
[32m+[m[32m}[m
 .about-edu-text p {[m
[31m-    font-size: 1rem;[m
[31m-    line-height: 1.8;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-edu-text p strong {[m
[31m-    color: var(--text-light);[m
[31m-    font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 600;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   5. Work Philosophy[m
[31m-========================================= */[m
 .about-philosophy {[m
[31m-    padding: 100px 40px;[m
[31m-    background: var(--glass-bg);[m
[31m-    border-top: 1px solid var(--glass-border);[m
[31m-    border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
 }[m
[31m-[m
 .about-philosophy-inner {[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .about-philosophy-header {[m
[31m-    text-align: center;[m
[31m-    margin-bottom: 70px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-bottom: 70px;[m
 }[m
[31m-[m
 .about-philosophy-eyebrow {[m
[31m-    display: block;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin-bottom: 14px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 14px;[m
[32m+[m[32m}[m
 .about-philosophy-heading {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2rem, 3.5vw, 3rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-philosophy-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(3, 1fr);[m
[31m-    gap: 30px;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(3, 1fr);[m
[32m+[m[32m  gap: 30px;[m
 }[m
[31m-[m
 .about-philo-card {[m
[31m-    background: var(--bg-dark);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 20px;[m
[31m-    padding: 40px 30px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 18px;[m
[31m-    transition: border-color 0.3s ease, transform 0.3s ease;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  padding: 40px 30px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
 }[m
[31m-[m
 .about-philo-card:hover {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    transform: translateY(-6px);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-6px);[m
 }[m
[31m-[m
 .about-philo-icon {[m
[31m-    font-size: 2rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    transition: transform 0.3s ease;[m
[32m+[m[32m  font-size: 2rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  transition: transform 0.3s ease;[m
 }[m
[31m-[m
 .about-philo-card:hover .about-philo-icon {[m
[31m-    transform: scale(1.1);[m
[32m+[m[32m  transform: scale(1.1);[m
 }[m
[31m-[m
 .about-philo-title {[m
[31m-    font-size: 1.15rem;[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-philo-desc {[m
[31m-    font-size: 0.95rem;[m
[31m-    color: var(--text-muted);[m
[31m-    line-height: 1.7;[m
[31m-    margin: 0;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   6. Core Competencies (Skills)[m
[31m-========================================= */[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
 .about-skills {[m
[31m-    padding: 100px 40px;[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .about-skills-header {[m
[31m-    margin-bottom: 60px;[m
[32m+[m[32m  margin-bottom: 60px;[m
 }[m
[31m-[m
 .about-skills-eyebrow {[m
[31m-    display: block;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin-bottom: 14px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 14px;[m
[32m+[m[32m}[m
 .about-skills-heading {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2rem, 3.5vw, 3rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    margin: 0 0 12px 0;[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0 0 12px 0;[m
 }[m
[31m-[m
 .about-skills-intro {[m
[31m-    font-size: 1rem;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0;[m
[31m-    line-height: 1.7;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  line-height: 1.7;[m
 }[m
[31m-[m
 .about-skills-group {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 50px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 50px;[m
 }[m
[31m-[m
 .about-skills-subheading {[m
[31m-    font-size: 1.1rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    margin: 0 0 20px 0;[m
[31m-    padding-left: 14px;[m
[31m-    border-left: 4px solid var(--accent-primary);[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  margin: 0 0 20px 0;[m
[32m+[m[32m  padding-left: 14px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m}[m
 .about-skills-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(auto-fit, minmax(260px, 1fr));[m
[31m-    gap: 18px;[m
[31m-}[m
[31m-[m
[31m-/* Skill cards reused from style.css — same .skill-card pattern */[m
[31m-[m
[31m-/* =========================================[m
[31m-   7. Tech Stack Grid[m
[31m-========================================= */[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(260px, 1fr));[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m}[m
 .about-stack {[m
[31m-    padding: 100px 40px;[m
[31m-    background: var(--glass-bg);[m
[31m-    border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
 }[m
[31m-[m
 .about-stack-inner {[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .about-stack-header {[m
[31m-    margin-bottom: 60px;[m
[32m+[m[32m  margin-bottom: 60px;[m
 }[m
[31m-[m
 .about-stack-eyebrow {[m
[31m-    display: block;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin-bottom: 14px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 14px;[m
[32m+[m[32m}[m
 .about-stack-heading {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2rem, 3.5vw, 3rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-stack-group {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 30px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 30px;[m
 }[m
[31m-[m
 .about-stack-row {[m
[31m-    display: flex;[m
[31m-    flex-wrap: wrap;[m
[31m-    gap: 12px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 12px;[m
 }[m
[31m-[m
 .about-stack-row-label {[m
[31m-    width: 100%;[m
[31m-    font-size: 0.75rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 3px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 4px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  font-size: 0.75rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 4px;[m
[32m+[m[32m}[m
 .about-tech-pill {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 8px;[m
[31m-    padding: 9px 18px;[m
[31m-    background: var(--bg-dark);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 50px;[m
[31m-    font-size: 0.88rem;[m
[31m-    font-weight: 500;[m
[31m-    color: var(--text-muted);[m
[31m-    transition: border-color 0.3s ease, color 0.3s ease, transform 0.2s ease;[m
[31m-    cursor: default;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  padding: 9px 18px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 0.88rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.2s ease;[m
[32m+[m[32m  cursor: default;[m
[32m+[m[32m}[m
 .about-tech-pill:hover {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    color: var(--text-light);[m
[31m-    transform: translateY(-3px);[m
[31m-}[m
[31m-[m
[31m-.about-tech-pill i, .about-tech-pill svg {[m
[31m-    font-size: 1.1rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    width: 16px;[m
[31m-    text-align: center;[m
[31m-}[m
[31m-[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transform: translateY(-3px);[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill i,[m
 .about-tech-pill svg {[m
[31m-    width: 16px;[m
[31m-    height: 16px;[m
[31m-    fill: var(--accent-primary);[m
[31m-    flex-shrink: 0;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill svg {[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  fill: var(--accent-primary);[m
[32m+[m[32m  flex-shrink: 0;[m
 }[m
[31m-[m
 .about-stack-divider {[m
[31m-    height: 1px;[m
[31m-    background: var(--glass-border);[m
[31m-    margin: 10px 0;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m  margin: 10px 0;[m
 }[m
[31m-[m
 .about-tech-pill.exploring {[m
[31m-    opacity: 0.6;[m
[31m-    border-style: dashed;[m
[32m+[m[32m  opacity: 0.6;[m
[32m+[m[32m  border-style: dashed;[m
 }[m
[31m-[m
 .about-tech-pill.exploring:hover {[m
[31m-    opacity: 1;[m
[32m+[m[32m  opacity: 1;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   8. Closing CTA[m
[31m-========================================= */[m
 .about-cta {[m
[31m-    padding: 120px 40px;[m
[31m-    text-align: center;[m
[31m-    border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  padding: 120px 40px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
 }[m
[31m-[m
 .about-cta-eyebrow {[m
[31m-    display: block;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 4px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin-bottom: 20px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 20px;[m
[32m+[m[32m}[m
 .about-cta-heading {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2.5rem, 5vw, 4rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    margin: 0 0 16px 0;[m
[31m-    line-height: 1.1;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2.5rem, 5vw, 4rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0 0 16px 0;[m
[32m+[m[32m  line-height: 1.1;[m
[32m+[m[32m}[m
 .about-cta-sub {[m
[31m-    font-size: 1.05rem;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0 0 50px 0;[m
[31m-    max-width: 500px;[m
[31m-    margin-left: auto;[m
[31m-    margin-right: auto;[m
[31m-    line-height: 1.7;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 1.05rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0 0 50px 0;[m
[32m+[m[32m  max-width: 500px;[m
[32m+[m[32m  margin-left: auto;[m
[32m+[m[32m  margin-right: auto;[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m}[m
 .about-cta-buttons {[m
[31m-    display: flex;[m
[31m-    gap: 18px;[m
[31m-    justify-content: center;[m
[31m-    flex-wrap: wrap;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  flex-wrap: wrap;[m
 }[m
[31m-[m
 .about-cta-btn-primary {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 10px;[m
[31m-    padding: 16px 36px;[m
[31m-    background: var(--accent-primary);[m
[31m-    color: #fff;[m
[31m-    border: none;[m
[31m-    border-radius: 50px;[m
[31m-    font-size: 1rem;[m
[31m-    font-weight: 600;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    text-decoration: none;[m
[31m-    cursor: pointer;[m
[31m-    transition: transform 0.3s ease, box-shadow 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  padding: 16px 36px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    box-shadow 0.3s ease;[m
[32m+[m[32m}[m
 .about-cta-btn-primary:hover {[m
[31m-    transform: translateY(-4px);[m
[31m-    box-shadow: 0 12px 35px rgba(0, 140, 255, 0.5);[m
[32m+[m[32m  transform: translateY(-4px);[m
[32m+[m[32m  box-shadow: 0 12px 35px rgba(0, 140, 255, 0.5);[m
 }[m
[31m-[m
 .about-cta-btn-secondary {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 10px;[m
[31m-    padding: 16px 36px;[m
[31m-    background: transparent;[m
[31m-    color: var(--text-light);[m
[31m-    border: 2px solid var(--glass-line);[m
[31m-    border-radius: 50px;[m
[31m-    font-size: 1rem;[m
[31m-    font-weight: 600;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    text-decoration: none;[m
[31m-    cursor: pointer;[m
[31m-    transition: border-color 0.3s ease, color 0.3s ease, transform 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  padding: 16px 36px;[m
[32m+[m[32m  background: 0 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  border: 2px solid var(--glass-line);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
 .about-cta-btn-secondary:hover {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    color: var(--accent-primary);[m
[31m-    transform: translateY(-4px);[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Back to Top Button[m
[31m-========================================= */[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-4px);[m
[32m+[m[32m}[m
 .back-to-top {[m
[31m-    position: fixed;[m
[31m-    bottom: 40px;[m
[31m-    right: 40px;[m
[31m-    width: 48px;[m
[31m-    height: 48px;[m
[31m-    border-radius: 50%;[m
[31m-    background: var(--glass-bg);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    color: var(--text-light);[m
[31m-    font-size: 1.2rem;[m
[31m-    cursor: pointer;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    z-index: 9000;[m
[31m-    opacity: 0;[m
[31m-    transform: translateY(20px);[m
[31m-    transition: opacity 0.3s ease, transform 0.3s ease, border-color 0.3s ease;[m
[31m-    pointer-events: none;[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  bottom: 40px;[m
[32m+[m[32m  right: 40px;[m
[32m+[m[32m  width: 48px;[m
[32m+[m[32m  height: 48px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  z-index: 9000;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(20px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    border-color 0.3s ease;[m
[32m+[m[32m  pointer-events: none;[m
 }[m
[31m-[m
 .back-to-top.visible {[m
[31m-    opacity: 1;[m
[31m-    transform: translateY(0);[m
[31m-    pointer-events: all;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m  pointer-events: all;[m
 }[m
[31m-[m
 .back-to-top:hover {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Responsive[m
[31m-========================================= */[m
 @media (max-width: 900px) {[m
[31m-    .about-hero {[m
[31m-        grid-template-columns: 1fr;[m
[31m-        gap: 40px;[m
[31m-        padding-top: 120px;[m
[31m-    }[m
[31m-[m
[31m-    .about-hero-photo-wrap {[m
[31m-        max-width: 200px;[m
[31m-        margin: 0 auto;[m
[31m-    }[m
[31m-[m
[31m-    /* Circle crop on mobile — desktop keeps the 3/4 portrait ratio */[m
[31m-    .about-hero-photo {[m
[31m-        aspect-ratio: 1 / 1;[m
[31m-        border-radius: 50%;[m
[31m-        object-position: center top;[m
[31m-    }[m
[31m-[m
[31m-    .about-hero-photo-accent {[m
[31m-        border-radius: 50%;[m
[31m-        top: 10px;[m
[31m-        left: -10px;[m
[31m-    }[m
[31m-[m
[31m-    .about-stats-inner {[m
[31m-        grid-template-columns: repeat(2, 1fr);[m
[31m-    }[m
[31m-[m
[31m-    .about-stat-item:nth-child(2)::after {[m
[31m-        display: none;[m
[31m-    }[m
[31m-[m
[31m-    .about-education {[m
[31m-        grid-template-columns: 1fr;[m
[31m-        gap: 40px;[m
[31m-    }[m
[31m-[m
[31m-    .about-philosophy-grid {[m
[31m-        grid-template-columns: 1fr;[m
[31m-    }[m
[31m-}[m
[31m-[m
[32m+[m[32m  .about-hero {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m    padding-top: 120px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-hero-photo-wrap {[m
[32m+[m[32m    max-width: 200px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-hero-photo {[m
[32m+[m[32m    aspect-ratio: 1/1;[m
[32m+[m[32m    border-radius: 50%;[m
[32m+[m[32m    object-position: center top;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-hero-photo-accent {[m
[32m+[m[32m    border-radius: 50%;[m
[32m+[m[32m    top: 10px;[m
[32m+[m[32m    left: -10px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stats-inner {[m
[32m+[m[32m    grid-template-columns: repeat(2, 1fr);[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stat-item:nth-child(2)::after {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-education {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-philosophy-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 @media (max-width: 600px) {[m
[31m-    .ap-section,[m
[31m-    .about-hero,[m
[31m-    .about-origin,[m
[31m-    .about-education,[m
[31m-    .about-skills,[m
[31m-    .about-stack-inner,[m
[31m-    .about-cta {[m
[31m-        padding-left: 20px;[m
[31m-        padding-right: 20px;[m
[31m-    }[m
[31m-[m
[31m-    .about-topbar {[m
[31m-        padding: 14px 20px;[m
[31m-    }[m
[31m-[m
[31m-    .about-stats-inner {[m
[31m-        grid-template-columns: repeat(2, 1fr);[m
[31m-    }[m
[31m-[m
[31m-    .about-stat-item::after {[m
[31m-        display: none;[m
[31m-    }[m
[31m-[m
[31m-    .about-cta-buttons {[m
[31m-        flex-direction: column;[m
[31m-        align-items: center;[m
[31m-    }[m
[31m-[m
[31m-    .about-philosophy-grid {[m
[31m-        grid-template-columns: 1fr;[m
[31m-    }[m
[32m+[m[32m  .about-cta,[m
[32m+[m[32m  .about-education,[m
[32m+[m[32m  .about-hero,[m
[32m+[m[32m  .about-origin,[m
[32m+[m[32m  .about-skills,[m
[32m+[m[32m  .about-stack-inner,[m
[32m+[m[32m  .ap-section {[m
[32m+[m[32m    padding-left: 20px;[m
[32m+[m[32m    padding-right: 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-topbar {[m
[32m+[m[32m    padding: 14px 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stats-inner {[m
[32m+[m[32m    grid-template-columns: repeat(2, 1fr);[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stat-item::after {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-cta-buttons {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    align-items: center;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-philosophy-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
 }[m
[1mdiff --git a/css/about.min.css b/css/about.min.css[m
[1mnew file mode 100644[m
[1mindex 0000000..5081a2b[m
[1m--- /dev/null[m
[1m+++ b/css/about.min.css[m
[36m@@ -0,0 +1,797 @@[m
[32m+[m[32mbody.about-page,[m
[32m+[m[32mhtml:has(body.about-page) {[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden !important;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m}[m
[32m+[m[32m.about-page {[m
[32m+[m[32m  min-height: 100vh;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade {[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(35px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.75s ease-out,[m
[32m+[m[32m    transform 0.75s ease-out;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade.visible {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-1 {[m
[32m+[m[32m  transition-delay: 0.1s;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-2 {[m
[32m+[m[32m  transition-delay: 0.2s;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-3 {[m
[32m+[m[32m  transition-delay: 0.3s;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-fade-delay-4 {[m
[32m+[m[32m  transition-delay: 0.4s;[m
[32m+[m[32m}[m
[32m+[m[32m.about-topbar {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  z-index: 9000;[m
[32m+[m[32m  padding: 16px 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(12px);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m  transition: background 0.4s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-back-link {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    gap 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-back-link:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  gap: 14px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-topbar-name {[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-section {[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.ap-section-wide {[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero {[m
[32m+[m[32m  padding-top: 160px;[m
[32m+[m[32m  padding-bottom: 80px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding-left: 40px;[m
[32m+[m[32m  padding-right: 40px;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: 300px 1fr;[m
[32m+[m[32m  gap: 70px;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-photo-wrap {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-photo {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  aspect-ratio: 3/4;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  object-position: top;[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  box-shadow: 0 30px 80px rgba(0, 0, 0, 0.4);[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-photo-accent {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  left: -20px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  border: 2px solid var(--accent-primary);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  z-index: -1;[m
[32m+[m[32m  opacity: 0.4;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-text {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 22px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-label {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-name {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(3rem, 5vw, 5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  line-height: 1.05;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-role {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-role span {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-pills {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-pill {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 7px;[m
[32m+[m[32m  padding: 7px 16px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 0.82rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  backdrop-filter: blur(8px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-pill:hover {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.about-pill i {[m
[32m+[m[32m  font-size: 0.75rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-intro {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m  padding-top: 10px;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-intro p {[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-hero-intro p strong {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stats-strip {[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  padding: 50px 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stats-inner {[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(4, 1fr);[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stat-item {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stat-item:not(:last-child)::after {[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  top: 20%;[m
[32m+[m[32m  height: 60%;[m
[32m+[m[32m  width: 1px;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.about-stat-number {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2.5rem, 4vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  line-height: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stat-label {[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m}[m
[32m+[m[32m.about-origin {[m
[32m+[m[32m  padding: 120px 40px;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.about-origin-eyebrow {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-origin-heading {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  line-height: 1.2;[m
[32m+[m[32m  margin: 0 0 50px 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.about-origin-body {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 24px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-origin-body p {[m
[32m+[m[32m  font-size: 1.05rem;[m
[32m+[m[32m  line-height: 1.85;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-origin-body p strong {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.about-pull-quote {[m
[32m+[m[32m  margin: 30px 0;[m
[32m+[m[32m  padding: 28px 36px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-radius: 0 12px 12px 0;[m
[32m+[m[32m  backdrop-filter: blur(8px);[m
[32m+[m[32m}[m
[32m+[m[32m.about-pull-quote p {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: 1.3rem;[m
[32m+[m[32m  font-style: italic;[m
[32m+[m[32m  color: var(--text-light) !important;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  margin: 0 !important;[m
[32m+[m[32m}[m
[32m+[m[32m.about-education {[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: 1fr 1fr;[m
[32m+[m[32m  gap: 70px;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-card {[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  padding: 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-entry {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  padding: 24px 0;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-entry:not(:last-child) {[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-dot-col {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 6px;[m
[32m+[m[32m  padding-top: 5px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-dot {[m
[32m+[m[32m  width: 12px;[m
[32m+[m[32m  height: 12px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  border: 2px solid var(--glass-line);[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  transition: border-color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-dot.filled {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 10px var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-dot-line {[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m  min-height: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-info {[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-date {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin-bottom: 4px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-title {[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin-bottom: 4px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-sub {[m
[32m+[m[32m  font-size: 0.88rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  line-height: 1.5;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-text {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 22px;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-eyebrow {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-heading {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(1.8rem, 3vw, 2.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  line-height: 1.2;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-text p {[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-edu-text p strong {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philosophy {[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.about-philosophy-inner {[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philosophy-header {[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-bottom: 70px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philosophy-eyebrow {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 14px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philosophy-heading {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philosophy-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(3, 1fr);[m
[32m+[m[32m  gap: 30px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philo-card {[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  padding: 40px 30px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philo-card:hover {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-6px);[m
[32m+[m[32m}[m
[32m+[m[32m.about-philo-icon {[m
[32m+[m[32m  font-size: 2rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philo-card:hover .about-philo-icon {[m
[32m+[m[32m  transform: scale(1.1);[m
[32m+[m[32m}[m
[32m+[m[32m.about-philo-title {[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-philo-desc {[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills {[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-header {[m
[32m+[m[32m  margin-bottom: 60px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-eyebrow {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 14px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-heading {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0 0 12px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-intro {[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-group {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 50px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-subheading {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  margin: 0 0 20px 0;[m
[32m+[m[32m  padding-left: 14px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.about-skills-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(260px, 1fr));[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack {[m
[32m+[m[32m  padding: 100px 40px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-inner {[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-header {[m
[32m+[m[32m  margin-bottom: 60px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-eyebrow {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 14px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-heading {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2rem, 3.5vw, 3rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-group {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 30px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-row {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 12px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-row-label {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  font-size: 0.75rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 4px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  padding: 9px 18px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 0.88rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.2s ease;[m
[32m+[m[32m  cursor: default;[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill:hover {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transform: translateY(-3px);[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill i,[m
[32m+[m[32m.about-tech-pill svg {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill svg {[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  fill: var(--accent-primary);[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-stack-divider {[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m  margin: 10px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill.exploring {[m
[32m+[m[32m  opacity: 0.6;[m
[32m+[m[32m  border-style: dashed;[m
[32m+[m[32m}[m
[32m+[m[32m.about-tech-pill.exploring:hover {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta {[m
[32m+[m[32m  padding: 120px 40px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-eyebrow {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-bottom: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-heading {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2.5rem, 5vw, 4rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0 0 16px 0;[m
[32m+[m[32m  line-height: 1.1;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-sub {[m
[32m+[m[32m  font-size: 1.05rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0 0 50px 0;[m
[32m+[m[32m  max-width: 500px;[m
[32m+[m[32m  margin-left: auto;[m
[32m+[m[32m  margin-right: auto;[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-buttons {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 18px;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-btn-primary {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  padding: 16px 36px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    box-shadow 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-btn-primary:hover {[m
[32m+[m[32m  transform: translateY(-4px);[m
[32m+[m[32m  box-shadow: 0 12px 35px rgba(0, 140, 255, 0.5);[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-btn-secondary {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  padding: 16px 36px;[m
[32m+[m[32m  background: 0 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  border: 2px solid var(--glass-line);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.about-cta-btn-secondary:hover {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-4px);[m
[32m+[m[32m}[m
[32m+[m[32m.back-to-top {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  bottom: 40px;[m
[32m+[m[32m  right: 40px;[m
[32m+[m[32m  width: 48px;[m
[32m+[m[32m  height: 48px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  z-index: 9000;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(20px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    border-color 0.3s ease;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.back-to-top.visible {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m  pointer-events: all;[m
[32m+[m[32m}[m
[32m+[m[32m.back-to-top:hover {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 900px) {[m
[32m+[m[32m  .about-hero {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m    padding-top: 120px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-hero-photo-wrap {[m
[32m+[m[32m    max-width: 200px;[m
[32m+[m[32m    margin: 0 auto;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-hero-photo {[m
[32m+[m[32m    aspect-ratio: 1/1;[m
[32m+[m[32m    border-radius: 50%;[m
[32m+[m[32m    object-position: center top;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-hero-photo-accent {[m
[32m+[m[32m    border-radius: 50%;[m
[32m+[m[32m    top: 10px;[m
[32m+[m[32m    left: -10px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stats-inner {[m
[32m+[m[32m    grid-template-columns: repeat(2, 1fr);[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stat-item:nth-child(2)::after {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-education {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-philosophy-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 600px) {[m
[32m+[m[32m  .about-cta,[m
[32m+[m[32m  .about-education,[m
[32m+[m[32m  .about-hero,[m
[32m+[m[32m  .about-origin,[m
[32m+[m[32m  .about-skills,[m
[32m+[m[32m  .about-stack-inner,[m
[32m+[m[32m  .ap-section {[m
[32m+[m[32m    padding-left: 20px;[m
[32m+[m[32m    padding-right: 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-topbar {[m
[32m+[m[32m    padding: 14px 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stats-inner {[m
[32m+[m[32m    grid-template-columns: repeat(2, 1fr);[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-stat-item::after {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-cta-buttons {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    align-items: center;[m
[32m+[m[32m  }[m
[32m+[m[32m  .about-philosophy-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/css/all.min.css b/css/all.min.css[m
[1mindex b2da17d..0159f0c 100644[m
[1m--- a/css/all.min.css[m
[1m+++ b/css/all.min.css[m
[36m@@ -3,7 +3,7036 @@[m
  * License - https://fontawesome.com/license/free (Icons: CC BY 4.0, Fonts: SIL OFL 1.1, Code: MIT License)[m
  * Copyright 2026 Fonticons, Inc.[m
  */[m
[31m-.fa,.fa-brands,.fa-classic,.fa-regular,.fa-solid,.fab,.far,.fas{--_fa-family:var(--fa-family,var(--fa-style-family,"Font Awesome 7 Free"));-webkit-font-smoothing:antialiased;-moz-osx-font-smoothing:grayscale;display:var(--fa-display,inline-block);font-family:var(--_fa-family);font-feature-settings:normal;font-style:normal;font-synthesis:none;font-variant:normal;font-weight:var(--fa-style,900);line-height:1;text-align:center;text-rendering:auto;width:var(--fa-width,1.25em)}:is(.fas,.far,.fab,.fa-solid,.fa-regular,.fa-brands,.fa-classic,.fa):before{content:var(--fa)/""}@supports not (content:""/""){:is(.fas,.far,.fab,.fa-solid,.fa-regular,.fa-brands,.fa-classic,.fa):before{content:var(--fa)}}.fa-1x{font-size:1em}.fa-2x{font-size:2em}.fa-3x{font-size:3em}.fa-4x{font-size:4em}.fa-5x{font-size:5em}.fa-6x{font-size:6em}.fa-7x{font-size:7em}.fa-8x{font-size:8em}.fa-9x{font-size:9em}.fa-10x{font-size:10em}.fa-2xs{font-size:.625em;line-height:.1em;vertical-align:.225em}.fa-xs{font-size:.75em;line-height:.08333em;vertical-align:.125em}.fa-sm{font-size:.875em;line-height:.07143em;vertical-align:.05357em}.fa-lg{font-size:1.25em;line-height:.05em;vertical-align:-.075em}.fa-xl{font-size:1.5em;line-height:.04167em;vertical-align:-.125em}.fa-2xl{font-size:2em;line-height:.03125em;vertical-align:-.1875em}.fa-width-auto{--fa-width:auto}.fa-fw,.fa-width-fixed{--fa-width:1.25em}.fa-ul{list-style-type:none;margin-inline-start:var(--fa-li-margin,2.5em);padding-inline-start:0}.fa-ul>li{position:relative}.fa-li{inset-inline-start:calc(var(--fa-li-width, 2em)*-1);position:absolute;text-align:center;width:var(--fa-li-width,2em);line-height:inherit}.fa-border{border-radius:var(--fa-border-radius,.1em);border:var(--fa-border-width,.0625em) var(--fa-border-style,solid) var(--fa-border-color,#eee);box-sizing:var(--fa-border-box-sizing,content-box);padding:var(--fa-border-padding,.1875em .25em)}.fa-pull-left,.fa-pull-start{float:inline-start;margin-inline-end:var(--fa-pull-margin,.3em)}.fa-pull-end,.fa-pull-right{float:inline-end;margin-inline-start:var(--fa-pull-margin,.3em)}.fa-beat{animation-name:fa-beat;animation-delay:var(--fa-animation-delay,0s);animation-direction:var(--fa-animation-direction,normal);animation-duration:var(--fa-animation-duration,1s);animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,ease-in-out)}.fa-bounce{animation-name:fa-bounce;animation-delay:var(--fa-animation-delay,0s);animation-direction:var(--fa-animation-direction,normal);animation-duration:var(--fa-animation-duration,1s);animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,cubic-bezier(.28,.84,.42,1))}.fa-fade{animation-name:fa-fade;animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,cubic-bezier(.4,0,.6,1))}.fa-beat-fade,.fa-fade{animation-delay:var(--fa-animation-delay,0s);animation-direction:var(--fa-animation-direction,normal);animation-duration:var(--fa-animation-duration,1s)}.fa-beat-fade{animation-name:fa-beat-fade;animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,cubic-bezier(.4,0,.6,1))}.fa-flip{animation-name:fa-flip;animation-delay:var(--fa-animation-delay,0s);animation-direction:var(--fa-animation-direction,normal);animation-duration:var(--fa-animation-duration,1s);animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,ease-in-out)}.fa-shake{animation-name:fa-shake;animation-duration:var(--fa-animation-duration,1s);animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,linear)}.fa-shake,.fa-spin{animation-delay:var(--fa-animation-delay,0s);animation-direction:var(--fa-animation-direction,normal)}.fa-spin{animation-name:fa-spin;animation-duration:var(--fa-animation-duration,2s);animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,linear)}.fa-spin-reverse{--fa-animation-direction:reverse}.fa-pulse,.fa-spin-pulse{animation-name:fa-spin;animation-direction:var(--fa-animation-direction,normal);animation-duration:var(--fa-animation-duration,1s);animation-iteration-count:var(--fa-animation-iteration-count,infinite);animation-timing-function:var(--fa-animation-timing,steps(8))}@media (prefers-reduced-motion:reduce){.fa-beat,.fa-beat-fade,.fa-bounce,.fa-fade,.fa-flip,.fa-pulse,.fa-shake,.fa-spin,.fa-spin-pulse{animation:none!important;transition:none!important}}@keyframes fa-beat{0%,90%{transform:scale(1)}45%{transform:scale(var(--fa-beat-scale,1.25))}}@keyframes fa-bounce{0%{transform:scale(1) translateY(0)}10%{transform:scale(var(--fa-bounce-start-scale-x,1.1),var(--fa-bounce-start-scale-y,.9)) translateY(0)}30%{transform:scale(var(--fa-bounce-jump-scale-x,.9),var(--fa-bounce-jump-scale-y,1.1)) translateY(var(--fa-bounce-height,-.5em))}50%{transform:scale(var(--fa-bounce-land-scale-x,1.05),var(--fa-bounce-land-scale-y,.95)) translateY(0)}57%{transform:scale(1) translateY(var(--fa-bounce-rebound,-.125em))}64%{transform:scale(1) translateY(0)}to{transform:scale(1) translateY(0)}}@keyframes fa-fade{50%{opacity:var(--fa-fade-opacity,.4)}}@keyframes fa-beat-fade{0%,to{opacity:var(--fa-beat-fade-opacity,.4);transform:scale(1)}50%{opacity:1;transform:scale(var(--fa-beat-fade-scale,1.125))}}@keyframes fa-flip{50%{transform:rotate3d(var(--fa-flip-x,0),var(--fa-flip-y,1),var(--fa-flip-z,0),var(--fa-flip-angle,-180deg))}}@keyframes fa-shake{0%{transform:rotate(-15deg)}4%{transform:rotate(15deg)}8%,24%{transform:rotate(-18deg)}12%,28%{transform:rotate(18deg)}16%{transform:rotate(-22deg)}20%{transform:rotate(22deg)}32%{transform:rotate(-12deg)}36%{transform:rotate(12deg)}40%,to{transform:rotate(0deg)}}@keyframes fa-spin{0%{transform:rotate(0deg)}to{transform:rotate(1turn)}}.fa-rotate-90{transform:rotate(90deg)}.fa-rotate-180{transform:rotate(180deg)}.fa-rotate-270{transform:rotate(270deg)}.fa-flip-horizontal{transform:scaleX(-1)}.fa-flip-vertical{transform:scaleY(-1)}.fa-flip-both,.fa-flip-horizontal.fa-flip-vertical{transform:scale(-1)}.fa-rotate-by{transform:rotate(var(--fa-rotate-angle,0))}.fa-stack{display:inline-block;height:2em;line-height:2em;position:relative;vertical-align:middle;width:2.5em}.fa-stack-1x,.fa-stack-2x{--fa-width:100%;inset:0;position:absolute;text-align:center;width:var(--fa-width);z-index:var(--fa-stack-z-index,auto)}.fa-stack-1x{line-height:inherit}.fa-stack-2x{font-size:2em}.fa-inverse{color:var(--fa-inverse,#fff)}[m
[32m+[m[32m.fa,[m
[32m+[m[32m.fa-brands,[m
[32m+[m[32m.fa-classic,[m
[32m+[m[32m.fa-regular,[m
[32m+[m[32m.fa-solid,[m
[32m+[m[32m.fab,[m
[32m+[m[32m.far,[m
[32m+[m[32m.fas {[m
[32m+[m[32m  --_fa-family: var(--fa-family, var(--fa-style-family, "Font Awesome 7 Free"));[m
[32m+[m[32m  -webkit-font-smoothing: antialiased;[m
[32m+[m[32m  -moz-osx-font-smoothing: grayscale;[m
[32m+[m[32m  display: var(--fa-display, inline-block);[m
[32m+[m[32m  font-family: var(--_fa-family);[m
[32m+[m[32m  font-feature-settings: normal;[m
[32m+[m[32m  font-style: normal;[m
[32m+[m[32m  font-synthesis: none;[m
[32m+[m[32m  font-variant: normal;[m
[32m+[m[32m  font-weight: var(--fa-style, 900);[m
[32m+[m[32m  line-height: 1;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  text-rendering: auto;[m
[32m+[m[32m  width: var(--fa-width, 1.25em);[m
[32m+[m[32m}[m
[32m+[m[32m:is([m
[32m+[m[32m  .fas,[m
[32m+[m[32m  .far,[m
[32m+[m[32m  .fab,[m
[32m+[m[32m  .fa-solid,[m
[32m+[m[32m  .fa-regular,[m
[32m+[m[32m  .fa-brands,[m
[32m+[m[32m  .fa-classic,[m
[32m+[m[32m  .fa[m
[32m+[m[32m):before {[m
[32m+[m[32m  content: var(--fa) / "";[m
[32m+[m[32m}[m
[32m+[m[32m@supports not (content: ""/"") {[m
[32m+[m[32m  :is([m
[32m+[m[32m    .fas,[m
[32m+[m[32m    .far,[m
[32m+[m[32m    .fab,[m
[32m+[m[32m    .fa-solid,[m
[32m+[m[32m    .fa-regular,[m
[32m+[m[32m    .fa-brands,[m
[32m+[m[32m    .fa-classic,[m
[32m+[m[32m    .fa[m
[32m+[m[32m  ):before {[m
[32m+[m[32m    content: var(--fa);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.fa-1x {[m
[32m+[m[32m  font-size: 1em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-2x {[m
[32m+[m[32m  font-size: 2em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-3x {[m
[32m+[m[32m  font-size: 3em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-4x {[m
[32m+[m[32m  font-size: 4em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-5x {[m
[32m+[m[32m  font-size: 5em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-6x {[m
[32m+[m[32m  font-size: 6em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-7x {[m
[32m+[m[32m  font-size: 7em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-8x {[m
[32m+[m[32m  font-size: 8em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-9x {[m
[32m+[m[32m  font-size: 9em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-10x {[m
[32m+[m[32m  font-size: 10em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-2xs {[m
[32m+[m[32m  font-size: 0.625em;[m
[32m+[m[32m  line-height: 0.1em;[m
[32m+[m[32m  vertical-align: 0.225em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-xs {[m
[32m+[m[32m  font-size: 0.75em;[m
[32m+[m[32m  line-height: 0.08333em;[m
[32m+[m[32m  vertical-align: 0.125em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sm {[m
[32m+[m[32m  font-size: 0.875em;[m
[32m+[m[32m  line-height: 0.07143em;[m
[32m+[m[32m  vertical-align: 0.05357em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lg {[m
[32m+[m[32m  font-size: 1.25em;[m
[32m+[m[32m  line-height: 0.05em;[m
[32m+[m[32m  vertical-align: -0.075em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-xl {[m
[32m+[m[32m  font-size: 1.5em;[m
[32m+[m[32m  line-height: 0.04167em;[m
[32m+[m[32m  vertical-align: -0.125em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-2xl {[m
[32m+[m[32m  font-size: 2em;[m
[32m+[m[32m  line-height: 0.03125em;[m
[32m+[m[32m  vertical-align: -0.1875em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-width-auto {[m
[32m+[m[32m  --fa-width: auto;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fw,[m
[32m+[m[32m.fa-width-fixed {[m
[32m+[m[32m  --fa-width: 1.25em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ul {[m
[32m+[m[32m  list-style-type: none;[m
[32m+[m[32m  margin-inline-start: var(--fa-li-margin, 2.5em);[m
[32m+[m[32m  padding-inline-start: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ul > li {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-li {[m
[32m+[m[32m  inset-inline-start: calc(var(--fa-li-width, 2em) * -1);[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  width: var(--fa-li-width, 2em);[m
[32m+[m[32m  line-height: inherit;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-border {[m
[32m+[m[32m  border-radius: var(--fa-border-radius, 0.1em);[m
[32m+[m[32m  border: var(--fa-border-width, 0.0625em) var(--fa-border-style, solid)[m
[32m+[m[32m    var(--fa-border-color, #eee);[m
[32m+[m[32m  box-sizing: var(--fa-border-box-sizing, content-box);[m
[32m+[m[32m  padding: var(--fa-border-padding, 0.1875em 0.25em);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pull-left,[m
[32m+[m[32m.fa-pull-start {[m
[32m+[m[32m  float: inline-start;[m
[32m+[m[32m  margin-inline-end: var(--fa-pull-margin, 0.3em);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pull-end,[m
[32m+[m[32m.fa-pull-right {[m
[32m+[m[32m  float: inline-end;[m
[32m+[m[32m  margin-inline-start: var(--fa-pull-margin, 0.3em);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-beat {[m
[32m+[m[32m  animation-name: fa-beat;[m
[32m+[m[32m  animation-delay: var(--fa-animation-delay, 0s);[m
[32m+[m[32m  animation-direction: var(--fa-animation-direction, normal);[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 1s);[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var(--fa-animation-timing, ease-in-out);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bounce {[m
[32m+[m[32m  animation-name: fa-bounce;[m
[32m+[m[32m  animation-delay: var(--fa-animation-delay, 0s);[m
[32m+[m[32m  animation-direction: var(--fa-animation-direction, normal);[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 1s);[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var([m
[32m+[m[32m    --fa-animation-timing,[m
[32m+[m[32m    cubic-bezier(0.28, 0.84, 0.42, 1)[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fade {[m
[32m+[m[32m  animation-name: fa-fade;[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var([m
[32m+[m[32m    --fa-animation-timing,[m
[32m+[m[32m    cubic-bezier(0.4, 0, 0.6, 1)[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
[32m+[m[32m.fa-beat-fade,[m
[32m+[m[32m.fa-fade {[m
[32m+[m[32m  animation-delay: var(--fa-animation-delay, 0s);[m
[32m+[m[32m  animation-direction: var(--fa-animation-direction, normal);[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 1s);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-beat-fade {[m
[32m+[m[32m  animation-name: fa-beat-fade;[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var([m
[32m+[m[32m    --fa-animation-timing,[m
[32m+[m[32m    cubic-bezier(0.4, 0, 0.6, 1)[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flip {[m
[32m+[m[32m  animation-name: fa-flip;[m
[32m+[m[32m  animation-delay: var(--fa-animation-delay, 0s);[m
[32m+[m[32m  animation-direction: var(--fa-animation-direction, normal);[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 1s);[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var(--fa-animation-timing, ease-in-out);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shake {[m
[32m+[m[32m  animation-name: fa-shake;[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 1s);[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var(--fa-animation-timing, linear);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shake,[m
[32m+[m[32m.fa-spin {[m
[32m+[m[32m  animation-delay: var(--fa-animation-delay, 0s);[m
[32m+[m[32m  animation-direction: var(--fa-animation-direction, normal);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spin {[m
[32m+[m[32m  animation-name: fa-spin;[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 2s);[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var(--fa-animation-timing, linear);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spin-reverse {[m
[32m+[m[32m  --fa-animation-direction: reverse;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pulse,[m
[32m+[m[32m.fa-spin-pulse {[m
[32m+[m[32m  animation-name: fa-spin;[m
[32m+[m[32m  animation-direction: var(--fa-animation-direction, normal);[m
[32m+[m[32m  animation-duration: var(--fa-animation-duration, 1s);[m
[32m+[m[32m  animation-iteration-count: var(--fa-animation-iteration-count, infinite);[m
[32m+[m[32m  animation-timing-function: var(--fa-animation-timing, steps(8));[m
[32m+[m[32m}[m
[32m+[m[32m@media (prefers-reduced-motion: reduce) {[m
[32m+[m[32m  .fa-beat,[m
[32m+[m[32m  .fa-beat-fade,[m
[32m+[m[32m  .fa-bounce,[m
[32m+[m[32m  .fa-fade,[m
[32m+[m[32m  .fa-flip,[m
[32m+[m[32m  .fa-pulse,[m
[32m+[m[32m  .fa-shake,[m
[32m+[m[32m  .fa-spin,[m
[32m+[m[32m  .fa-spin-pulse {[m
[32m+[m[32m    animation: none !important;[m
[32m+[m[32m    transition: none !important;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-beat {[m
[32m+[m[32m  0%,[m
[32m+[m[32m  90% {[m
[32m+[m[32m    transform: scale(1);[m
[32m+[m[32m  }[m
[32m+[m[32m  45% {[m
[32m+[m[32m    transform: scale(var(--fa-beat-scale, 1.25));[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-bounce {[m
[32m+[m[32m  0% {[m
[32m+[m[32m    transform: scale(1) translateY(0);[m
[32m+[m[32m  }[m
[32m+[m[32m  10% {[m
[32m+[m[32m    transform: scale([m
[32m+[m[32m        var(--fa-bounce-start-scale-x, 1.1),[m
[32m+[m[32m        var(--fa-bounce-start-scale-y, 0.9)[m
[32m+[m[32m      )[m
[32m+[m[32m      translateY(0);[m
[32m+[m[32m  }[m
[32m+[m[32m  30% {[m
[32m+[m[32m    transform: scale([m
[32m+[m[32m        var(--fa-bounce-jump-scale-x, 0.9),[m
[32m+[m[32m        var(--fa-bounce-jump-scale-y, 1.1)[m
[32m+[m[32m      )[m
[32m+[m[32m      translateY(var(--fa-bounce-height, -0.5em));[m
[32m+[m[32m  }[m
[32m+[m[32m  50% {[m
[32m+[m[32m    transform: scale([m
[32m+[m[32m        var(--fa-bounce-land-scale-x, 1.05),[m
[32m+[m[32m        var(--fa-bounce-land-scale-y, 0.95)[m
[32m+[m[32m      )[m
[32m+[m[32m      translateY(0);[m
[32m+[m[32m  }[m
[32m+[m[32m  57% {[m
[32m+[m[32m    transform: scale(1) translateY(var(--fa-bounce-rebound, -0.125em));[m
[32m+[m[32m  }[m
[32m+[m[32m  64% {[m
[32m+[m[32m    transform: scale(1) translateY(0);[m
[32m+[m[32m  }[m
[32m+[m[32m  to {[m
[32m+[m[32m    transform: scale(1) translateY(0);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-fade {[m
[32m+[m[32m  50% {[m
[32m+[m[32m    opacity: var(--fa-fade-opacity, 0.4);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-beat-fade {[m
[32m+[m[32m  0%,[m
[32m+[m[32m  to {[m
[32m+[m[32m    opacity: var(--fa-beat-fade-opacity, 0.4);[m
[32m+[m[32m    transform: scale(1);[m
[32m+[m[32m  }[m
[32m+[m[32m  50% {[m
[32m+[m[32m    opacity: 1;[m
[32m+[m[32m    transform: scale(var(--fa-beat-fade-scale, 1.125));[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-flip {[m
[32m+[m[32m  50% {[m
[32m+[m[32m    transform: rotate3d([m
[32m+[m[32m      var(--fa-flip-x, 0),[m
[32m+[m[32m      var(--fa-flip-y, 1),[m
[32m+[m[32m      var(--fa-flip-z, 0),[m
[32m+[m[32m      var(--fa-flip-angle, -180deg)[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-shake {[m
[32m+[m[32m  0% {[m
[32m+[m[32m    transform: rotate(-15deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  4% {[m
[32m+[m[32m    transform: rotate(15deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  8%,[m
[32m+[m[32m  24% {[m
[32m+[m[32m    transform: rotate(-18deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  12%,[m
[32m+[m[32m  28% {[m
[32m+[m[32m    transform: rotate(18deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  16% {[m
[32m+[m[32m    transform: rotate(-22deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  20% {[m
[32m+[m[32m    transform: rotate(22deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  32% {[m
[32m+[m[32m    transform: rotate(-12deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  36% {[m
[32m+[m[32m    transform: rotate(12deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  40%,[m
[32m+[m[32m  to {[m
[32m+[m[32m    transform: rotate(0deg);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fa-spin {[m
[32m+[m[32m  0% {[m
[32m+[m[32m    transform: rotate(0deg);[m
[32m+[m[32m  }[m
[32m+[m[32m  to {[m
[32m+[m[32m    transform: rotate(1turn);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rotate-90 {[m
[32m+[m[32m  transform: rotate(90deg);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rotate-180 {[m
[32m+[m[32m  transform: rotate(180deg);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rotate-270 {[m
[32m+[m[32m  transform: rotate(270deg);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flip-horizontal {[m
[32m+[m[32m  transform: scaleX(-1);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flip-vertical {[m
[32m+[m[32m  transform: scaleY(-1);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flip-both,[m
[32m+[m[32m.fa-flip-horizontal.fa-flip-vertical {[m
[32m+[m[32m  transform: scale(-1);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rotate-by {[m
[32m+[m[32m  transform: rotate(var(--fa-rotate-angle, 0));[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stack {[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  height: 2em;[m
[32m+[m[32m  line-height: 2em;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  vertical-align: middle;[m
[32m+[m[32m  width: 2.5em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stack-1x,[m
[32m+[m[32m.fa-stack-2x {[m
[32m+[m[32m  --fa-width: 100%;[m
[32m+[m[32m  inset: 0;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  width: var(--fa-width);[m
[32m+[m[32m  z-index: var(--fa-stack-z-index, auto);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stack-1x {[m
[32m+[m[32m  line-height: inherit;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stack-2x {[m
[32m+[m[32m  font-size: 2em;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-inverse {[m
[32m+[m[32m  color: var(--fa-inverse, #fff);[m
[32m+[m[32m}[m
 [m
[31m-.fa-0{--fa:"\30 "}.fa-1{--fa:"\31 "}.fa-2{--fa:"\32 "}.fa-3{--fa:"\33 "}.fa-4{--fa:"\34 "}.fa-5{--fa:"\35 "}.fa-6{--fa:"\36 "}.fa-7{--fa:"\37 "}.fa-8{--fa:"\38 "}.fa-9{--fa:"\39 "}.fa-exclamation{--fa:"\!"}.fa-hashtag{--fa:"\#"}.fa-dollar,.fa-dollar-sign,.fa-usd{--fa:"\$"}.fa-percent,.fa-percentage{--fa:"\%"}.fa-asterisk{--fa:"\*"}.fa-add,.fa-plus{--fa:"\+"}.fa-less-than{--fa:"\<"}.fa-equals{--fa:"\="}.fa-greater-than{--fa:"\>"}.fa-question{--fa:"\?"}.fa-at{--fa:"\@"}.fa-a{--fa:"A"}.fa-b{--fa:"B"}.fa-c{--fa:"C"}.fa-d{--fa:"D"}.fa-e{--fa:"E"}.fa-f{--fa:"F"}.fa-g{--fa:"G"}.fa-h{--fa:"H"}.fa-i{--fa:"I"}.fa-j{--fa:"J"}.fa-k{--fa:"K"}.fa-l{--fa:"L"}.fa-m{--fa:"M"}.fa-n{--fa:"N"}.fa-o{--fa:"O"}.fa-p{--fa:"P"}.fa-q{--fa:"Q"}.fa-r{--fa:"R"}.fa-s{--fa:"S"}.fa-t{--fa:"T"}.fa-u{--fa:"U"}.fa-v{--fa:"V"}.fa-w{--fa:"W"}.fa-x{--fa:"X"}.fa-y{--fa:"Y"}.fa-z{--fa:"Z"}.fa-faucet{--fa:"\e005"}.fa-faucet-drip{--fa:"\e006"}.fa-house-chimney-window{--fa:"\e00d"}.fa-house-signal{--fa:"\e012"}.fa-temperature-arrow-down,.fa-temperature-down{--fa:"\e03f"}.fa-temperature-arrow-up,.fa-temperature-up{--fa:"\e040"}.fa-trailer{--fa:"\e041"}.fa-bacteria{--fa:"\e059"}.fa-bacterium{--fa:"\e05a"}.fa-box-tissue{--fa:"\e05b"}.fa-hand-holding-medical{--fa:"\e05c"}.fa-hand-sparkles{--fa:"\e05d"}.fa-hands-bubbles,.fa-hands-wash{--fa:"\e05e"}.fa-handshake-alt-slash,.fa-handshake-simple-slash,.fa-handshake-slash{--fa:"\e060"}.fa-head-side-cough{--fa:"\e061"}.fa-head-side-cough-slash{--fa:"\e062"}.fa-head-side-mask{--fa:"\e063"}.fa-head-side-virus{--fa:"\e064"}.fa-house-chimney-user{--fa:"\e065"}.fa-house-laptop,.fa-laptop-house{--fa:"\e066"}.fa-lungs-virus{--fa:"\e067"}.fa-people-arrows,.fa-people-arrows-left-right{--fa:"\e068"}.fa-plane-slash{--fa:"\e069"}.fa-pump-medical{--fa:"\e06a"}.fa-pump-soap{--fa:"\e06b"}.fa-shield-virus{--fa:"\e06c"}.fa-sink{--fa:"\e06d"}.fa-soap{--fa:"\e06e"}.fa-stopwatch-20{--fa:"\e06f"}.fa-shop-slash,.fa-store-alt-slash{--fa:"\e070"}.fa-store-slash{--fa:"\e071"}.fa-toilet-paper-slash{--fa:"\e072"}.fa-users-slash{--fa:"\e073"}.fa-virus{--fa:"\e074"}.fa-virus-slash{--fa:"\e075"}.fa-viruses{--fa:"\e076"}.fa-vest{--fa:"\e085"}.fa-vest-patches{--fa:"\e086"}.fa-arrow-trend-down{--fa:"\e097"}.fa-arrow-trend-up{--fa:"\e098"}.fa-arrow-up-from-bracket{--fa:"\e09a"}.fa-austral-sign{--fa:"\e0a9"}.fa-baht-sign{--fa:"\e0ac"}.fa-bitcoin-sign{--fa:"\e0b4"}.fa-bolt-lightning{--fa:"\e0b7"}.fa-book-bookmark{--fa:"\e0bb"}.fa-camera-rotate{--fa:"\e0d8"}.fa-cedi-sign{--fa:"\e0df"}.fa-chart-column{--fa:"\e0e3"}.fa-chart-gantt{--fa:"\e0e4"}.fa-clapperboard{--fa:"\e131"}.fa-closed-captioning-slash{--fa:"\e135"}.fa-clover{--fa:"\e139"}.fa-code-compare{--fa:"\e13a"}.fa-code-fork{--fa:"\e13b"}.fa-code-pull-request{--fa:"\e13c"}.fa-colon-sign{--fa:"\e140"}.fa-cruzeiro-sign{--fa:"\e152"}.fa-display{--fa:"\e163"}.fa-dong-sign{--fa:"\e169"}.fa-elevator{--fa:"\e16d"}.fa-filter-circle-xmark{--fa:"\e17b"}.fa-florin-sign{--fa:"\e184"}.fa-folder-closed{--fa:"\e185"}.fa-franc-sign{--fa:"\e18f"}.fa-guarani-sign{--fa:"\e19a"}.fa-gun{--fa:"\e19b"}.fa-hands-clapping{--fa:"\e1a8"}.fa-home-user,.fa-house-user{--fa:"\e1b0"}.fa-indian-rupee,.fa-indian-rupee-sign,.fa-inr{--fa:"\e1bc"}.fa-kip-sign{--fa:"\e1c4"}.fa-lari-sign{--fa:"\e1c8"}.fa-litecoin-sign{--fa:"\e1d3"}.fa-manat-sign{--fa:"\e1d5"}.fa-mask-face{--fa:"\e1d7"}.fa-mill-sign{--fa:"\e1ed"}.fa-money-bills{--fa:"\e1f3"}.fa-naira-sign{--fa:"\e1f6"}.fa-notdef{--fa:"\e1fe"}.fa-panorama{--fa:"\e209"}.fa-peseta-sign{--fa:"\e221"}.fa-peso-sign{--fa:"\e222"}.fa-plane-up{--fa:"\e22d"}.fa-rupiah-sign{--fa:"\e23d"}.fa-stairs{--fa:"\e289"}.fa-timeline{--fa:"\e29c"}.fa-truck-front{--fa:"\e2b7"}.fa-try,.fa-turkish-lira,.fa-turkish-lira-sign{--fa:"\e2bb"}.fa-vault{--fa:"\e2c5"}.fa-magic-wand-sparkles,.fa-wand-magic-sparkles{--fa:"\e2ca"}.fa-wheat-alt,.fa-wheat-awn{--fa:"\e2cd"}.fa-wheelchair-alt,.fa-wheelchair-move{--fa:"\e2ce"}.fa-bangladeshi-taka-sign{--fa:"\e2e6"}.fa-bowl-rice{--fa:"\e2eb"}.fa-person-pregnant{--fa:"\e31e"}.fa-home-lg,.fa-house-chimney{--fa:"\e3af"}.fa-house-crack{--fa:"\e3b1"}.fa-house-medical{--fa:"\e3b2"}.fa-cent-sign{--fa:"\e3f5"}.fa-plus-minus{--fa:"\e43c"}.fa-sailboat{--fa:"\e445"}.fa-section{--fa:"\e447"}.fa-shrimp{--fa:"\e448"}.fa-brazilian-real-sign{--fa:"\e46c"}.fa-chart-simple{--fa:"\e473"}.fa-diagram-next{--fa:"\e476"}.fa-diagram-predecessor{--fa:"\e477"}.fa-diagram-successor{--fa:"\e47a"}.fa-earth-oceania,.fa-globe-oceania{--fa:"\e47b"}.fa-bug-slash{--fa:"\e490"}.fa-file-circle-plus{--fa:"\e494"}.fa-shop-lock{--fa:"\e4a5"}.fa-virus-covid{--fa:"\e4a8"}.fa-virus-covid-slash{--fa:"\e4a9"}.fa-anchor-circle-check{--fa:"\e4aa"}.fa-anchor-circle-exclamation{--fa:"\e4ab"}.fa-anchor-circle-xmark{--fa:"\e4ac"}.fa-anchor-lock{--fa:"\e4ad"}.fa-arrow-down-up-across-line{--fa:"\e4af"}.fa-arrow-down-up-lock{--fa:"\e4b0"}.fa-arrow-right-to-city{--fa:"\e4b3"}.fa-arrow-up-from-ground-water{--fa:"\e4b5"}.fa-arrow-up-from-water-pump{--fa:"\e4b6"}.fa-arrow-up-right-dots{--fa:"\e4b7"}.fa-arrows-down-to-line{--fa:"\e4b8"}.fa-arrows-down-to-people{--fa:"\e4b9"}.fa-arrows-left-right-to-line{--fa:"\e4ba"}.fa-arrows-spin{--fa:"\e4bb"}.fa-arrows-split-up-and-left{--fa:"\e4bc"}.fa-arrows-to-circle{--fa:"\e4bd"}.fa-arrows-to-dot{--fa:"\e4be"}.fa-arrows-to-eye{--fa:"\e4bf"}.fa-arrows-turn-right{--fa:"\e4c0"}.fa-arrows-turn-to-dots{--fa:"\e4c1"}.fa-arrows-up-to-line{--fa:"\e4c2"}.fa-bore-hole{--fa:"\e4c3"}.fa-bottle-droplet{--fa:"\e4c4"}.fa-bottle-water{--fa:"\e4c5"}.fa-bowl-food{--fa:"\e4c6"}.fa-boxes-packing{--fa:"\e4c7"}.fa-bridge{--fa:"\e4c8"}.fa-bridge-circle-check{--fa:"\e4c9"}.fa-bridge-circle-exclamation{--fa:"\e4ca"}.fa-bridge-circle-xmark{--fa:"\e4cb"}.fa-bridge-lock{--fa:"\e4cc"}.fa-bridge-water{--fa:"\e4ce"}.fa-bucket{--fa:"\e4cf"}.fa-bugs{--fa:"\e4d0"}.fa-building-circle-arrow-right{--fa:"\e4d1"}.fa-building-circle-check{--fa:"\e4d2"}.fa-building-circle-exclamation{--fa:"\e4d3"}.fa-building-circle-xmark{--fa:"\e4d4"}.fa-building-flag{--fa:"\e4d5"}.fa-building-lock{--fa:"\e4d6"}.fa-building-ngo{--fa:"\e4d7"}.fa-building-shield{--fa:"\e4d8"}.fa-building-un{--fa:"\e4d9"}.fa-building-user{--fa:"\e4da"}.fa-building-wheat{--fa:"\e4db"}.fa-burst{--fa:"\e4dc"}.fa-car-on{--fa:"\e4dd"}.fa-car-tunnel{--fa:"\e4de"}.fa-child-combatant,.fa-child-rifle{--fa:"\e4e0"}.fa-children{--fa:"\e4e1"}.fa-circle-nodes{--fa:"\e4e2"}.fa-clipboard-question{--fa:"\e4e3"}.fa-cloud-showers-water{--fa:"\e4e4"}.fa-computer{--fa:"\e4e5"}.fa-cubes-stacked{--fa:"\e4e6"}.fa-envelope-circle-check{--fa:"\e4e8"}.fa-explosion{--fa:"\e4e9"}.fa-ferry{--fa:"\e4ea"}.fa-file-circle-exclamation{--fa:"\e4eb"}.fa-file-circle-minus{--fa:"\e4ed"}.fa-file-circle-question{--fa:"\e4ef"}.fa-file-shield{--fa:"\e4f0"}.fa-fire-burner{--fa:"\e4f1"}.fa-fish-fins{--fa:"\e4f2"}.fa-flask-vial{--fa:"\e4f3"}.fa-glass-water{--fa:"\e4f4"}.fa-glass-water-droplet{--fa:"\e4f5"}.fa-group-arrows-rotate{--fa:"\e4f6"}.fa-hand-holding-hand{--fa:"\e4f7"}.fa-handcuffs{--fa:"\e4f8"}.fa-hands-bound{--fa:"\e4f9"}.fa-hands-holding-child{--fa:"\e4fa"}.fa-hands-holding-circle{--fa:"\e4fb"}.fa-heart-circle-bolt{--fa:"\e4fc"}.fa-heart-circle-check{--fa:"\e4fd"}.fa-heart-circle-exclamation{--fa:"\e4fe"}.fa-heart-circle-minus{--fa:"\e4ff"}.fa-heart-circle-plus{--fa:"\e500"}.fa-heart-circle-xmark{--fa:"\e501"}.fa-helicopter-symbol{--fa:"\e502"}.fa-helmet-un{--fa:"\e503"}.fa-hill-avalanche{--fa:"\e507"}.fa-hill-rockslide{--fa:"\e508"}.fa-house-circle-check{--fa:"\e509"}.fa-house-circle-exclamation{--fa:"\e50a"}.fa-house-circle-xmark{--fa:"\e50b"}.fa-house-fire{--fa:"\e50c"}.fa-house-flag{--fa:"\e50d"}.fa-house-flood-water{--fa:"\e50e"}.fa-house-flood-water-circle-arrow-right{--fa:"\e50f"}.fa-house-lock{--fa:"\e510"}.fa-house-medical-circle-check{--fa:"\e511"}.fa-house-medical-circle-exclamation{--fa:"\e512"}.fa-house-medical-circle-xmark{--fa:"\e513"}.fa-house-medical-flag{--fa:"\e514"}.fa-house-tsunami{--fa:"\e515"}.fa-jar{--fa:"\e516"}.fa-jar-wheat{--fa:"\e517"}.fa-jet-fighter-up{--fa:"\e518"}.fa-jug-detergent{--fa:"\e519"}.fa-kitchen-set{--fa:"\e51a"}.fa-land-mine-on{--fa:"\e51b"}.fa-landmark-flag{--fa:"\e51c"}.fa-laptop-file{--fa:"\e51d"}.fa-lines-leaning{--fa:"\e51e"}.fa-location-pin-lock{--fa:"\e51f"}.fa-locust{--fa:"\e520"}.fa-magnifying-glass-arrow-right{--fa:"\e521"}.fa-magnifying-glass-chart{--fa:"\e522"}.fa-mars-and-venus-burst{--fa:"\e523"}.fa-mask-ventilator{--fa:"\e524"}.fa-mattress-pillow{--fa:"\e525"}.fa-mobile-retro{--fa:"\e527"}.fa-money-bill-transfer{--fa:"\e528"}.fa-money-bill-trend-up{--fa:"\e529"}.fa-money-bill-wheat{--fa:"\e52a"}.fa-mosquito{--fa:"\e52b"}.fa-mosquito-net{--fa:"\e52c"}.fa-mound{--fa:"\e52d"}.fa-mountain-city{--fa:"\e52e"}.fa-mountain-sun{--fa:"\e52f"}.fa-oil-well{--fa:"\e532"}.fa-people-group{--fa:"\e533"}.fa-people-line{--fa:"\e534"}.fa-people-pulling{--fa:"\e535"}.fa-people-robbery{--fa:"\e536"}.fa-people-roof{--fa:"\e537"}.fa-person-arrow-down-to-line{--fa:"\e538"}.fa-person-arrow-up-from-line{--fa:"\e539"}.fa-person-breastfeeding{--fa:"\e53a"}.fa-person-burst{--fa:"\e53b"}.fa-person-cane{--fa:"\e53c"}.fa-person-chalkboard{--fa:"\e53d"}.fa-person-circle-check{--fa:"\e53e"}.fa-person-circle-exclamation{--fa:"\e53f"}.fa-person-circle-minus{--fa:"\e540"}.fa-person-circle-plus{--fa:"\e541"}.fa-person-circle-question{--fa:"\e542"}.fa-person-circle-xmark{--fa:"\e543"}.fa-person-dress-burst{--fa:"\e544"}.fa-person-drowning{--fa:"\e545"}.fa-person-falling{--fa:"\e546"}.fa-person-falling-burst{--fa:"\e547"}.fa-person-half-dress{--fa:"\e548"}.fa-person-harassing{--fa:"\e549"}.fa-person-military-pointing{--fa:"\e54a"}.fa-person-military-rifle{--fa:"\e54b"}.fa-person-military-to-person{--fa:"\e54c"}.fa-person-rays{--fa:"\e54d"}.fa-person-rifle{--fa:"\e54e"}.fa-person-shelter{--fa:"\e54f"}.fa-person-walking-arrow-loop-left{--fa:"\e551"}.fa-person-walking-arrow-right{--fa:"\e552"}.fa-person-walking-dashed-line-arrow-right{--fa:"\e553"}.fa-person-walking-luggage{--fa:"\e554"}.fa-plane-circle-check{--fa:"\e555"}.fa-plane-circle-exclamation{--fa:"\e556"}.fa-plane-circle-xmark{--fa:"\e557"}.fa-plane-lock{--fa:"\e558"}.fa-plate-wheat{--fa:"\e55a"}.fa-plug-circle-bolt{--fa:"\e55b"}.fa-plug-circle-check{--fa:"\e55c"}.fa-plug-circle-exclamation{--fa:"\e55d"}.fa-plug-circle-minus{--fa:"\e55e"}.fa-plug-circle-plus{--fa:"\e55f"}.fa-plug-circle-xmark{--fa:"\e560"}.fa-ranking-star{--fa:"\e561"}.fa-road-barrier{--fa:"\e562"}.fa-road-bridge{--fa:"\e563"}.fa-road-circle-check{--fa:"\e564"}.fa-road-circle-exclamation{--fa:"\e565"}.fa-road-circle-xmark{--fa:"\e566"}.fa-road-lock{--fa:"\e567"}.fa-road-spikes{--fa:"\e568"}.fa-rug{--fa:"\e569"}.fa-sack-xmark{--fa:"\e56a"}.fa-school-circle-check{--fa:"\e56b"}.fa-school-circle-exclamation{--fa:"\e56c"}.fa-school-circle-xmark{--fa:"\e56d"}.fa-school-flag{--fa:"\e56e"}.fa-school-lock{--fa:"\e56f"}.fa-sheet-plastic{--fa:"\e571"}.fa-shield-cat{--fa:"\e572"}.fa-shield-dog{--fa:"\e573"}.fa-shield-heart{--fa:"\e574"}.fa-square-nfi{--fa:"\e576"}.fa-square-person-confined{--fa:"\e577"}.fa-square-virus{--fa:"\e578"}.fa-rod-asclepius,.fa-rod-snake,.fa-staff-aesculapius,.fa-staff-snake{--fa:"\e579"}.fa-sun-plant-wilt{--fa:"\e57a"}.fa-tarp{--fa:"\e57b"}.fa-tarp-droplet{--fa:"\e57c"}.fa-tent{--fa:"\e57d"}.fa-tent-arrow-down-to-line{--fa:"\e57e"}.fa-tent-arrow-left-right{--fa:"\e57f"}.fa-tent-arrow-turn-left{--fa:"\e580"}.fa-tent-arrows-down{--fa:"\e581"}.fa-tents{--fa:"\e582"}.fa-toilet-portable{--fa:"\e583"}.fa-toilets-portable{--fa:"\e584"}.fa-tower-cell{--fa:"\e585"}.fa-tower-observation{--fa:"\e586"}.fa-tree-city{--fa:"\e587"}.fa-trowel{--fa:"\e589"}.fa-trowel-bricks{--fa:"\e58a"}.fa-truck-arrow-right{--fa:"\e58b"}.fa-truck-droplet{--fa:"\e58c"}.fa-truck-field{--fa:"\e58d"}.fa-truck-field-un{--fa:"\e58e"}.fa-truck-plane{--fa:"\e58f"}.fa-users-between-lines{--fa:"\e591"}.fa-users-line{--fa:"\e592"}.fa-users-rays{--fa:"\e593"}.fa-users-rectangle{--fa:"\e594"}.fa-users-viewfinder{--fa:"\e595"}.fa-vial-circle-check{--fa:"\e596"}.fa-vial-virus{--fa:"\e597"}.fa-wheat-awn-circle-exclamation{--fa:"\e598"}.fa-worm{--fa:"\e599"}.fa-xmarks-lines{--fa:"\e59a"}.fa-child-dress{--fa:"\e59c"}.fa-child-reaching{--fa:"\e59d"}.fa-file-circle-check{--fa:"\e5a0"}.fa-file-circle-xmark{--fa:"\e5a1"}.fa-person-through-window{--fa:"\e5a9"}.fa-plant-wilt{--fa:"\e5aa"}.fa-stapler{--fa:"\e5af"}.fa-train-tram{--fa:"\e5b4"}.fa-table-cells-column-lock{--fa:"\e678"}.fa-table-cells-row-lock{--fa:"\e67a"}.fa-thumb-tack-slash,.fa-thumbtack-slash{--fa:"\e68f"}.fa-table-cells-row-unlock{--fa:"\e691"}.fa-chart-diagram{--fa:"\e695"}.fa-comment-nodes{--fa:"\e696"}.fa-file-fragment{--fa:"\e697"}.fa-file-half-dashed{--fa:"\e698"}.fa-hexagon-nodes{--fa:"\e699"}.fa-hexagon-nodes-bolt{--fa:"\e69a"}.fa-square-binary{--fa:"\e69b"}.fa-pentagon{--fa:"\e790"}.fa-non-binary{--fa:"\e807"}.fa-spiral{--fa:"\e80a"}.fa-picture-in-picture{--fa:"\e80b"}.fa-mobile-vibrate{--fa:"\e816"}.fa-single-quote-left{--fa:"\e81b"}.fa-single-quote-right{--fa:"\e81c"}.fa-bus-side{--fa:"\e81d"}.fa-heptagon,.fa-septagon{--fa:"\e820"}.fa-aquarius{--fa:"\e845"}.fa-aries{--fa:"\e846"}.fa-cancer{--fa:"\e847"}.fa-capricorn{--fa:"\e848"}.fa-gemini{--fa:"\e849"}.fa-leo{--fa:"\e84a"}.fa-libra{--fa:"\e84b"}.fa-pisces{--fa:"\e84c"}.fa-sagittarius{--fa:"\e84d"}.fa-scorpio{--fa:"\e84e"}.fa-taurus{--fa:"\e84f"}.fa-virgo{--fa:"\e850"}.fa-glass-martini,.fa-martini-glass-empty{--fa:"\f000"}.fa-music{--fa:"\f001"}.fa-magnifying-glass,.fa-search{--fa:"\f002"}.fa-heart{--fa:"\f004"}.fa-star{--fa:"\f005"}.fa-user,.fa-user-alt,.fa-user-large{--fa:"\f007"}.fa-film,.fa-film-alt,.fa-film-simple{--fa:"\f008"}.fa-table-cells-large,.fa-th-large{--fa:"\f009"}.fa-table-cells,.fa-th{--fa:"\f00a"}.fa-table-list,.fa-th-list{--fa:"\f00b"}.fa-check{--fa:"\f00c"}.fa-close,.fa-multiply,.fa-remove,.fa-times,.fa-xmark{--fa:"\f00d"}.fa-magnifying-glass-plus,.fa-search-plus{--fa:"\f00e"}.fa-magnifying-glass-minus,.fa-search-minus{--fa:"\f010"}.fa-power-off{--fa:"\f011"}.fa-signal,.fa-signal-5,.fa-signal-perfect{--fa:"\f012"}.fa-cog,.fa-gear{--fa:"\f013"}.fa-home,.fa-home-alt,.fa-home-lg-alt,.fa-house{--fa:"\f015"}.fa-clock,.fa-clock-four{--fa:"\f017"}.fa-road{--fa:"\f018"}.fa-download{--fa:"\f019"}.fa-inbox{--fa:"\f01c"}.fa-arrow-right-rotate,.fa-arrow-rotate-forward,.fa-arrow-rotate-right,.fa-redo{--fa:"\f01e"}.fa-arrows-rotate,.fa-refresh,.fa-sync{--fa:"\f021"}.fa-list-alt,.fa-rectangle-list{--fa:"\f022"}.fa-lock{--fa:"\f023"}.fa-flag{--fa:"\f024"}.fa-headphones,.fa-headphones-alt,.fa-headphones-simple{--fa:"\f025"}.fa-volume-off{--fa:"\f026"}.fa-volume-down,.fa-volume-low{--fa:"\f027"}.fa-volume-high,.fa-volume-up{--fa:"\f028"}.fa-qrcode{--fa:"\f029"}.fa-barcode{--fa:"\f02a"}.fa-tag{--fa:"\f02b"}.fa-tags{--fa:"\f02c"}.fa-book{--fa:"\f02d"}.fa-bookmark{--fa:"\f02e"}.fa-print{--fa:"\f02f"}.fa-camera,.fa-camera-alt{--fa:"\f030"}.fa-font{--fa:"\f031"}.fa-bold{--fa:"\f032"}.fa-italic{--fa:"\f033"}.fa-text-height{--fa:"\f034"}.fa-text-width{--fa:"\f035"}.fa-align-left{--fa:"\f036"}.fa-align-center{--fa:"\f037"}.fa-align-right{--fa:"\f038"}.fa-align-justify{--fa:"\f039"}.fa-list,.fa-list-squares{--fa:"\f03a"}.fa-dedent,.fa-outdent{--fa:"\f03b"}.fa-indent{--fa:"\f03c"}.fa-video,.fa-video-camera{--fa:"\f03d"}.fa-image{--fa:"\f03e"}.fa-location-pin,.fa-map-marker{--fa:"\f041"}.fa-adjust,.fa-circle-half-stroke{--fa:"\f042"}.fa-droplet,.fa-tint{--fa:"\f043"}.fa-edit,.fa-pen-to-square{--fa:"\f044"}.fa-arrows,.fa-arrows-up-down-left-right{--fa:"\f047"}.fa-backward-step,.fa-step-backward{--fa:"\f048"}.fa-backward-fast,.fa-fast-backward{--fa:"\f049"}.fa-backward{--fa:"\f04a"}.fa-play{--fa:"\f04b"}.fa-pause{--fa:"\f04c"}.fa-stop{--fa:"\f04d"}.fa-forward{--fa:"\f04e"}.fa-fast-forward,.fa-forward-fast{--fa:"\f050"}.fa-forward-step,.fa-step-forward{--fa:"\f051"}.fa-eject{--fa:"\f052"}.fa-chevron-left{--fa:"\f053"}.fa-chevron-right{--fa:"\f054"}.fa-circle-plus,.fa-plus-circle{--fa:"\f055"}.fa-circle-minus,.fa-minus-circle{--fa:"\f056"}.fa-circle-xmark,.fa-times-circle,.fa-xmark-circle{--fa:"\f057"}.fa-check-circle,.fa-circle-check{--fa:"\f058"}.fa-circle-question,.fa-question-circle{--fa:"\f059"}.fa-circle-info,.fa-info-circle{--fa:"\f05a"}.fa-crosshairs{--fa:"\f05b"}.fa-ban,.fa-cancel{--fa:"\f05e"}.fa-arrow-left{--fa:"\f060"}.fa-arrow-right{--fa:"\f061"}.fa-arrow-up{--fa:"\f062"}.fa-arrow-down{--fa:"\f063"}.fa-mail-forward,.fa-share{--fa:"\f064"}.fa-expand{--fa:"\f065"}.fa-compress{--fa:"\f066"}.fa-minus,.fa-subtract{--fa:"\f068"}.fa-circle-exclamation,.fa-exclamation-circle{--fa:"\f06a"}.fa-gift{--fa:"\f06b"}.fa-leaf{--fa:"\f06c"}.fa-fire{--fa:"\f06d"}.fa-eye{--fa:"\f06e"}.fa-eye-slash{--fa:"\f070"}.fa-exclamation-triangle,.fa-triangle-exclamation,.fa-warning{--fa:"\f071"}.fa-plane{--fa:"\f072"}.fa-calendar-alt,.fa-calendar-days{--fa:"\f073"}.fa-random,.fa-shuffle{--fa:"\f074"}.fa-comment{--fa:"\f075"}.fa-magnet{--fa:"\f076"}.fa-chevron-up{--fa:"\f077"}.fa-chevron-down{--fa:"\f078"}.fa-retweet{--fa:"\f079"}.fa-cart-shopping,.fa-shopping-cart{--fa:"\f07a"}.fa-folder,.fa-folder-blank{--fa:"\f07b"}.fa-folder-open{--fa:"\f07c"}.fa-arrows-up-down,.fa-arrows-v{--fa:"\f07d"}.fa-arrows-h,.fa-arrows-left-right{--fa:"\f07e"}.fa-bar-chart,.fa-chart-bar{--fa:"\f080"}.fa-camera-retro{--fa:"\f083"}.fa-key{--fa:"\f084"}.fa-cogs,.fa-gears{--fa:"\f085"}.fa-comments{--fa:"\f086"}.fa-star-half{--fa:"\f089"}.fa-arrow-right-from-bracket,.fa-sign-out{--fa:"\f08b"}.fa-thumb-tack,.fa-thumbtack{--fa:"\f08d"}.fa-arrow-up-right-from-square,.fa-external-link{--fa:"\f08e"}.fa-arrow-right-to-bracket,.fa-sign-in{--fa:"\f090"}.fa-trophy{--fa:"\f091"}.fa-upload{--fa:"\f093"}.fa-lemon{--fa:"\f094"}.fa-phone{--fa:"\f095"}.fa-phone-square,.fa-square-phone{--fa:"\f098"}.fa-unlock{--fa:"\f09c"}.fa-credit-card,.fa-credit-card-alt{--fa:"\f09d"}.fa-feed,.fa-rss{--fa:"\f09e"}.fa-hard-drive,.fa-hdd{--fa:"\f0a0"}.fa-bullhorn{--fa:"\f0a1"}.fa-certificate{--fa:"\f0a3"}.fa-hand-point-right{--fa:"\f0a4"}.fa-hand-point-left{--fa:"\f0a5"}.fa-hand-point-up{--fa:"\f0a6"}.fa-hand-point-down{--fa:"\f0a7"}.fa-arrow-circle-left,.fa-circle-arrow-left{--fa:"\f0a8"}.fa-arrow-circle-right,.fa-circle-arrow-right{--fa:"\f0a9"}.fa-arrow-circle-up,.fa-circle-arrow-up{--fa:"\f0aa"}.fa-arrow-circle-down,.fa-circle-arrow-down{--fa:"\f0ab"}.fa-globe{--fa:"\f0ac"}.fa-wrench{--fa:"\f0ad"}.fa-list-check,.fa-tasks{--fa:"\f0ae"}.fa-filter{--fa:"\f0b0"}.fa-briefcase{--fa:"\f0b1"}.fa-arrows-alt,.fa-up-down-left-right{--fa:"\f0b2"}.fa-users{--fa:"\f0c0"}.fa-chain,.fa-link{--fa:"\f0c1"}.fa-cloud{--fa:"\f0c2"}.fa-flask{--fa:"\f0c3"}.fa-cut,.fa-scissors{--fa:"\f0c4"}.fa-copy{--fa:"\f0c5"}.fa-paperclip{--fa:"\f0c6"}.fa-floppy-disk,.fa-save{--fa:"\f0c7"}.fa-square{--fa:"\f0c8"}.fa-bars,.fa-navicon{--fa:"\f0c9"}.fa-list-dots,.fa-list-ul{--fa:"\f0ca"}.fa-list-1-2,.fa-list-numeric,.fa-list-ol{--fa:"\f0cb"}.fa-strikethrough{--fa:"\f0cc"}.fa-underline{--fa:"\f0cd"}.fa-table{--fa:"\f0ce"}.fa-magic,.fa-wand-magic{--fa:"\f0d0"}.fa-truck{--fa:"\f0d1"}.fa-money-bill{--fa:"\f0d6"}.fa-caret-down{--fa:"\f0d7"}.fa-caret-up{--fa:"\f0d8"}.fa-caret-left{--fa:"\f0d9"}.fa-caret-right{--fa:"\f0da"}.fa-columns,.fa-table-columns{--fa:"\f0db"}.fa-sort,.fa-unsorted{--fa:"\f0dc"}.fa-sort-desc,.fa-sort-down{--fa:"\f0dd"}.fa-sort-asc,.fa-sort-up{--fa:"\f0de"}.fa-envelope{--fa:"\f0e0"}.fa-arrow-left-rotate,.fa-arrow-rotate-back,.fa-arrow-rotate-backward,.fa-arrow-rotate-left,.fa-undo{--fa:"\f0e2"}.fa-gavel,.fa-legal{--fa:"\f0e3"}.fa-bolt,.fa-zap{--fa:"\f0e7"}.fa-sitemap{--fa:"\f0e8"}.fa-umbrella{--fa:"\f0e9"}.fa-file-clipboard,.fa-paste{--fa:"\f0ea"}.fa-lightbulb{--fa:"\f0eb"}.fa-arrow-right-arrow-left,.fa-exchange{--fa:"\f0ec"}.fa-cloud-arrow-down,.fa-cloud-download,.fa-cloud-download-alt{--fa:"\f0ed"}.fa-cloud-arrow-up,.fa-cloud-upload,.fa-cloud-upload-alt{--fa:"\f0ee"}.fa-user-doctor,.fa-user-md{--fa:"\f0f0"}.fa-stethoscope{--fa:"\f0f1"}.fa-suitcase{--fa:"\f0f2"}.fa-bell{--fa:"\f0f3"}.fa-coffee,.fa-mug-saucer{--fa:"\f0f4"}.fa-hospital,.fa-hospital-alt,.fa-hospital-wide{--fa:"\f0f8"}.fa-ambulance,.fa-truck-medical{--fa:"\f0f9"}.fa-medkit,.fa-suitcase-medical{--fa:"\f0fa"}.fa-fighter-jet,.fa-jet-fighter{--fa:"\f0fb"}.fa-beer,.fa-beer-mug-empty{--fa:"\f0fc"}.fa-h-square,.fa-square-h{--fa:"\f0fd"}.fa-plus-square,.fa-square-plus{--fa:"\f0fe"}.fa-angle-double-left,.fa-angles-left{--fa:"\f100"}.fa-angle-double-right,.fa-angles-right{--fa:"\f101"}.fa-angle-double-up,.fa-angles-up{--fa:"\f102"}.fa-angle-double-down,.fa-angles-down{--fa:"\f103"}.fa-angle-left{--fa:"\f104"}.fa-angle-right{--fa:"\f105"}.fa-angle-up{--fa:"\f106"}.fa-angle-down{--fa:"\f107"}.fa-laptop{--fa:"\f109"}.fa-tablet-button{--fa:"\f10a"}.fa-mobile-button{--fa:"\f10b"}.fa-quote-left,.fa-quote-left-alt{--fa:"\f10d"}.fa-quote-right,.fa-quote-right-alt{--fa:"\f10e"}.fa-spinner{--fa:"\f110"}.fa-circle{--fa:"\f111"}.fa-face-smile,.fa-smile{--fa:"\f118"}.fa-face-frown,.fa-frown{--fa:"\f119"}.fa-face-meh,.fa-meh{--fa:"\f11a"}.fa-gamepad{--fa:"\f11b"}.fa-keyboard{--fa:"\f11c"}.fa-flag-checkered{--fa:"\f11e"}.fa-terminal{--fa:"\f120"}.fa-code{--fa:"\f121"}.fa-mail-reply-all,.fa-reply-all{--fa:"\f122"}.fa-location-arrow{--fa:"\f124"}.fa-crop{--fa:"\f125"}.fa-code-branch{--fa:"\f126"}.fa-chain-broken,.fa-chain-slash,.fa-link-slash,.fa-unlink{--fa:"\f127"}.fa-info{--fa:"\f129"}.fa-superscript{--fa:"\f12b"}.fa-subscript{--fa:"\f12c"}.fa-eraser{--fa:"\f12d"}.fa-puzzle-piece{--fa:"\f12e"}.fa-microphone{--fa:"\f130"}.fa-microphone-slash{--fa:"\f131"}.fa-shield,.fa-shield-blank{--fa:"\f132"}.fa-calendar{--fa:"\f133"}.fa-fire-extinguisher{--fa:"\f134"}.fa-rocket{--fa:"\f135"}.fa-chevron-circle-left,.fa-circle-chevron-left{--fa:"\f137"}.fa-chevron-circle-right,.fa-circle-chevron-right{--fa:"\f138"}.fa-chevron-circle-up,.fa-circle-chevron-up{--fa:"\f139"}.fa-chevron-circle-down,.fa-circle-chevron-down{--fa:"\f13a"}.fa-anchor{--fa:"\f13d"}.fa-unlock-alt,.fa-unlock-keyhole{--fa:"\f13e"}.fa-bullseye{--fa:"\f140"}.fa-ellipsis,.fa-ellipsis-h{--fa:"\f141"}.fa-ellipsis-v,.fa-ellipsis-vertical{--fa:"\f142"}.fa-rss-square,.fa-square-rss{--fa:"\f143"}.fa-circle-play,.fa-play-circle{--fa:"\f144"}.fa-ticket{--fa:"\f145"}.fa-minus-square,.fa-square-minus{--fa:"\f146"}.fa-arrow-turn-up,.fa-level-up{--fa:"\f148"}.fa-arrow-turn-down,.fa-level-down{--fa:"\f149"}.fa-check-square,.fa-square-check{--fa:"\f14a"}.fa-pen-square,.fa-pencil-square,.fa-square-pen{--fa:"\f14b"}.fa-external-link-square,.fa-square-arrow-up-right{--fa:"\f14c"}.fa-share-from-square,.fa-share-square{--fa:"\f14d"}.fa-compass{--fa:"\f14e"}.fa-caret-square-down,.fa-square-caret-down{--fa:"\f150"}.fa-caret-square-up,.fa-square-caret-up{--fa:"\f151"}.fa-caret-square-right,.fa-square-caret-right{--fa:"\f152"}.fa-eur,.fa-euro,.fa-euro-sign{--fa:"\f153"}.fa-gbp,.fa-pound-sign,.fa-sterling-sign{--fa:"\f154"}.fa-rupee,.fa-rupee-sign{--fa:"\f156"}.fa-cny,.fa-jpy,.fa-rmb,.fa-yen,.fa-yen-sign{--fa:"\f157"}.fa-rouble,.fa-rub,.fa-ruble,.fa-ruble-sign{--fa:"\f158"}.fa-krw,.fa-won,.fa-won-sign{--fa:"\f159"}.fa-file{--fa:"\f15b"}.fa-file-alt,.fa-file-lines,.fa-file-text{--fa:"\f15c"}.fa-arrow-down-a-z,.fa-sort-alpha-asc,.fa-sort-alpha-down{--fa:"\f15d"}.fa-arrow-up-a-z,.fa-sort-alpha-up{--fa:"\f15e"}.fa-arrow-down-wide-short,.fa-sort-amount-asc,.fa-sort-amount-down{--fa:"\f160"}.fa-arrow-up-wide-short,.fa-sort-amount-up{--fa:"\f161"}.fa-arrow-down-1-9,.fa-sort-numeric-asc,.fa-sort-numeric-down{--fa:"\f162"}.fa-arrow-up-1-9,.fa-sort-numeric-up{--fa:"\f163"}.fa-thumbs-up{--fa:"\f164"}.fa-thumbs-down{--fa:"\f165"}.fa-arrow-down-long,.fa-long-arrow-down{--fa:"\f175"}.fa-arrow-up-long,.fa-long-arrow-up{--fa:"\f176"}.fa-arrow-left-long,.fa-long-arrow-left{--fa:"\f177"}.fa-arrow-right-long,.fa-long-arrow-right{--fa:"\f178"}.fa-female,.fa-person-dress{--fa:"\f182"}.fa-male,.fa-person{--fa:"\f183"}.fa-sun{--fa:"\f185"}.fa-moon{--fa:"\f186"}.fa-archive,.fa-box-archive{--fa:"\f187"}.fa-bug{--fa:"\f188"}.fa-caret-square-left,.fa-square-caret-left{--fa:"\f191"}.fa-circle-dot,.fa-dot-circle{--fa:"\f192"}.fa-wheelchair{--fa:"\f193"}.fa-lira-sign{--fa:"\f195"}.fa-shuttle-space,.fa-space-shuttle{--fa:"\f197"}.fa-envelope-square,.fa-square-envelope{--fa:"\f199"}.fa-bank,.fa-building-columns,.fa-institution,.fa-museum,.fa-university{--fa:"\f19c"}.fa-graduation-cap,.fa-mortar-board{--fa:"\f19d"}.fa-language{--fa:"\f1ab"}.fa-fax{--fa:"\f1ac"}.fa-building{--fa:"\f1ad"}.fa-child{--fa:"\f1ae"}.fa-paw{--fa:"\f1b0"}.fa-cube{--fa:"\f1b2"}.fa-cubes{--fa:"\f1b3"}.fa-recycle{--fa:"\f1b8"}.fa-automobile,.fa-car{--fa:"\f1b9"}.fa-cab,.fa-taxi{--fa:"\f1ba"}.fa-tree{--fa:"\f1bb"}.fa-database{--fa:"\f1c0"}.fa-file-pdf{--fa:"\f1c1"}.fa-file-word{--fa:"\f1c2"}.fa-file-excel{--fa:"\f1c3"}.fa-file-powerpoint{--fa:"\f1c4"}.fa-file-image{--fa:"\f1c5"}.fa-file-archive,.fa-file-zipper{--fa:"\f1c6"}.fa-file-audio{--fa:"\f1c7"}.fa-file-video{--fa:"\f1c8"}.fa-file-code{--fa:"\f1c9"}.fa-life-ring{--fa:"\f1cd"}.fa-circle-notch{--fa:"\f1ce"}.fa-paper-plane{--fa:"\f1d8"}.fa-clock-rotate-left,.fa-history{--fa:"\f1da"}.fa-header,.fa-heading{--fa:"\f1dc"}.fa-paragraph{--fa:"\f1dd"}.fa-sliders,.fa-sliders-h{--fa:"\f1de"}.fa-share-alt,.fa-share-nodes{--fa:"\f1e0"}.fa-share-alt-square,.fa-square-share-nodes{--fa:"\f1e1"}.fa-bomb{--fa:"\f1e2"}.fa-futbol,.fa-futbol-ball,.fa-soccer-ball{--fa:"\f1e3"}.fa-teletype,.fa-tty{--fa:"\f1e4"}.fa-binoculars{--fa:"\f1e5"}.fa-plug{--fa:"\f1e6"}.fa-newspaper{--fa:"\f1ea"}.fa-wifi,.fa-wifi-3,.fa-wifi-strong{--fa:"\f1eb"}.fa-calculator{--fa:"\f1ec"}.fa-bell-slash{--fa:"\f1f6"}.fa-trash{--fa:"\f1f8"}.fa-copyright{--fa:"\f1f9"}.fa-eye-dropper,.fa-eye-dropper-empty,.fa-eyedropper{--fa:"\f1fb"}.fa-paint-brush,.fa-paintbrush{--fa:"\f1fc"}.fa-birthday-cake,.fa-cake,.fa-cake-candles{--fa:"\f1fd"}.fa-area-chart,.fa-chart-area{--fa:"\f1fe"}.fa-chart-pie,.fa-pie-chart{--fa:"\f200"}.fa-chart-line,.fa-line-chart{--fa:"\f201"}.fa-toggle-off{--fa:"\f204"}.fa-toggle-on{--fa:"\f205"}.fa-bicycle{--fa:"\f206"}.fa-bus{--fa:"\f207"}.fa-closed-captioning{--fa:"\f20a"}.fa-ils,.fa-shekel,.fa-shekel-sign,.fa-sheqel,.fa-sheqel-sign{--fa:"\f20b"}.fa-cart-plus{--fa:"\f217"}.fa-cart-arrow-down{--fa:"\f218"}.fa-diamond{--fa:"\f219"}.fa-ship{--fa:"\f21a"}.fa-user-secret{--fa:"\f21b"}.fa-motorcycle{--fa:"\f21c"}.fa-street-view{--fa:"\f21d"}.fa-heart-pulse,.fa-heartbeat{--fa:"\f21e"}.fa-venus{--fa:"\f221"}.fa-mars{--fa:"\f222"}.fa-mercury{--fa:"\f223"}.fa-mars-and-venus{--fa:"\f224"}.fa-transgender,.fa-transgender-alt{--fa:"\f225"}.fa-venus-double{--fa:"\f226"}.fa-mars-double{--fa:"\f227"}.fa-venus-mars{--fa:"\f228"}.fa-mars-stroke{--fa:"\f229"}.fa-mars-stroke-up,.fa-mars-stroke-v{--fa:"\f22a"}.fa-mars-stroke-h,.fa-mars-stroke-right{--fa:"\f22b"}.fa-neuter{--fa:"\f22c"}.fa-genderless{--fa:"\f22d"}.fa-server{--fa:"\f233"}.fa-user-plus{--fa:"\f234"}.fa-user-times,.fa-user-xmark{--fa:"\f235"}.fa-bed{--fa:"\f236"}.fa-train{--fa:"\f238"}.fa-subway,.fa-train-subway{--fa:"\f239"}.fa-battery,.fa-battery-5,.fa-battery-full{--fa:"\f240"}.fa-battery-4,.fa-battery-three-quarters{--fa:"\f241"}.fa-battery-3,.fa-battery-half{--fa:"\f242"}.fa-battery-2,.fa-battery-quarter{--fa:"\f243"}.fa-battery-0,.fa-battery-empty{--fa:"\f244"}.fa-arrow-pointer,.fa-mouse-pointer{--fa:"\f245"}.fa-i-cursor{--fa:"\f246"}.fa-object-group{--fa:"\f247"}.fa-object-ungroup{--fa:"\f248"}.fa-note-sticky,.fa-sticky-note{--fa:"\f249"}.fa-clone{--fa:"\f24d"}.fa-balance-scale,.fa-scale-balanced{--fa:"\f24e"}.fa-hourglass-1,.fa-hourglass-start{--fa:"\f251"}.fa-hourglass-2,.fa-hourglass-half{--fa:"\f252"}.fa-hourglass-3,.fa-hourglass-end{--fa:"\f253"}.fa-hourglass,.fa-hourglass-empty{--fa:"\f254"}.fa-hand-back-fist,.fa-hand-rock{--fa:"\f255"}.fa-hand,.fa-hand-paper{--fa:"\f256"}.fa-hand-scissors{--fa:"\f257"}.fa-hand-lizard{--fa:"\f258"}.fa-hand-spock{--fa:"\f259"}.fa-hand-pointer{--fa:"\f25a"}.fa-hand-peace{--fa:"\f25b"}.fa-trademark{--fa:"\f25c"}.fa-registered{--fa:"\f25d"}.fa-television,.fa-tv,.fa-tv-alt{--fa:"\f26c"}.fa-calendar-plus{--fa:"\f271"}.fa-calendar-minus{--fa:"\f272"}.fa-calendar-times,.fa-calendar-xmark{--fa:"\f273"}.fa-calendar-check{--fa:"\f274"}.fa-industry{--fa:"\f275"}.fa-map-pin{--fa:"\f276"}.fa-map-signs,.fa-signs-post{--fa:"\f277"}.fa-map{--fa:"\f279"}.fa-comment-alt,.fa-message{--fa:"\f27a"}.fa-circle-pause,.fa-pause-circle{--fa:"\f28b"}.fa-circle-stop,.fa-stop-circle{--fa:"\f28d"}.fa-bag-shopping,.fa-shopping-bag{--fa:"\f290"}.fa-basket-shopping,.fa-shopping-basket{--fa:"\f291"}.fa-universal-access{--fa:"\f29a"}.fa-blind,.fa-person-walking-with-cane{--fa:"\f29d"}.fa-audio-description{--fa:"\f29e"}.fa-phone-volume,.fa-volume-control-phone{--fa:"\f2a0"}.fa-braille{--fa:"\f2a1"}.fa-assistive-listening-systems,.fa-ear-listen{--fa:"\f2a2"}.fa-american-sign-language-interpreting,.fa-asl-interpreting,.fa-hands-american-sign-language-interpreting,.fa-hands-asl-interpreting{--fa:"\f2a3"}.fa-deaf,.fa-deafness,.fa-ear-deaf,.fa-hard-of-hearing{--fa:"\f2a4"}.fa-hands,.fa-sign-language,.fa-signing{--fa:"\f2a7"}.fa-eye-low-vision,.fa-low-vision{--fa:"\f2a8"}.fa-handshake,.fa-handshake-alt,.fa-handshake-simple{--fa:"\f2b5"}.fa-envelope-open{--fa:"\f2b6"}.fa-address-book,.fa-contact-book{--fa:"\f2b9"}.fa-address-card,.fa-contact-card,.fa-vcard{--fa:"\f2bb"}.fa-circle-user,.fa-user-circle{--fa:"\f2bd"}.fa-id-badge{--fa:"\f2c1"}.fa-drivers-license,.fa-id-card{--fa:"\f2c2"}.fa-temperature-4,.fa-temperature-full,.fa-thermometer-4,.fa-thermometer-full{--fa:"\f2c7"}.fa-temperature-3,.fa-temperature-three-quarters,.fa-thermometer-3,.fa-thermometer-three-quarters{--fa:"\f2c8"}.fa-temperature-2,.fa-temperature-half,.fa-thermometer-2,.fa-thermometer-half{--fa:"\f2c9"}.fa-temperature-1,.fa-temperature-quarter,.fa-thermometer-1,.fa-thermometer-quarter{--fa:"\f2ca"}.fa-temperature-0,.fa-temperature-empty,.fa-thermometer-0,.fa-thermometer-empty{--fa:"\f2cb"}.fa-shower{--fa:"\f2cc"}.fa-bath,.fa-bathtub{--fa:"\f2cd"}.fa-podcast{--fa:"\f2ce"}.fa-window-maximize{--fa:"\f2d0"}.fa-window-minimize{--fa:"\f2d1"}.fa-window-restore{--fa:"\f2d2"}.fa-square-xmark,.fa-times-square,.fa-xmark-square{--fa:"\f2d3"}.fa-microchip{--fa:"\f2db"}.fa-snowflake{--fa:"\f2dc"}.fa-spoon,.fa-utensil-spoon{--fa:"\f2e5"}.fa-cutlery,.fa-utensils{--fa:"\f2e7"}.fa-rotate-back,.fa-rotate-backward,.fa-rotate-left,.fa-undo-alt{--fa:"\f2ea"}.fa-trash-alt,.fa-trash-can{--fa:"\f2ed"}.fa-rotate,.fa-sync-alt{--fa:"\f2f1"}.fa-stopwatch{--fa:"\f2f2"}.fa-right-from-bracket,.fa-sign-out-alt{--fa:"\f2f5"}.fa-right-to-bracket,.fa-sign-in-alt{--fa:"\f2f6"}.fa-redo-alt,.fa-rotate-forward,.fa-rotate-right{--fa:"\f2f9"}.fa-poo{--fa:"\f2fe"}.fa-images{--fa:"\f302"}.fa-pencil,.fa-pencil-alt{--fa:"\f303"}.fa-pen{--fa:"\f304"}.fa-pen-alt,.fa-pen-clip{--fa:"\f305"}.fa-octagon{--fa:"\f306"}.fa-down-long,.fa-long-arrow-alt-down{--fa:"\f309"}.fa-left-long,.fa-long-arrow-alt-left{--fa:"\f30a"}.fa-long-arrow-alt-right,.fa-right-long{--fa:"\f30b"}.fa-long-arrow-alt-up,.fa-up-long{--fa:"\f30c"}.fa-hexagon{--fa:"\f312"}.fa-file-edit,.fa-file-pen{--fa:"\f31c"}.fa-expand-arrows-alt,.fa-maximize{--fa:"\f31e"}.fa-clipboard{--fa:"\f328"}.fa-arrows-alt-h,.fa-left-right{--fa:"\f337"}.fa-arrows-alt-v,.fa-up-down{--fa:"\f338"}.fa-alarm-clock{--fa:"\f34e"}.fa-arrow-alt-circle-down,.fa-circle-down{--fa:"\f358"}.fa-arrow-alt-circle-left,.fa-circle-left{--fa:"\f359"}.fa-arrow-alt-circle-right,.fa-circle-right{--fa:"\f35a"}.fa-arrow-alt-circle-up,.fa-circle-up{--fa:"\f35b"}.fa-external-link-alt,.fa-up-right-from-square{--fa:"\f35d"}.fa-external-link-square-alt,.fa-square-up-right{--fa:"\f360"}.fa-exchange-alt,.fa-right-left{--fa:"\f362"}.fa-repeat{--fa:"\f363"}.fa-code-commit{--fa:"\f386"}.fa-code-merge{--fa:"\f387"}.fa-desktop,.fa-desktop-alt{--fa:"\f390"}.fa-gem{--fa:"\f3a5"}.fa-level-down-alt,.fa-turn-down{--fa:"\f3be"}.fa-level-up-alt,.fa-turn-up{--fa:"\f3bf"}.fa-lock-open{--fa:"\f3c1"}.fa-location-dot,.fa-map-marker-alt{--fa:"\f3c5"}.fa-microphone-alt,.fa-microphone-lines{--fa:"\f3c9"}.fa-mobile-alt,.fa-mobile-screen-button{--fa:"\f3cd"}.fa-mobile,.fa-mobile-android,.fa-mobile-phone{--fa:"\f3ce"}.fa-mobile-android-alt,.fa-mobile-screen{--fa:"\f3cf"}.fa-money-bill-1,.fa-money-bill-alt{--fa:"\f3d1"}.fa-phone-slash{--fa:"\f3dd"}.fa-image-portrait,.fa-portrait{--fa:"\f3e0"}.fa-mail-reply,.fa-reply{--fa:"\f3e5"}.fa-shield-alt,.fa-shield-halved{--fa:"\f3ed"}.fa-tablet-alt,.fa-tablet-screen-button{--fa:"\f3fa"}.fa-tablet,.fa-tablet-android{--fa:"\f3fb"}.fa-ticket-alt,.fa-ticket-simple{--fa:"\f3ff"}.fa-rectangle-times,.fa-rectangle-xmark,.fa-times-rectangle,.fa-window-close{--fa:"\f410"}.fa-compress-alt,.fa-down-left-and-up-right-to-center{--fa:"\f422"}.fa-expand-alt,.fa-up-right-and-down-left-from-center{--fa:"\f424"}.fa-baseball-bat-ball{--fa:"\f432"}.fa-baseball,.fa-baseball-ball{--fa:"\f433"}.fa-basketball,.fa-basketball-ball{--fa:"\f434"}.fa-bowling-ball{--fa:"\f436"}.fa-chess{--fa:"\f439"}.fa-chess-bishop{--fa:"\f43a"}.fa-chess-board{--fa:"\f43c"}.fa-chess-king{--fa:"\f43f"}.fa-chess-knight{--fa:"\f441"}.fa-chess-pawn{--fa:"\f443"}.fa-chess-queen{--fa:"\f445"}.fa-chess-rook{--fa:"\f447"}.fa-dumbbell{--fa:"\f44b"}.fa-football,.fa-football-ball{--fa:"\f44e"}.fa-golf-ball,.fa-golf-ball-tee{--fa:"\f450"}.fa-hockey-puck{--fa:"\f453"}.fa-broom-ball,.fa-quidditch,.fa-quidditch-broom-ball{--fa:"\f458"}.fa-square-full{--fa:"\f45c"}.fa-ping-pong-paddle-ball,.fa-table-tennis,.fa-table-tennis-paddle-ball{--fa:"\f45d"}.fa-volleyball,.fa-volleyball-ball{--fa:"\f45f"}.fa-allergies,.fa-hand-dots{--fa:"\f461"}.fa-band-aid,.fa-bandage{--fa:"\f462"}.fa-box{--fa:"\f466"}.fa-boxes,.fa-boxes-alt,.fa-boxes-stacked{--fa:"\f468"}.fa-briefcase-medical{--fa:"\f469"}.fa-burn,.fa-fire-flame-simple{--fa:"\f46a"}.fa-capsules{--fa:"\f46b"}.fa-clipboard-check{--fa:"\f46c"}.fa-clipboard-list{--fa:"\f46d"}.fa-diagnoses,.fa-person-dots-from-line{--fa:"\f470"}.fa-dna{--fa:"\f471"}.fa-dolly,.fa-dolly-box{--fa:"\f472"}.fa-cart-flatbed,.fa-dolly-flatbed{--fa:"\f474"}.fa-file-medical{--fa:"\f477"}.fa-file-medical-alt,.fa-file-waveform{--fa:"\f478"}.fa-first-aid,.fa-kit-medical{--fa:"\f479"}.fa-circle-h,.fa-hospital-symbol{--fa:"\f47e"}.fa-id-card-alt,.fa-id-card-clip{--fa:"\f47f"}.fa-notes-medical{--fa:"\f481"}.fa-pallet{--fa:"\f482"}.fa-pills{--fa:"\f484"}.fa-prescription-bottle{--fa:"\f485"}.fa-prescription-bottle-alt,.fa-prescription-bottle-medical{--fa:"\f486"}.fa-bed-pulse,.fa-procedures{--fa:"\f487"}.fa-shipping-fast,.fa-truck-fast{--fa:"\f48b"}.fa-smoking{--fa:"\f48d"}.fa-syringe{--fa:"\f48e"}.fa-tablets{--fa:"\f490"}.fa-thermometer{--fa:"\f491"}.fa-vial{--fa:"\f492"}.fa-vials{--fa:"\f493"}.fa-warehouse{--fa:"\f494"}.fa-weight,.fa-weight-scale{--fa:"\f496"}.fa-x-ray{--fa:"\f497"}.fa-box-open{--fa:"\f49e"}.fa-comment-dots,.fa-commenting{--fa:"\f4ad"}.fa-comment-slash{--fa:"\f4b3"}.fa-couch{--fa:"\f4b8"}.fa-circle-dollar-to-slot,.fa-donate{--fa:"\f4b9"}.fa-dove{--fa:"\f4ba"}.fa-hand-holding{--fa:"\f4bd"}.fa-hand-holding-heart{--fa:"\f4be"}.fa-hand-holding-dollar,.fa-hand-holding-usd{--fa:"\f4c0"}.fa-hand-holding-droplet,.fa-hand-holding-water{--fa:"\f4c1"}.fa-hands-holding{--fa:"\f4c2"}.fa-hands-helping,.fa-handshake-angle{--fa:"\f4c4"}.fa-parachute-box{--fa:"\f4cd"}.fa-people-carry,.fa-people-carry-box{--fa:"\f4ce"}.fa-piggy-bank{--fa:"\f4d3"}.fa-ribbon{--fa:"\f4d6"}.fa-route{--fa:"\f4d7"}.fa-seedling,.fa-sprout{--fa:"\f4d8"}.fa-sign,.fa-sign-hanging{--fa:"\f4d9"}.fa-face-smile-wink,.fa-smile-wink{--fa:"\f4da"}.fa-tape{--fa:"\f4db"}.fa-truck-loading,.fa-truck-ramp-box{--fa:"\f4de"}.fa-truck-moving{--fa:"\f4df"}.fa-video-slash{--fa:"\f4e2"}.fa-wine-glass{--fa:"\f4e3"}.fa-user-astronaut{--fa:"\f4fb"}.fa-user-check{--fa:"\f4fc"}.fa-user-clock{--fa:"\f4fd"}.fa-user-cog,.fa-user-gear{--fa:"\f4fe"}.fa-user-edit,.fa-user-pen{--fa:"\f4ff"}.fa-user-friends,.fa-user-group{--fa:"\f500"}.fa-user-graduate{--fa:"\f501"}.fa-user-lock{--fa:"\f502"}.fa-user-minus{--fa:"\f503"}.fa-user-ninja{--fa:"\f504"}.fa-user-shield{--fa:"\f505"}.fa-user-alt-slash,.fa-user-large-slash,.fa-user-slash{--fa:"\f506"}.fa-user-tag{--fa:"\f507"}.fa-user-tie{--fa:"\f508"}.fa-users-cog,.fa-users-gear{--fa:"\f509"}.fa-balance-scale-left,.fa-scale-unbalanced{--fa:"\f515"}.fa-balance-scale-right,.fa-scale-unbalanced-flip{--fa:"\f516"}.fa-blender{--fa:"\f517"}.fa-book-open{--fa:"\f518"}.fa-broadcast-tower,.fa-tower-broadcast{--fa:"\f519"}.fa-broom{--fa:"\f51a"}.fa-blackboard,.fa-chalkboard{--fa:"\f51b"}.fa-chalkboard-teacher,.fa-chalkboard-user{--fa:"\f51c"}.fa-church{--fa:"\f51d"}.fa-coins{--fa:"\f51e"}.fa-compact-disc{--fa:"\f51f"}.fa-crow{--fa:"\f520"}.fa-crown{--fa:"\f521"}.fa-dice{--fa:"\f522"}.fa-dice-five{--fa:"\f523"}.fa-dice-four{--fa:"\f524"}.fa-dice-one{--fa:"\f525"}.fa-dice-six{--fa:"\f526"}.fa-dice-three{--fa:"\f527"}.fa-dice-two{--fa:"\f528"}.fa-divide{--fa:"\f529"}.fa-door-closed{--fa:"\f52a"}.fa-door-open{--fa:"\f52b"}.fa-feather{--fa:"\f52d"}.fa-frog{--fa:"\f52e"}.fa-gas-pump{--fa:"\f52f"}.fa-glasses{--fa:"\f530"}.fa-greater-than-equal{--fa:"\f532"}.fa-helicopter{--fa:"\f533"}.fa-infinity{--fa:"\f534"}.fa-kiwi-bird{--fa:"\f535"}.fa-less-than-equal{--fa:"\f537"}.fa-memory{--fa:"\f538"}.fa-microphone-alt-slash,.fa-microphone-lines-slash{--fa:"\f539"}.fa-money-bill-wave{--fa:"\f53a"}.fa-money-bill-1-wave,.fa-money-bill-wave-alt{--fa:"\f53b"}.fa-money-check{--fa:"\f53c"}.fa-money-check-alt,.fa-money-check-dollar{--fa:"\f53d"}.fa-not-equal{--fa:"\f53e"}.fa-palette{--fa:"\f53f"}.fa-parking,.fa-square-parking{--fa:"\f540"}.fa-diagram-project,.fa-project-diagram{--fa:"\f542"}.fa-receipt{--fa:"\f543"}.fa-robot{--fa:"\f544"}.fa-ruler{--fa:"\f545"}.fa-ruler-combined{--fa:"\f546"}.fa-ruler-horizontal{--fa:"\f547"}.fa-ruler-vertical{--fa:"\f548"}.fa-school{--fa:"\f549"}.fa-screwdriver{--fa:"\f54a"}.fa-shoe-prints{--fa:"\f54b"}.fa-skull{--fa:"\f54c"}.fa-ban-smoking,.fa-smoking-ban{--fa:"\f54d"}.fa-store{--fa:"\f54e"}.fa-shop,.fa-store-alt{--fa:"\f54f"}.fa-bars-staggered,.fa-reorder,.fa-stream{--fa:"\f550"}.fa-stroopwafel{--fa:"\f551"}.fa-toolbox{--fa:"\f552"}.fa-shirt,.fa-t-shirt,.fa-tshirt{--fa:"\f553"}.fa-person-walking,.fa-walking{--fa:"\f554"}.fa-wallet{--fa:"\f555"}.fa-angry,.fa-face-angry{--fa:"\f556"}.fa-archway{--fa:"\f557"}.fa-atlas,.fa-book-atlas{--fa:"\f558"}.fa-award{--fa:"\f559"}.fa-backspace,.fa-delete-left{--fa:"\f55a"}.fa-bezier-curve{--fa:"\f55b"}.fa-bong{--fa:"\f55c"}.fa-brush{--fa:"\f55d"}.fa-bus-alt,.fa-bus-simple{--fa:"\f55e"}.fa-cannabis{--fa:"\f55f"}.fa-check-double{--fa:"\f560"}.fa-cocktail,.fa-martini-glass-citrus{--fa:"\f561"}.fa-bell-concierge,.fa-concierge-bell{--fa:"\f562"}.fa-cookie{--fa:"\f563"}.fa-cookie-bite{--fa:"\f564"}.fa-crop-alt,.fa-crop-simple{--fa:"\f565"}.fa-digital-tachograph,.fa-tachograph-digital{--fa:"\f566"}.fa-dizzy,.fa-face-dizzy{--fa:"\f567"}.fa-compass-drafting,.fa-drafting-compass{--fa:"\f568"}.fa-drum{--fa:"\f569"}.fa-drum-steelpan{--fa:"\f56a"}.fa-feather-alt,.fa-feather-pointed{--fa:"\f56b"}.fa-file-contract{--fa:"\f56c"}.fa-file-arrow-down,.fa-file-download{--fa:"\f56d"}.fa-arrow-right-from-file,.fa-file-export{--fa:"\f56e"}.fa-arrow-right-to-file,.fa-file-import{--fa:"\f56f"}.fa-file-invoice{--fa:"\f570"}.fa-file-invoice-dollar{--fa:"\f571"}.fa-file-prescription{--fa:"\f572"}.fa-file-signature{--fa:"\f573"}.fa-file-arrow-up,.fa-file-upload{--fa:"\f574"}.fa-fill{--fa:"\f575"}.fa-fill-drip{--fa:"\f576"}.fa-fingerprint{--fa:"\f577"}.fa-fish{--fa:"\f578"}.fa-face-flushed,.fa-flushed{--fa:"\f579"}.fa-face-frown-open,.fa-frown-open{--fa:"\f57a"}.fa-glass-martini-alt,.fa-martini-glass{--fa:"\f57b"}.fa-earth-africa,.fa-globe-africa{--fa:"\f57c"}.fa-earth,.fa-earth-america,.fa-earth-americas,.fa-globe-americas{--fa:"\f57d"}.fa-earth-asia,.fa-globe-asia{--fa:"\f57e"}.fa-face-grimace,.fa-grimace{--fa:"\f57f"}.fa-face-grin,.fa-grin{--fa:"\f580"}.fa-face-grin-wide,.fa-grin-alt{--fa:"\f581"}.fa-face-grin-beam,.fa-grin-beam{--fa:"\f582"}.fa-face-grin-beam-sweat,.fa-grin-beam-sweat{--fa:"\f583"}.fa-face-grin-hearts,.fa-grin-hearts{--fa:"\f584"}.fa-face-grin-squint,.fa-grin-squint{--fa:"\f585"}.fa-face-grin-squint-tears,.fa-grin-squint-tears{--fa:"\f586"}.fa-face-grin-stars,.fa-grin-stars{--fa:"\f587"}.fa-face-grin-tears,.fa-grin-tears{--fa:"\f588"}.fa-face-grin-tongue,.fa-grin-tongue{--fa:"\f589"}.fa-face-grin-tongue-squint,.fa-grin-tongue-squint{--fa:"\f58a"}.fa-face-grin-tongue-wink,.fa-grin-tongue-wink{--fa:"\f58b"}.fa-face-grin-wink,.fa-grin-wink{--fa:"\f58c"}.fa-grid-horizontal,.fa-grip,.fa-grip-horizontal{--fa:"\f58d"}.fa-grid-vertical,.fa-grip-vertical{--fa:"\f58e"}.fa-headset{--fa:"\f590"}.fa-highlighter{--fa:"\f591"}.fa-hot-tub,.fa-hot-tub-person{--fa:"\f593"}.fa-hotel{--fa:"\f594"}.fa-joint{--fa:"\f595"}.fa-face-kiss,.fa-kiss{--fa:"\f596"}.fa-face-kiss-beam,.fa-kiss-beam{--fa:"\f597"}.fa-face-kiss-wink-heart,.fa-kiss-wink-heart{--fa:"\f598"}.fa-face-laugh,.fa-laugh{--fa:"\f599"}.fa-face-laugh-beam,.fa-laugh-beam{--fa:"\f59a"}.fa-face-laugh-squint,.fa-laugh-squint{--fa:"\f59b"}.fa-face-laugh-wink,.fa-laugh-wink{--fa:"\f59c"}.fa-cart-flatbed-suitcase,.fa-luggage-cart{--fa:"\f59d"}.fa-map-location,.fa-map-marked{--fa:"\f59f"}.fa-map-location-dot,.fa-map-marked-alt{--fa:"\f5a0"}.fa-marker{--fa:"\f5a1"}.fa-medal{--fa:"\f5a2"}.fa-face-meh-blank,.fa-meh-blank{--fa:"\f5a4"}.fa-face-rolling-eyes,.fa-meh-rolling-eyes{--fa:"\f5a5"}.fa-monument{--fa:"\f5a6"}.fa-mortar-pestle{--fa:"\f5a7"}.fa-paint-roller{--fa:"\f5aa"}.fa-passport{--fa:"\f5ab"}.fa-pen-fancy{--fa:"\f5ac"}.fa-pen-nib{--fa:"\f5ad"}.fa-pen-ruler,.fa-pencil-ruler{--fa:"\f5ae"}.fa-plane-arrival{--fa:"\f5af"}.fa-plane-departure{--fa:"\f5b0"}.fa-prescription{--fa:"\f5b1"}.fa-face-sad-cry,.fa-sad-cry{--fa:"\f5b3"}.fa-face-sad-tear,.fa-sad-tear{--fa:"\f5b4"}.fa-shuttle-van,.fa-van-shuttle{--fa:"\f5b6"}.fa-signature{--fa:"\f5b7"}.fa-face-smile-beam,.fa-smile-beam{--fa:"\f5b8"}.fa-solar-panel{--fa:"\f5ba"}.fa-spa{--fa:"\f5bb"}.fa-splotch{--fa:"\f5bc"}.fa-spray-can{--fa:"\f5bd"}.fa-stamp{--fa:"\f5bf"}.fa-star-half-alt,.fa-star-half-stroke{--fa:"\f5c0"}.fa-suitcase-rolling{--fa:"\f5c1"}.fa-face-surprise,.fa-surprise{--fa:"\f5c2"}.fa-swatchbook{--fa:"\f5c3"}.fa-person-swimming,.fa-swimmer{--fa:"\f5c4"}.fa-ladder-water,.fa-swimming-pool,.fa-water-ladder{--fa:"\f5c5"}.fa-droplet-slash,.fa-tint-slash{--fa:"\f5c7"}.fa-face-tired,.fa-tired{--fa:"\f5c8"}.fa-tooth{--fa:"\f5c9"}.fa-umbrella-beach{--fa:"\f5ca"}.fa-weight-hanging{--fa:"\f5cd"}.fa-wine-glass-alt,.fa-wine-glass-empty{--fa:"\f5ce"}.fa-air-freshener,.fa-spray-can-sparkles{--fa:"\f5d0"}.fa-apple-alt,.fa-apple-whole{--fa:"\f5d1"}.fa-atom{--fa:"\f5d2"}.fa-bone{--fa:"\f5d7"}.fa-book-open-reader,.fa-book-reader{--fa:"\f5da"}.fa-brain{--fa:"\f5dc"}.fa-car-alt,.fa-car-rear{--fa:"\f5de"}.fa-battery-car,.fa-car-battery{--fa:"\f5df"}.fa-car-burst,.fa-car-crash{--fa:"\f5e1"}.fa-car-side{--fa:"\f5e4"}.fa-charging-station{--fa:"\f5e7"}.fa-diamond-turn-right,.fa-directions{--fa:"\f5eb"}.fa-draw-polygon,.fa-vector-polygon{--fa:"\f5ee"}.fa-laptop-code{--fa:"\f5fc"}.fa-layer-group{--fa:"\f5fd"}.fa-location,.fa-location-crosshairs{--fa:"\f601"}.fa-lungs{--fa:"\f604"}.fa-microscope{--fa:"\f610"}.fa-oil-can{--fa:"\f613"}.fa-poop{--fa:"\f619"}.fa-shapes,.fa-triangle-circle-square{--fa:"\f61f"}.fa-star-of-life{--fa:"\f621"}.fa-dashboard,.fa-gauge,.fa-gauge-med,.fa-tachometer-alt-average{--fa:"\f624"}.fa-gauge-high,.fa-tachometer-alt,.fa-tachometer-alt-fast{--fa:"\f625"}.fa-gauge-simple,.fa-gauge-simple-med,.fa-tachometer-average{--fa:"\f629"}.fa-gauge-simple-high,.fa-tachometer,.fa-tachometer-fast{--fa:"\f62a"}.fa-teeth{--fa:"\f62e"}.fa-teeth-open{--fa:"\f62f"}.fa-masks-theater,.fa-theater-masks{--fa:"\f630"}.fa-traffic-light{--fa:"\f637"}.fa-truck-monster{--fa:"\f63b"}.fa-truck-pickup{--fa:"\f63c"}.fa-ad,.fa-rectangle-ad{--fa:"\f641"}.fa-ankh{--fa:"\f644"}.fa-bible,.fa-book-bible{--fa:"\f647"}.fa-briefcase-clock,.fa-business-time{--fa:"\f64a"}.fa-city{--fa:"\f64f"}.fa-comment-dollar{--fa:"\f651"}.fa-comments-dollar{--fa:"\f653"}.fa-cross{--fa:"\f654"}.fa-dharmachakra{--fa:"\f655"}.fa-envelope-open-text{--fa:"\f658"}.fa-folder-minus{--fa:"\f65d"}.fa-folder-plus{--fa:"\f65e"}.fa-filter-circle-dollar,.fa-funnel-dollar{--fa:"\f662"}.fa-gopuram{--fa:"\f664"}.fa-hamsa{--fa:"\f665"}.fa-bahai,.fa-haykal{--fa:"\f666"}.fa-jedi{--fa:"\f669"}.fa-book-journal-whills,.fa-journal-whills{--fa:"\f66a"}.fa-kaaba{--fa:"\f66b"}.fa-khanda{--fa:"\f66d"}.fa-landmark{--fa:"\f66f"}.fa-envelopes-bulk,.fa-mail-bulk{--fa:"\f674"}.fa-menorah{--fa:"\f676"}.fa-mosque{--fa:"\f678"}.fa-om{--fa:"\f679"}.fa-pastafarianism,.fa-spaghetti-monster-flying{--fa:"\f67b"}.fa-peace{--fa:"\f67c"}.fa-place-of-worship{--fa:"\f67f"}.fa-poll,.fa-square-poll-vertical{--fa:"\f681"}.fa-poll-h,.fa-square-poll-horizontal{--fa:"\f682"}.fa-person-praying,.fa-pray{--fa:"\f683"}.fa-hands-praying,.fa-praying-hands{--fa:"\f684"}.fa-book-quran,.fa-quran{--fa:"\f687"}.fa-magnifying-glass-dollar,.fa-search-dollar{--fa:"\f688"}.fa-magnifying-glass-location,.fa-search-location{--fa:"\f689"}.fa-socks{--fa:"\f696"}.fa-square-root-alt,.fa-square-root-variable{--fa:"\f698"}.fa-star-and-crescent{--fa:"\f699"}.fa-star-of-david{--fa:"\f69a"}.fa-synagogue{--fa:"\f69b"}.fa-scroll-torah,.fa-torah{--fa:"\f6a0"}.fa-torii-gate{--fa:"\f6a1"}.fa-vihara{--fa:"\f6a7"}.fa-volume,.fa-volume-medium{--fa:"\f6a8"}.fa-volume-mute,.fa-volume-times,.fa-volume-xmark{--fa:"\f6a9"}.fa-yin-yang{--fa:"\f6ad"}.fa-blender-phone{--fa:"\f6b6"}.fa-book-dead,.fa-book-skull{--fa:"\f6b7"}.fa-campground{--fa:"\f6bb"}.fa-cat{--fa:"\f6be"}.fa-chair{--fa:"\f6c0"}.fa-cloud-moon{--fa:"\f6c3"}.fa-cloud-sun{--fa:"\f6c4"}.fa-cow{--fa:"\f6c8"}.fa-dice-d20{--fa:"\f6cf"}.fa-dice-d6{--fa:"\f6d1"}.fa-dog{--fa:"\f6d3"}.fa-dragon{--fa:"\f6d5"}.fa-drumstick-bite{--fa:"\f6d7"}.fa-dungeon{--fa:"\f6d9"}.fa-file-csv{--fa:"\f6dd"}.fa-fist-raised,.fa-hand-fist{--fa:"\f6de"}.fa-ghost{--fa:"\f6e2"}.fa-hammer{--fa:"\f6e3"}.fa-hanukiah{--fa:"\f6e6"}.fa-hat-wizard{--fa:"\f6e8"}.fa-hiking,.fa-person-hiking{--fa:"\f6ec"}.fa-hippo{--fa:"\f6ed"}.fa-horse{--fa:"\f6f0"}.fa-house-chimney-crack,.fa-house-damage{--fa:"\f6f1"}.fa-hryvnia,.fa-hryvnia-sign{--fa:"\f6f2"}.fa-mask{--fa:"\f6fa"}.fa-mountain{--fa:"\f6fc"}.fa-network-wired{--fa:"\f6ff"}.fa-otter{--fa:"\f700"}.fa-ring{--fa:"\f70b"}.fa-person-running,.fa-running{--fa:"\f70c"}.fa-scroll{--fa:"\f70e"}.fa-skull-crossbones{--fa:"\f714"}.fa-slash{--fa:"\f715"}.fa-spider{--fa:"\f717"}.fa-toilet-paper,.fa-toilet-paper-alt,.fa-toilet-paper-blank{--fa:"\f71e"}.fa-tractor{--fa:"\f722"}.fa-user-injured{--fa:"\f728"}.fa-vr-cardboard{--fa:"\f729"}.fa-wand-sparkles{--fa:"\f72b"}.fa-wind{--fa:"\f72e"}.fa-wine-bottle{--fa:"\f72f"}.fa-cloud-meatball{--fa:"\f73b"}.fa-cloud-moon-rain{--fa:"\f73c"}.fa-cloud-rain{--fa:"\f73d"}.fa-cloud-showers-heavy{--fa:"\f740"}.fa-cloud-sun-rain{--fa:"\f743"}.fa-democrat{--fa:"\f747"}.fa-flag-usa{--fa:"\f74d"}.fa-hurricane{--fa:"\f751"}.fa-landmark-alt,.fa-landmark-dome{--fa:"\f752"}.fa-meteor{--fa:"\f753"}.fa-person-booth{--fa:"\f756"}.fa-poo-bolt,.fa-poo-storm{--fa:"\f75a"}.fa-rainbow{--fa:"\f75b"}.fa-republican{--fa:"\f75e"}.fa-smog{--fa:"\f75f"}.fa-temperature-high{--fa:"\f769"}.fa-temperature-low{--fa:"\f76b"}.fa-cloud-bolt,.fa-thunderstorm{--fa:"\f76c"}.fa-tornado{--fa:"\f76f"}.fa-volcano{--fa:"\f770"}.fa-check-to-slot,.fa-vote-yea{--fa:"\f772"}.fa-water{--fa:"\f773"}.fa-baby{--fa:"\f77c"}.fa-baby-carriage,.fa-carriage-baby{--fa:"\f77d"}.fa-biohazard{--fa:"\f780"}.fa-blog{--fa:"\f781"}.fa-calendar-day{--fa:"\f783"}.fa-calendar-week{--fa:"\f784"}.fa-candy-cane{--fa:"\f786"}.fa-carrot{--fa:"\f787"}.fa-cash-register{--fa:"\f788"}.fa-compress-arrows-alt,.fa-minimize{--fa:"\f78c"}.fa-dumpster{--fa:"\f793"}.fa-dumpster-fire{--fa:"\f794"}.fa-ethernet{--fa:"\f796"}.fa-gifts{--fa:"\f79c"}.fa-champagne-glasses,.fa-glass-cheers{--fa:"\f79f"}.fa-glass-whiskey,.fa-whiskey-glass{--fa:"\f7a0"}.fa-earth-europe,.fa-globe-europe{--fa:"\f7a2"}.fa-grip-lines{--fa:"\f7a4"}.fa-grip-lines-vertical{--fa:"\f7a5"}.fa-guitar{--fa:"\f7a6"}.fa-heart-broken,.fa-heart-crack{--fa:"\f7a9"}.fa-holly-berry{--fa:"\f7aa"}.fa-horse-head{--fa:"\f7ab"}.fa-icicles{--fa:"\f7ad"}.fa-igloo{--fa:"\f7ae"}.fa-mitten{--fa:"\f7b5"}.fa-mug-hot{--fa:"\f7b6"}.fa-radiation{--fa:"\f7b9"}.fa-circle-radiation,.fa-radiation-alt{--fa:"\f7ba"}.fa-restroom{--fa:"\f7bd"}.fa-satellite{--fa:"\f7bf"}.fa-satellite-dish{--fa:"\f7c0"}.fa-sd-card{--fa:"\f7c2"}.fa-sim-card{--fa:"\f7c4"}.fa-person-skating,.fa-skating{--fa:"\f7c5"}.fa-person-skiing,.fa-skiing{--fa:"\f7c9"}.fa-person-skiing-nordic,.fa-skiing-nordic{--fa:"\f7ca"}.fa-sleigh{--fa:"\f7cc"}.fa-comment-sms,.fa-sms{--fa:"\f7cd"}.fa-person-snowboarding,.fa-snowboarding{--fa:"\f7ce"}.fa-snowman{--fa:"\f7d0"}.fa-snowplow{--fa:"\f7d2"}.fa-tenge,.fa-tenge-sign{--fa:"\f7d7"}.fa-toilet{--fa:"\f7d8"}.fa-screwdriver-wrench,.fa-tools{--fa:"\f7d9"}.fa-cable-car,.fa-tram{--fa:"\f7da"}.fa-fire-alt,.fa-fire-flame-curved{--fa:"\f7e4"}.fa-bacon{--fa:"\f7e5"}.fa-book-medical{--fa:"\f7e6"}.fa-bread-slice{--fa:"\f7ec"}.fa-cheese{--fa:"\f7ef"}.fa-clinic-medical,.fa-house-chimney-medical{--fa:"\f7f2"}.fa-clipboard-user{--fa:"\f7f3"}.fa-comment-medical{--fa:"\f7f5"}.fa-crutch{--fa:"\f7f7"}.fa-disease{--fa:"\f7fa"}.fa-egg{--fa:"\f7fb"}.fa-folder-tree{--fa:"\f802"}.fa-burger,.fa-hamburger{--fa:"\f805"}.fa-hand-middle-finger{--fa:"\f806"}.fa-hard-hat,.fa-hat-hard,.fa-helmet-safety{--fa:"\f807"}.fa-hospital-user{--fa:"\f80d"}.fa-hotdog{--fa:"\f80f"}.fa-ice-cream{--fa:"\f810"}.fa-laptop-medical{--fa:"\f812"}.fa-pager{--fa:"\f815"}.fa-pepper-hot{--fa:"\f816"}.fa-pizza-slice{--fa:"\f818"}.fa-sack-dollar{--fa:"\f81d"}.fa-book-tanakh,.fa-tanakh{--fa:"\f827"}.fa-bars-progress,.fa-tasks-alt{--fa:"\f828"}.fa-trash-arrow-up,.fa-trash-restore{--fa:"\f829"}.fa-trash-can-arrow-up,.fa-trash-restore-alt{--fa:"\f82a"}.fa-user-nurse{--fa:"\f82f"}.fa-wave-square{--fa:"\f83e"}.fa-biking,.fa-person-biking{--fa:"\f84a"}.fa-border-all{--fa:"\f84c"}.fa-border-none{--fa:"\f850"}.fa-border-style,.fa-border-top-left{--fa:"\f853"}.fa-digging,.fa-person-digging{--fa:"\f85e"}.fa-fan{--fa:"\f863"}.fa-heart-music-camera-bolt,.fa-icons{--fa:"\f86d"}.fa-phone-alt,.fa-phone-flip{--fa:"\f879"}.fa-phone-square-alt,.fa-square-phone-flip{--fa:"\f87b"}.fa-photo-film,.fa-photo-video{--fa:"\f87c"}.fa-remove-format,.fa-text-slash{--fa:"\f87d"}.fa-arrow-down-z-a,.fa-sort-alpha-desc,.fa-sort-alpha-down-alt{--fa:"\f881"}.fa-arrow-up-z-a,.fa-sort-alpha-up-alt{--fa:"\f882"}.fa-arrow-down-short-wide,.fa-sort-amount-desc,.fa-sort-amount-down-alt{--fa:"\f884"}.fa-arrow-up-short-wide,.fa-sort-amount-up-alt{--fa:"\f885"}.fa-arrow-down-9-1,.fa-sort-numeric-desc,.fa-sort-numeric-down-alt{--fa:"\f886"}.fa-arrow-up-9-1,.fa-sort-numeric-up-alt{--fa:"\f887"}.fa-spell-check{--fa:"\f891"}.fa-voicemail{--fa:"\f897"}.fa-hat-cowboy{--fa:"\f8c0"}.fa-hat-cowboy-side{--fa:"\f8c1"}.fa-computer-mouse,.fa-mouse{--fa:"\f8cc"}.fa-radio{--fa:"\f8d7"}.fa-record-vinyl{--fa:"\f8d9"}.fa-walkie-talkie{--fa:"\f8ef"}.fa-caravan{--fa:"\f8ff"}[m
[31m-:host,:root{--fa-family-brands:"Font Awesome 7 Brands";--fa-font-brands:normal 400 1em/1 var(--fa-family-brands)}@font-face{font-family:"Font Awesome 7 Brands";font-style:normal;font-weight:400;font-display:block;src:url(../webfonts/fa-brands-400.woff2)}.fa-brands,.fa-classic.fa-brands,.fab{--fa-family:var(--fa-family-brands);--fa-style:400}.fa-firefox-browser{--fa:"\e007"}.fa-ideal{--fa:"\e013"}.fa-microblog{--fa:"\e01a"}.fa-pied-piper-square,.fa-square-pied-piper{--fa:"\e01e"}.fa-unity{--fa:"\e049"}.fa-dailymotion{--fa:"\e052"}.fa-instagram-square,.fa-square-instagram{--fa:"\e055"}.fa-mixer{--fa:"\e056"}.fa-shopify{--fa:"\e057"}.fa-deezer{--fa:"\e077"}.fa-edge-legacy{--fa:"\e078"}.fa-google-pay{--fa:"\e079"}.fa-rust{--fa:"\e07a"}.fa-tiktok{--fa:"\e07b"}.fa-unsplash{--fa:"\e07c"}.fa-cloudflare{--fa:"\e07d"}.fa-guilded{--fa:"\e07e"}.fa-hive{--fa:"\e07f"}.fa-42-group,.fa-innosoft{--fa:"\e080"}.fa-instalod{--fa:"\e081"}.fa-octopus-deploy{--fa:"\e082"}.fa-perbyte{--fa:"\e083"}.fa-uncharted{--fa:"\e084"}.fa-watchman-monitoring{--fa:"\e087"}.fa-wodu{--fa:"\e088"}.fa-wirsindhandwerk,.fa-wsh{--fa:"\e2d0"}.fa-bots{--fa:"\e340"}.fa-cmplid{--fa:"\e360"}.fa-bilibili{--fa:"\e3d9"}.fa-golang{--fa:"\e40f"}.fa-pix{--fa:"\e43a"}.fa-sitrox{--fa:"\e44a"}.fa-hashnode{--fa:"\e499"}.fa-meta{--fa:"\e49b"}.fa-padlet{--fa:"\e4a0"}.fa-nfc-directional{--fa:"\e530"}.fa-nfc-symbol{--fa:"\e531"}.fa-screenpal{--fa:"\e570"}.fa-space-awesome{--fa:"\e5ac"}.fa-square-font-awesome{--fa:"\e5ad"}.fa-gitlab-square,.fa-square-gitlab{--fa:"\e5ae"}.fa-odysee{--fa:"\e5c6"}.fa-stubber{--fa:"\e5c7"}.fa-debian{--fa:"\e60b"}.fa-shoelace{--fa:"\e60c"}.fa-threads{--fa:"\e618"}.fa-square-threads{--fa:"\e619"}.fa-square-x-twitter{--fa:"\e61a"}.fa-x-twitter{--fa:"\e61b"}.fa-opensuse{--fa:"\e62b"}.fa-letterboxd{--fa:"\e62d"}.fa-square-letterboxd{--fa:"\e62e"}.fa-mintbit{--fa:"\e62f"}.fa-google-scholar{--fa:"\e63b"}.fa-brave{--fa:"\e63c"}.fa-brave-reverse{--fa:"\e63d"}.fa-pixiv{--fa:"\e640"}.fa-upwork{--fa:"\e641"}.fa-webflow{--fa:"\e65c"}.fa-signal-messenger{--fa:"\e663"}.fa-bluesky{--fa:"\e671"}.fa-jxl{--fa:"\e67b"}.fa-square-upwork{--fa:"\e67c"}.fa-web-awesome{--fa:"\e682"}.fa-square-web-awesome{--fa:"\e683"}.fa-square-web-awesome-stroke{--fa:"\e684"}.fa-dart-lang{--fa:"\e693"}.fa-flutter{--fa:"\e694"}.fa-files-pinwheel{--fa:"\e69f"}.fa-css{--fa:"\e6a2"}.fa-square-bluesky{--fa:"\e6a3"}.fa-openai{--fa:"\e7cf"}.fa-square-linkedin{--fa:"\e7d0"}.fa-cash-app{--fa:"\e7d4"}.fa-disqus{--fa:"\e7d5"}.fa-11ty,.fa-eleventy{--fa:"\e7d6"}.fa-kakao-talk{--fa:"\e7d7"}.fa-linktree{--fa:"\e7d8"}.fa-notion{--fa:"\e7d9"}.fa-pandora{--fa:"\e7da"}.fa-pixelfed{--fa:"\e7db"}.fa-tidal{--fa:"\e7dc"}.fa-vsco{--fa:"\e7dd"}.fa-w3c{--fa:"\e7de"}.fa-lumon{--fa:"\e7e2"}.fa-lumon-drop{--fa:"\e7e3"}.fa-square-figma{--fa:"\e7e4"}.fa-tex{--fa:"\e7ff"}.fa-duolingo{--fa:"\e812"}.fa-supportnow{--fa:"\e833"}.fa-tor-browser{--fa:"\e838"}.fa-typescript{--fa:"\e840"}.fa-square-deskpro{--fa:"\e844"}.fa-circle-zulip{--fa:"\e851"}.fa-julia{--fa:"\e852"}.fa-zulip{--fa:"\e853"}.fa-unison{--fa:"\e854"}.fa-bgg,.fa-board-game-geek{--fa:"\e855"}.fa-ko-fi{--fa:"\e856"}.fa-kubernetes{--fa:"\e857"}.fa-postgresql{--fa:"\e858"}.fa-scaleway{--fa:"\e859"}.fa-venmo{--fa:"\e85a"}.fa-venmo-v{--fa:"\e85b"}.fa-unreal-engine{--fa:"\e85c"}.fa-globaleaks{--fa:"\e85d"}.fa-solana{--fa:"\e85e"}.fa-threema{--fa:"\e85f"}.fa-forgejo{--fa:"\e860"}.fa-claude{--fa:"\e861"}.fa-gitee{--fa:"\e863"}.fa-xmpp{--fa:"\e864"}.fa-fediverse{--fa:"\e865"}.fa-tailwind-css{--fa:"\e866"}.fa-arch-linux{--fa:"\e867"}.fa-svelte{--fa:"\e868"}.fa-hugging-face{--fa:"\e869"}.fa-leetcode{--fa:"\e86a"}.fa-openstreetmap{--fa:"\e86b"}.fa-ultralytics{--fa:"\e86d"}.fa-ultralytics-hub{--fa:"\e86e"}.fa-ultralytics-yolo{--fa:"\e86f"}.fa-obsidian{--fa:"\e879"}.fa-zoom{--fa:"\e87b"}.fa-vim{--fa:"\e88a"}.fa-symfonycasts{--fa:"\e8ab"}.fa-square-twitter,.fa-twitter-square{--fa:"\f081"}.fa-facebook-square,.fa-square-facebook{--fa:"\f082"}.fa-linkedin{--fa:"\f08c"}.fa-github-square,.fa-square-github{--fa:"\f092"}.fa-twitter{--fa:"\f099"}.fa-facebook{--fa:"\f09a"}.fa-github{--fa:"\f09b"}.fa-pinterest{--fa:"\f0d2"}.fa-pinterest-square,.fa-square-pinterest{--fa:"\f0d3"}.fa-google-plus-square,.fa-square-google-plus{--fa:"\f0d4"}.fa-google-plus-g{--fa:"\f0d5"}.fa-linkedin-in{--fa:"\f0e1"}.fa-github-alt{--fa:"\f113"}.fa-maxcdn{--fa:"\f136"}.fa-html5{--fa:"\f13b"}.fa-css3{--fa:"\f13c"}.fa-btc{--fa:"\f15a"}.fa-youtube{--fa:"\f167"}.fa-xing{--fa:"\f168"}.fa-square-xing,.fa-xing-square{--fa:"\f169"}.fa-dropbox{--fa:"\f16b"}.fa-stack-overflow{--fa:"\f16c"}.fa-instagram{--fa:"\f16d"}.fa-flickr{--fa:"\f16e"}.fa-adn{--fa:"\f170"}.fa-bitbucket{--fa:"\f171"}.fa-tumblr{--fa:"\f173"}.fa-square-tumblr,.fa-tumblr-square{--fa:"\f174"}.fa-apple{--fa:"\f179"}.fa-windows{--fa:"\f17a"}.fa-android{--fa:"\f17b"}.fa-linux{--fa:"\f17c"}.fa-dribbble{--fa:"\f17d"}.fa-skype{--fa:"\f17e"}.fa-foursquare{--fa:"\f180"}.fa-trello{--fa:"\f181"}.fa-gratipay{--fa:"\f184"}.fa-vk{--fa:"\f189"}.fa-weibo{--fa:"\f18a"}.fa-renren{--fa:"\f18b"}.fa-pagelines{--fa:"\f18c"}.fa-stack-exchange{--fa:"\f18d"}.fa-square-vimeo,.fa-vimeo-square{--fa:"\f194"}.fa-slack,.fa-slack-hash{--fa:"\f198"}.fa-wordpress{--fa:"\f19a"}.fa-openid{--fa:"\f19b"}.fa-yahoo{--fa:"\f19e"}.fa-google{--fa:"\f1a0"}.fa-reddit{--fa:"\f1a1"}.fa-reddit-square,.fa-square-reddit{--fa:"\f1a2"}.fa-stumbleupon-circle{--fa:"\f1a3"}.fa-stumbleupon{--fa:"\f1a4"}.fa-delicious{--fa:"\f1a5"}.fa-digg{--fa:"\f1a6"}.fa-pied-piper-pp{--fa:"\f1a7"}.fa-pied-piper-alt{--fa:"\f1a8"}.fa-drupal{--fa:"\f1a9"}.fa-joomla{--fa:"\f1aa"}.fa-behance{--fa:"\f1b4"}.fa-behance-square,.fa-square-behance{--fa:"\f1b5"}.fa-steam{--fa:"\f1b6"}.fa-square-steam,.fa-steam-square{--fa:"\f1b7"}.fa-spotify{--fa:"\f1bc"}.fa-deviantart{--fa:"\f1bd"}.fa-soundcloud{--fa:"\f1be"}.fa-vine{--fa:"\f1ca"}.fa-codepen{--fa:"\f1cb"}.fa-jsfiddle{--fa:"\f1cc"}.fa-rebel{--fa:"\f1d0"}.fa-empire{--fa:"\f1d1"}.fa-git-square,.fa-square-git{--fa:"\f1d2"}.fa-git{--fa:"\f1d3"}.fa-hacker-news{--fa:"\f1d4"}.fa-tencent-weibo{--fa:"\f1d5"}.fa-qq{--fa:"\f1d6"}.fa-weixin{--fa:"\f1d7"}.fa-slideshare{--fa:"\f1e7"}.fa-twitch{--fa:"\f1e8"}.fa-yelp{--fa:"\f1e9"}.fa-paypal{--fa:"\f1ed"}.fa-google-wallet{--fa:"\f1ee"}.fa-cc-visa{--fa:"\f1f0"}.fa-cc-mastercard{--fa:"\f1f1"}.fa-cc-discover{--fa:"\f1f2"}.fa-cc-amex{--fa:"\f1f3"}.fa-cc-paypal{--fa:"\f1f4"}.fa-cc-stripe{--fa:"\f1f5"}.fa-lastfm{--fa:"\f202"}.fa-lastfm-square,.fa-square-lastfm{--fa:"\f203"}.fa-ioxhost{--fa:"\f208"}.fa-angellist{--fa:"\f209"}.fa-buysellads{--fa:"\f20d"}.fa-connectdevelop{--fa:"\f20e"}.fa-dashcube{--fa:"\f210"}.fa-forumbee{--fa:"\f211"}.fa-leanpub{--fa:"\f212"}.fa-sellsy{--fa:"\f213"}.fa-shirtsinbulk{--fa:"\f214"}.fa-simplybuilt{--fa:"\f215"}.fa-skyatlas{--fa:"\f216"}.fa-pinterest-p{--fa:"\f231"}.fa-whatsapp{--fa:"\f232"}.fa-viacoin{--fa:"\f237"}.fa-medium,.fa-medium-m{--fa:"\f23a"}.fa-y-combinator{--fa:"\f23b"}.fa-optin-monster{--fa:"\f23c"}.fa-opencart{--fa:"\f23d"}.fa-expeditedssl{--fa:"\f23e"}.fa-cc-jcb{--fa:"\f24b"}.fa-cc-diners-club{--fa:"\f24c"}.fa-creative-commons{--fa:"\f25e"}.fa-gg{--fa:"\f260"}.fa-gg-circle{--fa:"\f261"}.fa-odnoklassniki{--fa:"\f263"}.fa-odnoklassniki-square,.fa-square-odnoklassniki{--fa:"\f264"}.fa-get-pocket{--fa:"\f265"}.fa-wikipedia-w{--fa:"\f266"}.fa-safari{--fa:"\f267"}.fa-chrome{--fa:"\f268"}.fa-firefox{--fa:"\f269"}.fa-opera{--fa:"\f26a"}.fa-internet-explorer{--fa:"\f26b"}.fa-contao{--fa:"\f26d"}.fa-500px{--fa:"\f26e"}.fa-amazon{--fa:"\f270"}.fa-houzz{--fa:"\f27c"}.fa-vimeo-v{--fa:"\f27d"}.fa-black-tie{--fa:"\f27e"}.fa-fonticons{--fa:"\f280"}.fa-reddit-alien{--fa:"\f281"}.fa-edge{--fa:"\f282"}.fa-codiepie{--fa:"\f284"}.fa-modx{--fa:"\f285"}.fa-fort-awesome{--fa:"\f286"}.fa-usb{--fa:"\f287"}.fa-product-hunt{--fa:"\f288"}.fa-mixcloud{--fa:"\f289"}.fa-scribd{--fa:"\f28a"}.fa-bluetooth{--fa:"\f293"}.fa-bluetooth-b{--fa:"\f294"}.fa-gitlab{--fa:"\f296"}.fa-wpbeginner{--fa:"\f297"}.fa-wpforms{--fa:"\f298"}.fa-envira{--fa:"\f299"}.fa-glide{--fa:"\f2a5"}.fa-glide-g{--fa:"\f2a6"}.fa-viadeo{--fa:"\f2a9"}.fa-square-viadeo,.fa-viadeo-square{--fa:"\f2aa"}.fa-snapchat,.fa-snapchat-ghost{--fa:"\f2ab"}.fa-snapchat-square,.fa-square-snapchat{--fa:"\f2ad"}.fa-pied-piper{--fa:"\f2ae"}.fa-first-order{--fa:"\f2b0"}.fa-yoast{--fa:"\f2b1"}.fa-themeisle{--fa:"\f2b2"}.fa-google-plus{--fa:"\f2b3"}.fa-font-awesome,.fa-font-awesome-flag,.fa-font-awesome-logo-full{--fa:"\f2b4"}.fa-linode{--fa:"\f2b8"}.fa-quora{--fa:"\f2c4"}.fa-free-code-camp{--fa:"\f2c5"}.fa-telegram,.fa-telegram-plane{--fa:"\f2c6"}.fa-bandcamp{--fa:"\f2d5"}.fa-grav{--fa:"\f2d6"}.fa-etsy{--fa:"\f2d7"}.fa-imdb{--fa:"\f2d8"}.fa-ravelry{--fa:"\f2d9"}.fa-sellcast{--fa:"\f2da"}.fa-superpowers{--fa:"\f2dd"}.fa-wpexplorer{--fa:"\f2de"}.fa-meetup{--fa:"\f2e0"}.fa-font-awesome-alt,.fa-square-font-awesome-stroke{--fa:"\f35c"}.fa-accessible-icon{--fa:"\f368"}.fa-accusoft{--fa:"\f369"}.fa-adversal{--fa:"\f36a"}.fa-affiliatetheme{--fa:"\f36b"}.fa-algolia{--fa:"\f36c"}.fa-amilia{--fa:"\f36d"}.fa-angrycreative{--fa:"\f36e"}.fa-app-store{--fa:"\f36f"}.fa-app-store-ios{--fa:"\f370"}.fa-apper{--fa:"\f371"}.fa-asymmetrik{--fa:"\f372"}.fa-audible{--fa:"\f373"}.fa-avianex{--fa:"\f374"}.fa-aws{--fa:"\f375"}.fa-bimobject{--fa:"\f378"}.fa-bitcoin{--fa:"\f379"}.fa-bity{--fa:"\f37a"}.fa-blackberry{--fa:"\f37b"}.fa-blogger{--fa:"\f37c"}.fa-blogger-b{--fa:"\f37d"}.fa-buromobelexperte{--fa:"\f37f"}.fa-centercode{--fa:"\f380"}.fa-cloudscale{--fa:"\f383"}.fa-cloudsmith{--fa:"\f384"}.fa-cloudversify{--fa:"\f385"}.fa-cpanel{--fa:"\f388"}.fa-css3-alt{--fa:"\f38b"}.fa-cuttlefish{--fa:"\f38c"}.fa-d-and-d{--fa:"\f38d"}.fa-deploydog{--fa:"\f38e"}.fa-deskpro{--fa:"\f38f"}.fa-digital-ocean{--fa:"\f391"}.fa-discord{--fa:"\f392"}.fa-discourse{--fa:"\f393"}.fa-dochub{--fa:"\f394"}.fa-docker{--fa:"\f395"}.fa-draft2digital{--fa:"\f396"}.fa-dribbble-square,.fa-square-dribbble{--fa:"\f397"}.fa-dyalog{--fa:"\f399"}.fa-earlybirds{--fa:"\f39a"}.fa-erlang{--fa:"\f39d"}.fa-facebook-f{--fa:"\f39e"}.fa-facebook-messenger{--fa:"\f39f"}.fa-firstdraft{--fa:"\f3a1"}.fa-fonticons-fi{--fa:"\f3a2"}.fa-fort-awesome-alt{--fa:"\f3a3"}.fa-freebsd{--fa:"\f3a4"}.fa-gitkraken{--fa:"\f3a6"}.fa-gofore{--fa:"\f3a7"}.fa-goodreads{--fa:"\f3a8"}.fa-goodreads-g{--fa:"\f3a9"}.fa-google-drive{--fa:"\f3aa"}.fa-google-play{--fa:"\f3ab"}.fa-gripfire{--fa:"\f3ac"}.fa-grunt{--fa:"\f3ad"}.fa-gulp{--fa:"\f3ae"}.fa-hacker-news-square,.fa-square-hacker-news{--fa:"\f3af"}.fa-hire-a-helper{--fa:"\f3b0"}.fa-hotjar{--fa:"\f3b1"}.fa-hubspot{--fa:"\f3b2"}.fa-itunes{--fa:"\f3b4"}.fa-itunes-note{--fa:"\f3b5"}.fa-jenkins{--fa:"\f3b6"}.fa-joget{--fa:"\f3b7"}.fa-js{--fa:"\f3b8"}.fa-js-square,.fa-square-js{--fa:"\f3b9"}.fa-keycdn{--fa:"\f3ba"}.fa-kickstarter,.fa-square-kickstarter{--fa:"\f3bb"}.fa-kickstarter-k{--fa:"\f3bc"}.fa-laravel{--fa:"\f3bd"}.fa-line{--fa:"\f3c0"}.fa-lyft{--fa:"\f3c3"}.fa-magento{--fa:"\f3c4"}.fa-medapps{--fa:"\f3c6"}.fa-medrt{--fa:"\f3c8"}.fa-microsoft{--fa:"\f3ca"}.fa-mix{--fa:"\f3cb"}.fa-mizuni{--fa:"\f3cc"}.fa-monero{--fa:"\f3d0"}.fa-napster{--fa:"\f3d2"}.fa-node-js{--fa:"\f3d3"}.fa-npm{--fa:"\f3d4"}.fa-ns8{--fa:"\f3d5"}.fa-nutritionix{--fa:"\f3d6"}.fa-page4{--fa:"\f3d7"}.fa-palfed{--fa:"\f3d8"}.fa-patreon{--fa:"\f3d9"}.fa-periscope{--fa:"\f3da"}.fa-phabricator{--fa:"\f3db"}.fa-phoenix-framework{--fa:"\f3dc"}.fa-playstation{--fa:"\f3df"}.fa-pushed{--fa:"\f3e1"}.fa-python{--fa:"\f3e2"}.fa-red-river{--fa:"\f3e3"}.fa-rendact,.fa-wpressr{--fa:"\f3e4"}.fa-replyd{--fa:"\f3e6"}.fa-resolving{--fa:"\f3e7"}.fa-rocketchat{--fa:"\f3e8"}.fa-rockrms{--fa:"\f3e9"}.fa-schlix{--fa:"\f3ea"}.fa-searchengin{--fa:"\f3eb"}.fa-servicestack{--fa:"\f3ec"}.fa-sistrix{--fa:"\f3ee"}.fa-speakap{--fa:"\f3f3"}.fa-staylinked{--fa:"\f3f5"}.fa-steam-symbol{--fa:"\f3f6"}.fa-sticker-mule{--fa:"\f3f7"}.fa-studiovinari{--fa:"\f3f8"}.fa-supple{--fa:"\f3f9"}.fa-uber{--fa:"\f402"}.fa-uikit{--fa:"\f403"}.fa-uniregistry{--fa:"\f404"}.fa-untappd{--fa:"\f405"}.fa-ussunnah{--fa:"\f407"}.fa-vaadin{--fa:"\f408"}.fa-viber{--fa:"\f409"}.fa-vimeo{--fa:"\f40a"}.fa-vnv{--fa:"\f40b"}.fa-square-whatsapp,.fa-whatsapp-square{--fa:"\f40c"}.fa-whmcs{--fa:"\f40d"}.fa-wordpress-simple{--fa:"\f411"}.fa-xbox{--fa:"\f412"}.fa-yandex{--fa:"\f413"}.fa-yandex-international{--fa:"\f414"}.fa-apple-pay{--fa:"\f415"}.fa-cc-apple-pay{--fa:"\f416"}.fa-fly{--fa:"\f417"}.fa-node{--fa:"\f419"}.fa-osi{--fa:"\f41a"}.fa-react{--fa:"\f41b"}.fa-autoprefixer{--fa:"\f41c"}.fa-less{--fa:"\f41d"}.fa-sass{--fa:"\f41e"}.fa-vuejs{--fa:"\f41f"}.fa-angular{--fa:"\f420"}.fa-aviato{--fa:"\f421"}.fa-ember{--fa:"\f423"}.fa-gitter{--fa:"\f426"}.fa-hooli{--fa:"\f427"}.fa-strava{--fa:"\f428"}.fa-stripe{--fa:"\f429"}.fa-stripe-s{--fa:"\f42a"}.fa-typo3{--fa:"\f42b"}.fa-amazon-pay{--fa:"\f42c"}.fa-cc-amazon-pay{--fa:"\f42d"}.fa-ethereum{--fa:"\f42e"}.fa-korvue{--fa:"\f42f"}.fa-elementor{--fa:"\f430"}.fa-square-youtube,.fa-youtube-square{--fa:"\f431"}.fa-flipboard{--fa:"\f44d"}.fa-hips{--fa:"\f452"}.fa-php{--fa:"\f457"}.fa-quinscape{--fa:"\f459"}.fa-readme{--fa:"\f4d5"}.fa-java{--fa:"\f4e4"}.fa-pied-piper-hat{--fa:"\f4e5"}.fa-creative-commons-by{--fa:"\f4e7"}.fa-creative-commons-nc{--fa:"\f4e8"}.fa-creative-commons-nc-eu{--fa:"\f4e9"}.fa-creative-commons-nc-jp{--fa:"\f4ea"}.fa-creative-commons-nd{--fa:"\f4eb"}.fa-creative-commons-pd{--fa:"\f4ec"}.fa-creative-commons-pd-alt{--fa:"\f4ed"}.fa-creative-commons-remix{--fa:"\f4ee"}.fa-creative-commons-sa{--fa:"\f4ef"}.fa-creative-commons-sampling{--fa:"\f4f0"}.fa-creative-commons-sampling-plus{--fa:"\f4f1"}.fa-creative-commons-share{--fa:"\f4f2"}.fa-creative-commons-zero{--fa:"\f4f3"}.fa-ebay{--fa:"\f4f4"}.fa-keybase{--fa:"\f4f5"}.fa-mastodon{--fa:"\f4f6"}.fa-r-project{--fa:"\f4f7"}.fa-researchgate{--fa:"\f4f8"}.fa-teamspeak{--fa:"\f4f9"}.fa-first-order-alt{--fa:"\f50a"}.fa-fulcrum{--fa:"\f50b"}.fa-galactic-republic{--fa:"\f50c"}.fa-galactic-senate{--fa:"\f50d"}.fa-jedi-order{--fa:"\f50e"}.fa-mandalorian{--fa:"\f50f"}.fa-old-republic{--fa:"\f510"}.fa-phoenix-squadron{--fa:"\f511"}.fa-sith{--fa:"\f512"}.fa-trade-federation{--fa:"\f513"}.fa-wolf-pack-battalion{--fa:"\f514"}.fa-hornbill{--fa:"\f592"}.fa-mailchimp{--fa:"\f59e"}.fa-megaport{--fa:"\f5a3"}.fa-nimblr{--fa:"\f5a8"}.fa-rev{--fa:"\f5b2"}.fa-shopware{--fa:"\f5b5"}.fa-squarespace{--fa:"\f5be"}.fa-themeco{--fa:"\f5c6"}.fa-weebly{--fa:"\f5cc"}.fa-wix{--fa:"\f5cf"}.fa-ello{--fa:"\f5f1"}.fa-hackerrank{--fa:"\f5f7"}.fa-kaggle{--fa:"\f5fa"}.fa-markdown{--fa:"\f60f"}.fa-neos{--fa:"\f612"}.fa-zhihu{--fa:"\f63f"}.fa-alipay{--fa:"\f642"}.fa-the-red-yeti{--fa:"\f69d"}.fa-critical-role{--fa:"\f6c9"}.fa-d-and-d-beyond{--fa:"\f6ca"}.fa-dev{--fa:"\f6cc"}.fa-fantasy-flight-games{--fa:"\f6dc"}.fa-wizards-of-the-coast{--fa:"\f730"}.fa-think-peaks{--fa:"\f731"}.fa-reacteurope{--fa:"\f75d"}.fa-artstation{--fa:"\f77a"}.fa-atlassian{--fa:"\f77b"}.fa-canadian-maple-leaf{--fa:"\f785"}.fa-centos{--fa:"\f789"}.fa-confluence{--fa:"\f78d"}.fa-dhl{--fa:"\f790"}.fa-diaspora{--fa:"\f791"}.fa-fedex{--fa:"\f797"}.fa-fedora{--fa:"\f798"}.fa-figma{--fa:"\f799"}.fa-intercom{--fa:"\f7af"}.fa-invision{--fa:"\f7b0"}.fa-jira{--fa:"\f7b1"}.fa-mendeley{--fa:"\f7b3"}.fa-raspberry-pi{--fa:"\f7bb"}.fa-redhat{--fa:"\f7bc"}.fa-sketch{--fa:"\f7c6"}.fa-sourcetree{--fa:"\f7d3"}.fa-suse{--fa:"\f7d6"}.fa-ubuntu{--fa:"\f7df"}.fa-ups{--fa:"\f7e0"}.fa-usps{--fa:"\f7e1"}.fa-yarn{--fa:"\f7e3"}.fa-airbnb{--fa:"\f834"}.fa-battle-net{--fa:"\f835"}.fa-bootstrap{--fa:"\f836"}.fa-buffer{--fa:"\f837"}.fa-chromecast{--fa:"\f838"}.fa-evernote{--fa:"\f839"}.fa-itch-io{--fa:"\f83a"}.fa-salesforce{--fa:"\f83b"}.fa-speaker-deck{--fa:"\f83c"}.fa-symfony{--fa:"\f83d"}.fa-waze{--fa:"\f83f"}.fa-yammer{--fa:"\f840"}.fa-git-alt{--fa:"\f841"}.fa-stackpath{--fa:"\f842"}.fa-cotton-bureau{--fa:"\f89e"}.fa-buy-n-large{--fa:"\f8a6"}.fa-mdb{--fa:"\f8ca"}.fa-orcid{--fa:"\f8d2"}.fa-swift{--fa:"\f8e1"}.fa-umbraco{--fa:"\f8e8"}:host,:root{--fa-font-regular:normal 400 1em/1 var(--fa-family-classic)}@font-face{font-family:"Font Awesome 7 Free";font-style:normal;font-weight:400;font-display:block;src:url(../webfonts/fa-regular-400.woff2)}.far{--fa-family:var(--fa-family-classic)}.fa-regular,.far{--fa-style:400}:host,:root{--fa-family-classic:"Font Awesome 7 Free";--fa-font-solid:normal 900 1em/1 var(--fa-family-classic);--fa-style-family-classic:var(--fa-family-classic)}@font-face{font-family:"Font Awesome 7 Free";font-style:normal;font-weight:900;font-display:block;src:url(../webfonts/fa-solid-900.woff2)}.fas{--fa-style:900}.fa-classic,.fas{--fa-family:var(--fa-family-classic)}.fa-solid{--fa-style:900}@font-face{font-family:"Font Awesome 5 Brands";font-display:block;font-weight:400;src:url(../webfonts/fa-brands-400.woff2) format("woff2")}@font-face{font-family:"Font Awesome 5 Free";font-display:block;font-weight:900;src:url(../webfonts/fa-solid-900.woff2) format("woff2")}@font-face{font-family:"Font Awesome 5 Free";font-display:block;font-weight:400;src:url(../webfonts/fa-regular-400.woff2) format("woff2")}@font-face{font-family:"FontAwesome";font-display:block;src:url(../webfonts/fa-solid-900.woff2) format("woff2")}@font-face{font-family:"FontAwesome";font-display:block;src:url(../webfonts/fa-brands-400.woff2) format("woff2")}@font-face{font-family:"FontAwesome";font-display:block;src:url(../webfonts/fa-regular-400.woff2) format("woff2");unicode-range:u+f003,u+f006,u+f014,u+f016-f017,u+f01a-f01b,u+f01d,u+f022,u+f03e,u+f044,u+f046,u+f05c-f05d,u+f06e,u+f070,u+f087-f088,u+f08a,u+f094,u+f096-f097,u+f09d,u+f0a0,u+f0a2,u+f0a4-f0a7,u+f0c5,u+f0c7,u+f0e5-f0e6,u+f0eb,u+f0f6-f0f8,u+f10c,u+f114-f115,u+f118-f11a,u+f11c-f11d,u+f133,u+f147,u+f14e,u+f150-f152,u+f185-f186,u+f18e,u+f190-f192,u+f196,u+f1c1-f1c9,u+f1d9,u+f1db,u+f1e3,u+f1ea,u+f1f7,u+f1f9,u+f20a,u+f247-f248,u+f24a,u+f24d,u+f255-f25b,u+f25d,u+f271-f274,u+f278,u+f27b,u+f28c,u+f28e,u+f29c,u+f2b5,u+f2b7,u+f2ba,u+f2bc,u+f2be,u+f2c0-f2c1,u+f2c3,u+f2d0,u+f2d2,u+f2d4,u+f2dc}@font-face{font-family:"FontAwesome";font-display:block;src:url(../webfonts/fa-v4compatibility.woff2) format("woff2");unicode-range:u+f041,u+f047,u+f065-f066,u+f07d-f07e,u+f080,u+f08b,u+f08e,u+f090,u+f09a,u+f0ac,u+f0ae,u+f0b2,u+f0d0,u+f0d6,u+f0e4,u+f0ec,u+f10a-f10b,u+f123,u+f13e,u+f148-f149,u+f14c,u+f156,u+f15e,u+f160-f161,u+f163,u+f175-f178,u+f195,u+f1f8,u+f219,u+f27a}[m
\ No newline at end of file[m
[32m+[m[32m.fa-0 {[m
[32m+[m[32m  --fa: "\30 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-1 {[m
[32m+[m[32m  --fa: "\31 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-2 {[m
[32m+[m[32m  --fa: "\32 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-3 {[m
[32m+[m[32m  --fa: "\33 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-4 {[m
[32m+[m[32m  --fa: "\34 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-5 {[m
[32m+[m[32m  --fa: "\35 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-6 {[m
[32m+[m[32m  --fa: "\36 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-7 {[m
[32m+[m[32m  --fa: "\37 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-8 {[m
[32m+[m[32m  --fa: "\38 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-9 {[m
[32m+[m[32m  --fa: "\39 ";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-exclamation {[m
[32m+[m[32m  --fa: "\!";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hashtag {[m
[32m+[m[32m  --fa: "\#";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dollar,[m
[32m+[m[32m.fa-dollar-sign,[m
[32m+[m[32m.fa-usd {[m
[32m+[m[32m  --fa: "\$";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-percent,[m
[32m+[m[32m.fa-percentage {[m
[32m+[m[32m  --fa: "\%";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-asterisk {[m
[32m+[m[32m  --fa: "\*";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-add,[m
[32m+[m[32m.fa-plus {[m
[32m+[m[32m  --fa: "\+";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-less-than {[m
[32m+[m[32m  --fa: "\<";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-equals {[m
[32m+[m[32m  --fa: "\=";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-greater-than {[m
[32m+[m[32m  --fa: "\>";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-question {[m
[32m+[m[32m  --fa: "\?";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-at {[m
[32m+[m[32m  --fa: "\@";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-a {[m
[32m+[m[32m  --fa: "A";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-b {[m
[32m+[m[32m  --fa: "B";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-c {[m
[32m+[m[32m  --fa: "C";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-d {[m
[32m+[m[32m  --fa: "D";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-e {[m
[32m+[m[32m  --fa: "E";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-f {[m
[32m+[m[32m  --fa: "F";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-g {[m
[32m+[m[32m  --fa: "G";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-h {[m
[32m+[m[32m  --fa: "H";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-i {[m
[32m+[m[32m  --fa: "I";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-j {[m
[32m+[m[32m  --fa: "J";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-k {[m
[32m+[m[32m  --fa: "K";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-l {[m
[32m+[m[32m  --fa: "L";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-m {[m
[32m+[m[32m  --fa: "M";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-n {[m
[32m+[m[32m  --fa: "N";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-o {[m
[32m+[m[32m  --fa: "O";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-p {[m
[32m+[m[32m  --fa: "P";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-q {[m
[32m+[m[32m  --fa: "Q";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-r {[m
[32m+[m[32m  --fa: "R";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-s {[m
[32m+[m[32m  --fa: "S";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-t {[m
[32m+[m[32m  --fa: "T";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-u {[m
[32m+[m[32m  --fa: "U";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-v {[m
[32m+[m[32m  --fa: "V";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-w {[m
[32m+[m[32m  --fa: "W";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-x {[m
[32m+[m[32m  --fa: "X";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-y {[m
[32m+[m[32m  --fa: "Y";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-z {[m
[32m+[m[32m  --fa: "Z";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-faucet {[m
[32m+[m[32m  --fa: "\e005";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-faucet-drip {[m
[32m+[m[32m  --fa: "\e006";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-chimney-window {[m
[32m+[m[32m  --fa: "\e00d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-signal {[m
[32m+[m[32m  --fa: "\e012";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-arrow-down,[m
[32m+[m[32m.fa-temperature-down {[m
[32m+[m[32m  --fa: "\e03f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-arrow-up,[m
[32m+[m[32m.fa-temperature-up {[m
[32m+[m[32m  --fa: "\e040";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trailer {[m
[32m+[m[32m  --fa: "\e041";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bacteria {[m
[32m+[m[32m  --fa: "\e059";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bacterium {[m
[32m+[m[32m  --fa: "\e05a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-box-tissue {[m
[32m+[m[32m  --fa: "\e05b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-holding-medical {[m
[32m+[m[32m  --fa: "\e05c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-sparkles {[m
[32m+[m[32m  --fa: "\e05d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-bubbles,[m
[32m+[m[32m.fa-hands-wash {[m
[32m+[m[32m  --fa: "\e05e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-handshake-alt-slash,[m
[32m+[m[32m.fa-handshake-simple-slash,[m
[32m+[m[32m.fa-handshake-slash {[m
[32m+[m[32m  --fa: "\e060";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-head-side-cough {[m
[32m+[m[32m  --fa: "\e061";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-head-side-cough-slash {[m
[32m+[m[32m  --fa: "\e062";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-head-side-mask {[m
[32m+[m[32m  --fa: "\e063";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-head-side-virus {[m
[32m+[m[32m  --fa: "\e064";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-chimney-user {[m
[32m+[m[32m  --fa: "\e065";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-laptop,[m
[32m+[m[32m.fa-laptop-house {[m
[32m+[m[32m  --fa: "\e066";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lungs-virus {[m
[32m+[m[32m  --fa: "\e067";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-arrows,[m
[32m+[m[32m.fa-people-arrows-left-right {[m
[32m+[m[32m  --fa: "\e068";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-slash {[m
[32m+[m[32m  --fa: "\e069";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pump-medical {[m
[32m+[m[32m  --fa: "\e06a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pump-soap {[m
[32m+[m[32m  --fa: "\e06b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shield-virus {[m
[32m+[m[32m  --fa: "\e06c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sink {[m
[32m+[m[32m  --fa: "\e06d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-soap {[m
[32m+[m[32m  --fa: "\e06e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stopwatch-20 {[m
[32m+[m[32m  --fa: "\e06f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shop-slash,[m
[32m+[m[32m.fa-store-alt-slash {[m
[32m+[m[32m  --fa: "\e070";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-store-slash {[m
[32m+[m[32m  --fa: "\e071";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toilet-paper-slash {[m
[32m+[m[32m  --fa: "\e072";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-slash {[m
[32m+[m[32m  --fa: "\e073";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-virus {[m
[32m+[m[32m  --fa: "\e074";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-virus-slash {[m
[32m+[m[32m  --fa: "\e075";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-viruses {[m
[32m+[m[32m  --fa: "\e076";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vest {[m
[32m+[m[32m  --fa: "\e085";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vest-patches {[m
[32m+[m[32m  --fa: "\e086";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-trend-down {[m
[32m+[m[32m  --fa: "\e097";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-trend-up {[m
[32m+[m[32m  --fa: "\e098";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-from-bracket {[m
[32m+[m[32m  --fa: "\e09a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-austral-sign {[m
[32m+[m[32m  --fa: "\e0a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-baht-sign {[m
[32m+[m[32m  --fa: "\e0ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bitcoin-sign {[m
[32m+[m[32m  --fa: "\e0b4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bolt-lightning {[m
[32m+[m[32m  --fa: "\e0b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-bookmark {[m
[32m+[m[32m  --fa: "\e0bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-camera-rotate {[m
[32m+[m[32m  --fa: "\e0d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cedi-sign {[m
[32m+[m[32m  --fa: "\e0df";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chart-column {[m
[32m+[m[32m  --fa: "\e0e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chart-gantt {[m
[32m+[m[32m  --fa: "\e0e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clapperboard {[m
[32m+[m[32m  --fa: "\e131";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-closed-captioning-slash {[m
[32m+[m[32m  --fa: "\e135";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clover {[m
[32m+[m[32m  --fa: "\e139";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code-compare {[m
[32m+[m[32m  --fa: "\e13a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code-fork {[m
[32m+[m[32m  --fa: "\e13b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code-pull-request {[m
[32m+[m[32m  --fa: "\e13c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-colon-sign {[m
[32m+[m[32m  --fa: "\e140";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cruzeiro-sign {[m
[32m+[m[32m  --fa: "\e152";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-display {[m
[32m+[m[32m  --fa: "\e163";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dong-sign {[m
[32m+[m[32m  --fa: "\e169";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-elevator {[m
[32m+[m[32m  --fa: "\e16d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-filter-circle-xmark {[m
[32m+[m[32m  --fa: "\e17b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-florin-sign {[m
[32m+[m[32m  --fa: "\e184";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-folder-closed {[m
[32m+[m[32m  --fa: "\e185";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-franc-sign {[m
[32m+[m[32m  --fa: "\e18f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-guarani-sign {[m
[32m+[m[32m  --fa: "\e19a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gun {[m
[32m+[m[32m  --fa: "\e19b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-clapping {[m
[32m+[m[32m  --fa: "\e1a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-home-user,[m
[32m+[m[32m.fa-house-user {[m
[32m+[m[32m  --fa: "\e1b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-indian-rupee,[m
[32m+[m[32m.fa-indian-rupee-sign,[m
[32m+[m[32m.fa-inr {[m
[32m+[m[32m  --fa: "\e1bc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kip-sign {[m
[32m+[m[32m  --fa: "\e1c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lari-sign {[m
[32m+[m[32m  --fa: "\e1c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-litecoin-sign {[m
[32m+[m[32m  --fa: "\e1d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-manat-sign {[m
[32m+[m[32m  --fa: "\e1d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mask-face {[m
[32m+[m[32m  --fa: "\e1d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mill-sign {[m
[32m+[m[32m  --fa: "\e1ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bills {[m
[32m+[m[32m  --fa: "\e1f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-naira-sign {[m
[32m+[m[32m  --fa: "\e1f6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-notdef {[m
[32m+[m[32m  --fa: "\e1fe";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-panorama {[m
[32m+[m[32m  --fa: "\e209";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-peseta-sign {[m
[32m+[m[32m  --fa: "\e221";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-peso-sign {[m
[32m+[m[32m  --fa: "\e222";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-up {[m
[32m+[m[32m  --fa: "\e22d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rupiah-sign {[m
[32m+[m[32m  --fa: "\e23d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stairs {[m
[32m+[m[32m  --fa: "\e289";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-timeline {[m
[32m+[m[32m  --fa: "\e29c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-front {[m
[32m+[m[32m  --fa: "\e2b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-try,[m
[32m+[m[32m.fa-turkish-lira,[m
[32m+[m[32m.fa-turkish-lira-sign {[m
[32m+[m[32m  --fa: "\e2bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vault {[m
[32m+[m[32m  --fa: "\e2c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magic-wand-sparkles,[m
[32m+[m[32m.fa-wand-magic-sparkles {[m
[32m+[m[32m  --fa: "\e2ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wheat-alt,[m
[32m+[m[32m.fa-wheat-awn {[m
[32m+[m[32m  --fa: "\e2cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wheelchair-alt,[m
[32m+[m[32m.fa-wheelchair-move {[m
[32m+[m[32m  --fa: "\e2ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bangladeshi-taka-sign {[m
[32m+[m[32m  --fa: "\e2e6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bowl-rice {[m
[32m+[m[32m  --fa: "\e2eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-pregnant {[m
[32m+[m[32m  --fa: "\e31e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-home-lg,[m
[32m+[m[32m.fa-house-chimney {[m
[32m+[m[32m  --fa: "\e3af";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-crack {[m
[32m+[m[32m  --fa: "\e3b1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-medical {[m
[32m+[m[32m  --fa: "\e3b2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cent-sign {[m
[32m+[m[32m  --fa: "\e3f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plus-minus {[m
[32m+[m[32m  --fa: "\e43c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sailboat {[m
[32m+[m[32m  --fa: "\e445";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-section {[m
[32m+[m[32m  --fa: "\e447";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shrimp {[m
[32m+[m[32m  --fa: "\e448";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-brazilian-real-sign {[m
[32m+[m[32m  --fa: "\e46c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chart-simple {[m
[32m+[m[32m  --fa: "\e473";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diagram-next {[m
[32m+[m[32m  --fa: "\e476";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diagram-predecessor {[m
[32m+[m[32m  --fa: "\e477";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diagram-successor {[m
[32m+[m[32m  --fa: "\e47a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-earth-oceania,[m
[32m+[m[32m.fa-globe-oceania {[m
[32m+[m[32m  --fa: "\e47b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bug-slash {[m
[32m+[m[32m  --fa: "\e490";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-circle-plus {[m
[32m+[m[32m  --fa: "\e494";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shop-lock {[m
[32m+[m[32m  --fa: "\e4a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-virus-covid {[m
[32m+[m[32m  --fa: "\e4a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-virus-covid-slash {[m
[32m+[m[32m  --fa: "\e4a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-anchor-circle-check {[m
[32m+[m[32m  --fa: "\e4aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-anchor-circle-exclamation {[m
[32m+[m[32m  --fa: "\e4ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-anchor-circle-xmark {[m
[32m+[m[32m  --fa: "\e4ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-anchor-lock {[m
[32m+[m[32m  --fa: "\e4ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-up-across-line {[m
[32m+[m[32m  --fa: "\e4af";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-up-lock {[m
[32m+[m[32m  --fa: "\e4b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-to-city {[m
[32m+[m[32m  --fa: "\e4b3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-from-ground-water {[m
[32m+[m[32m  --fa: "\e4b5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-from-water-pump {[m
[32m+[m[32m  --fa: "\e4b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-right-dots {[m
[32m+[m[32m  --fa: "\e4b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-down-to-line {[m
[32m+[m[32m  --fa: "\e4b8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-down-to-people {[m
[32m+[m[32m  --fa: "\e4b9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-left-right-to-line {[m
[32m+[m[32m  --fa: "\e4ba";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-spin {[m
[32m+[m[32m  --fa: "\e4bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-split-up-and-left {[m
[32m+[m[32m  --fa: "\e4bc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-to-circle {[m
[32m+[m[32m  --fa: "\e4bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-to-dot {[m
[32m+[m[32m  --fa: "\e4be";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-to-eye {[m
[32m+[m[32m  --fa: "\e4bf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-turn-right {[m
[32m+[m[32m  --fa: "\e4c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-turn-to-dots {[m
[32m+[m[32m  --fa: "\e4c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-up-to-line {[m
[32m+[m[32m  --fa: "\e4c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bore-hole {[m
[32m+[m[32m  --fa: "\e4c3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bottle-droplet {[m
[32m+[m[32m  --fa: "\e4c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bottle-water {[m
[32m+[m[32m  --fa: "\e4c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bowl-food {[m
[32m+[m[32m  --fa: "\e4c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-boxes-packing {[m
[32m+[m[32m  --fa: "\e4c7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bridge {[m
[32m+[m[32m  --fa: "\e4c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bridge-circle-check {[m
[32m+[m[32m  --fa: "\e4c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bridge-circle-exclamation {[m
[32m+[m[32m  --fa: "\e4ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bridge-circle-xmark {[m
[32m+[m[32m  --fa: "\e4cb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bridge-lock {[m
[32m+[m[32m  --fa: "\e4cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bridge-water {[m
[32m+[m[32m  --fa: "\e4ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bucket {[m
[32m+[m[32m  --fa: "\e4cf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bugs {[m
[32m+[m[32m  --fa: "\e4d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-circle-arrow-right {[m
[32m+[m[32m  --fa: "\e4d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-circle-check {[m
[32m+[m[32m  --fa: "\e4d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-circle-exclamation {[m
[32m+[m[32m  --fa: "\e4d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-circle-xmark {[m
[32m+[m[32m  --fa: "\e4d4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-flag {[m
[32m+[m[32m  --fa: "\e4d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-lock {[m
[32m+[m[32m  --fa: "\e4d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-ngo {[m
[32m+[m[32m  --fa: "\e4d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-shield {[m
[32m+[m[32m  --fa: "\e4d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-un {[m
[32m+[m[32m  --fa: "\e4d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-user {[m
[32m+[m[32m  --fa: "\e4da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building-wheat {[m
[32m+[m[32m  --fa: "\e4db";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-burst {[m
[32m+[m[32m  --fa: "\e4dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-car-on {[m
[32m+[m[32m  --fa: "\e4dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-car-tunnel {[m
[32m+[m[32m  --fa: "\e4de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-child-combatant,[m
[32m+[m[32m.fa-child-rifle {[m
[32m+[m[32m  --fa: "\e4e0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-children {[m
[32m+[m[32m  --fa: "\e4e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-nodes {[m
[32m+[m[32m  --fa: "\e4e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clipboard-question {[m
[32m+[m[32m  --fa: "\e4e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-showers-water {[m
[32m+[m[32m  --fa: "\e4e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-computer {[m
[32m+[m[32m  --fa: "\e4e5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cubes-stacked {[m
[32m+[m[32m  --fa: "\e4e6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envelope-circle-check {[m
[32m+[m[32m  --fa: "\e4e8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-explosion {[m
[32m+[m[32m  --fa: "\e4e9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ferry {[m
[32m+[m[32m  --fa: "\e4ea";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-circle-exclamation {[m
[32m+[m[32m  --fa: "\e4eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-circle-minus {[m
[32m+[m[32m  --fa: "\e4ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-circle-question {[m
[32m+[m[32m  --fa: "\e4ef";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-shield {[m
[32m+[m[32m  --fa: "\e4f0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fire-burner {[m
[32m+[m[32m  --fa: "\e4f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fish-fins {[m
[32m+[m[32m  --fa: "\e4f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flask-vial {[m
[32m+[m[32m  --fa: "\e4f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glass-water {[m
[32m+[m[32m  --fa: "\e4f4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glass-water-droplet {[m
[32m+[m[32m  --fa: "\e4f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-group-arrows-rotate {[m
[32m+[m[32m  --fa: "\e4f6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-holding-hand {[m
[32m+[m[32m  --fa: "\e4f7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-handcuffs {[m
[32m+[m[32m  --fa: "\e4f8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-bound {[m
[32m+[m[32m  --fa: "\e4f9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-holding-child {[m
[32m+[m[32m  --fa: "\e4fa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-holding-circle {[m
[32m+[m[32m  --fa: "\e4fb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-circle-bolt {[m
[32m+[m[32m  --fa: "\e4fc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-circle-check {[m
[32m+[m[32m  --fa: "\e4fd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-circle-exclamation {[m
[32m+[m[32m  --fa: "\e4fe";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-circle-minus {[m
[32m+[m[32m  --fa: "\e4ff";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-circle-plus {[m
[32m+[m[32m  --fa: "\e500";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-circle-xmark {[m
[32m+[m[32m  --fa: "\e501";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-helicopter-symbol {[m
[32m+[m[32m  --fa: "\e502";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-helmet-un {[m
[32m+[m[32m  --fa: "\e503";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hill-avalanche {[m
[32m+[m[32m  --fa: "\e507";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hill-rockslide {[m
[32m+[m[32m  --fa: "\e508";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-circle-check {[m
[32m+[m[32m  --fa: "\e509";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-circle-exclamation {[m
[32m+[m[32m  --fa: "\e50a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-circle-xmark {[m
[32m+[m[32m  --fa: "\e50b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-fire {[m
[32m+[m[32m  --fa: "\e50c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-flag {[m
[32m+[m[32m  --fa: "\e50d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-flood-water {[m
[32m+[m[32m  --fa: "\e50e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-flood-water-circle-arrow-right {[m
[32m+[m[32m  --fa: "\e50f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-lock {[m
[32m+[m[32m  --fa: "\e510";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-medical-circle-check {[m
[32m+[m[32m  --fa: "\e511";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-medical-circle-exclamation {[m
[32m+[m[32m  --fa: "\e512";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-medical-circle-xmark {[m
[32m+[m[32m  --fa: "\e513";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-medical-flag {[m
[32m+[m[32m  --fa: "\e514";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-tsunami {[m
[32m+[m[32m  --fa: "\e515";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jar {[m
[32m+[m[32m  --fa: "\e516";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jar-wheat {[m
[32m+[m[32m  --fa: "\e517";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jet-fighter-up {[m
[32m+[m[32m  --fa: "\e518";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jug-detergent {[m
[32m+[m[32m  --fa: "\e519";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kitchen-set {[m
[32m+[m[32m  --fa: "\e51a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-land-mine-on {[m
[32m+[m[32m  --fa: "\e51b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-landmark-flag {[m
[32m+[m[32m  --fa: "\e51c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-laptop-file {[m
[32m+[m[32m  --fa: "\e51d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lines-leaning {[m
[32m+[m[32m  --fa: "\e51e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-location-pin-lock {[m
[32m+[m[32m  --fa: "\e51f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-locust {[m
[32m+[m[32m  --fa: "\e520";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass-arrow-right {[m
[32m+[m[32m  --fa: "\e521";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass-chart {[m
[32m+[m[32m  --fa: "\e522";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars-and-venus-burst {[m
[32m+[m[32m  --fa: "\e523";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mask-ventilator {[m
[32m+[m[32m  --fa: "\e524";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mattress-pillow {[m
[32m+[m[32m  --fa: "\e525";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mobile-retro {[m
[32m+[m[32m  --fa: "\e527";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill-transfer {[m
[32m+[m[32m  --fa: "\e528";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill-trend-up {[m
[32m+[m[32m  --fa: "\e529";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill-wheat {[m
[32m+[m[32m  --fa: "\e52a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mosquito {[m
[32m+[m[32m  --fa: "\e52b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mosquito-net {[m
[32m+[m[32m  --fa: "\e52c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mound {[m
[32m+[m[32m  --fa: "\e52d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mountain-city {[m
[32m+[m[32m  --fa: "\e52e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mountain-sun {[m
[32m+[m[32m  --fa: "\e52f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-oil-well {[m
[32m+[m[32m  --fa: "\e532";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-group {[m
[32m+[m[32m  --fa: "\e533";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-line {[m
[32m+[m[32m  --fa: "\e534";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-pulling {[m
[32m+[m[32m  --fa: "\e535";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-robbery {[m
[32m+[m[32m  --fa: "\e536";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-roof {[m
[32m+[m[32m  --fa: "\e537";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-arrow-down-to-line {[m
[32m+[m[32m  --fa: "\e538";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-arrow-up-from-line {[m
[32m+[m[32m  --fa: "\e539";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-breastfeeding {[m
[32m+[m[32m  --fa: "\e53a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-burst {[m
[32m+[m[32m  --fa: "\e53b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-cane {[m
[32m+[m[32m  --fa: "\e53c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-chalkboard {[m
[32m+[m[32m  --fa: "\e53d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-circle-check {[m
[32m+[m[32m  --fa: "\e53e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-circle-exclamation {[m
[32m+[m[32m  --fa: "\e53f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-circle-minus {[m
[32m+[m[32m  --fa: "\e540";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-circle-plus {[m
[32m+[m[32m  --fa: "\e541";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-circle-question {[m
[32m+[m[32m  --fa: "\e542";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-circle-xmark {[m
[32m+[m[32m  --fa: "\e543";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-dress-burst {[m
[32m+[m[32m  --fa: "\e544";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-drowning {[m
[32m+[m[32m  --fa: "\e545";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-falling {[m
[32m+[m[32m  --fa: "\e546";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-falling-burst {[m
[32m+[m[32m  --fa: "\e547";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-half-dress {[m
[32m+[m[32m  --fa: "\e548";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-harassing {[m
[32m+[m[32m  --fa: "\e549";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-military-pointing {[m
[32m+[m[32m  --fa: "\e54a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-military-rifle {[m
[32m+[m[32m  --fa: "\e54b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-military-to-person {[m
[32m+[m[32m  --fa: "\e54c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-rays {[m
[32m+[m[32m  --fa: "\e54d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-rifle {[m
[32m+[m[32m  --fa: "\e54e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-shelter {[m
[32m+[m[32m  --fa: "\e54f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-walking-arrow-loop-left {[m
[32m+[m[32m  --fa: "\e551";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-walking-arrow-right {[m
[32m+[m[32m  --fa: "\e552";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-walking-dashed-line-arrow-right {[m
[32m+[m[32m  --fa: "\e553";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-walking-luggage {[m
[32m+[m[32m  --fa: "\e554";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-circle-check {[m
[32m+[m[32m  --fa: "\e555";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-circle-exclamation {[m
[32m+[m[32m  --fa: "\e556";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-circle-xmark {[m
[32m+[m[32m  --fa: "\e557";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-lock {[m
[32m+[m[32m  --fa: "\e558";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plate-wheat {[m
[32m+[m[32m  --fa: "\e55a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug-circle-bolt {[m
[32m+[m[32m  --fa: "\e55b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug-circle-check {[m
[32m+[m[32m  --fa: "\e55c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug-circle-exclamation {[m
[32m+[m[32m  --fa: "\e55d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug-circle-minus {[m
[32m+[m[32m  --fa: "\e55e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug-circle-plus {[m
[32m+[m[32m  --fa: "\e55f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug-circle-xmark {[m
[32m+[m[32m  --fa: "\e560";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ranking-star {[m
[32m+[m[32m  --fa: "\e561";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-barrier {[m
[32m+[m[32m  --fa: "\e562";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-bridge {[m
[32m+[m[32m  --fa: "\e563";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-circle-check {[m
[32m+[m[32m  --fa: "\e564";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-circle-exclamation {[m
[32m+[m[32m  --fa: "\e565";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-circle-xmark {[m
[32m+[m[32m  --fa: "\e566";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-lock {[m
[32m+[m[32m  --fa: "\e567";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road-spikes {[m
[32m+[m[32m  --fa: "\e568";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rug {[m
[32m+[m[32m  --fa: "\e569";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sack-xmark {[m
[32m+[m[32m  --fa: "\e56a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-school-circle-check {[m
[32m+[m[32m  --fa: "\e56b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-school-circle-exclamation {[m
[32m+[m[32m  --fa: "\e56c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-school-circle-xmark {[m
[32m+[m[32m  --fa: "\e56d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-school-flag {[m
[32m+[m[32m  --fa: "\e56e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-school-lock {[m
[32m+[m[32m  --fa: "\e56f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sheet-plastic {[m
[32m+[m[32m  --fa: "\e571";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shield-cat {[m
[32m+[m[32m  --fa: "\e572";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shield-dog {[m
[32m+[m[32m  --fa: "\e573";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shield-heart {[m
[32m+[m[32m  --fa: "\e574";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-nfi {[m
[32m+[m[32m  --fa: "\e576";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-person-confined {[m
[32m+[m[32m  --fa: "\e577";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-virus {[m
[32m+[m[32m  --fa: "\e578";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rod-asclepius,[m
[32m+[m[32m.fa-rod-snake,[m
[32m+[m[32m.fa-staff-aesculapius,[m
[32m+[m[32m.fa-staff-snake {[m
[32m+[m[32m  --fa: "\e579";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sun-plant-wilt {[m
[32m+[m[32m  --fa: "\e57a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tarp {[m
[32m+[m[32m  --fa: "\e57b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tarp-droplet {[m
[32m+[m[32m  --fa: "\e57c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tent {[m
[32m+[m[32m  --fa: "\e57d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tent-arrow-down-to-line {[m
[32m+[m[32m  --fa: "\e57e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tent-arrow-left-right {[m
[32m+[m[32m  --fa: "\e57f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tent-arrow-turn-left {[m
[32m+[m[32m  --fa: "\e580";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tent-arrows-down {[m
[32m+[m[32m  --fa: "\e581";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tents {[m
[32m+[m[32m  --fa: "\e582";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toilet-portable {[m
[32m+[m[32m  --fa: "\e583";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toilets-portable {[m
[32m+[m[32m  --fa: "\e584";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tower-cell {[m
[32m+[m[32m  --fa: "\e585";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tower-observation {[m
[32m+[m[32m  --fa: "\e586";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tree-city {[m
[32m+[m[32m  --fa: "\e587";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trowel {[m
[32m+[m[32m  --fa: "\e589";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trowel-bricks {[m
[32m+[m[32m  --fa: "\e58a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-arrow-right {[m
[32m+[m[32m  --fa: "\e58b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-droplet {[m
[32m+[m[32m  --fa: "\e58c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-field {[m
[32m+[m[32m  --fa: "\e58d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-field-un {[m
[32m+[m[32m  --fa: "\e58e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-plane {[m
[32m+[m[32m  --fa: "\e58f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-between-lines {[m
[32m+[m[32m  --fa: "\e591";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-line {[m
[32m+[m[32m  --fa: "\e592";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-rays {[m
[32m+[m[32m  --fa: "\e593";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-rectangle {[m
[32m+[m[32m  --fa: "\e594";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-viewfinder {[m
[32m+[m[32m  --fa: "\e595";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vial-circle-check {[m
[32m+[m[32m  --fa: "\e596";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vial-virus {[m
[32m+[m[32m  --fa: "\e597";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wheat-awn-circle-exclamation {[m
[32m+[m[32m  --fa: "\e598";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-worm {[m
[32m+[m[32m  --fa: "\e599";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-xmarks-lines {[m
[32m+[m[32m  --fa: "\e59a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-child-dress {[m
[32m+[m[32m  --fa: "\e59c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-child-reaching {[m
[32m+[m[32m  --fa: "\e59d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-circle-check {[m
[32m+[m[32m  --fa: "\e5a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-circle-xmark {[m
[32m+[m[32m  --fa: "\e5a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-through-window {[m
[32m+[m[32m  --fa: "\e5a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plant-wilt {[m
[32m+[m[32m  --fa: "\e5aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stapler {[m
[32m+[m[32m  --fa: "\e5af";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-train-tram {[m
[32m+[m[32m  --fa: "\e5b4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table-cells-column-lock {[m
[32m+[m[32m  --fa: "\e678";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table-cells-row-lock {[m
[32m+[m[32m  --fa: "\e67a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-thumb-tack-slash,[m
[32m+[m[32m.fa-thumbtack-slash {[m
[32m+[m[32m  --fa: "\e68f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table-cells-row-unlock {[m
[32m+[m[32m  --fa: "\e691";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chart-diagram {[m
[32m+[m[32m  --fa: "\e695";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-nodes {[m
[32m+[m[32m  --fa: "\e696";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-fragment {[m
[32m+[m[32m  --fa: "\e697";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-half-dashed {[m
[32m+[m[32m  --fa: "\e698";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hexagon-nodes {[m
[32m+[m[32m  --fa: "\e699";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hexagon-nodes-bolt {[m
[32m+[m[32m  --fa: "\e69a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-binary {[m
[32m+[m[32m  --fa: "\e69b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pentagon {[m
[32m+[m[32m  --fa: "\e790";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-non-binary {[m
[32m+[m[32m  --fa: "\e807";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spiral {[m
[32m+[m[32m  --fa: "\e80a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-picture-in-picture {[m
[32m+[m[32m  --fa: "\e80b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mobile-vibrate {[m
[32m+[m[32m  --fa: "\e816";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-single-quote-left {[m
[32m+[m[32m  --fa: "\e81b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-single-quote-right {[m
[32m+[m[32m  --fa: "\e81c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bus-side {[m
[32m+[m[32m  --fa: "\e81d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heptagon,[m
[32m+[m[32m.fa-septagon {[m
[32m+[m[32m  --fa: "\e820";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-aquarius {[m
[32m+[m[32m  --fa: "\e845";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-aries {[m
[32m+[m[32m  --fa: "\e846";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cancer {[m
[32m+[m[32m  --fa: "\e847";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-capricorn {[m
[32m+[m[32m  --fa: "\e848";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gemini {[m
[32m+[m[32m  --fa: "\e849";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-leo {[m
[32m+[m[32m  --fa: "\e84a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-libra {[m
[32m+[m[32m  --fa: "\e84b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pisces {[m
[32m+[m[32m  --fa: "\e84c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sagittarius {[m
[32m+[m[32m  --fa: "\e84d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-scorpio {[m
[32m+[m[32m  --fa: "\e84e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-taurus {[m
[32m+[m[32m  --fa: "\e84f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-virgo {[m
[32m+[m[32m  --fa: "\e850";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glass-martini,[m
[32m+[m[32m.fa-martini-glass-empty {[m
[32m+[m[32m  --fa: "\f000";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-music {[m
[32m+[m[32m  --fa: "\f001";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass,[m
[32m+[m[32m.fa-search {[m
[32m+[m[32m  --fa: "\f002";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart {[m
[32m+[m[32m  --fa: "\f004";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-star {[m
[32m+[m[32m  --fa: "\f005";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user,[m
[32m+[m[32m.fa-user-alt,[m
[32m+[m[32m.fa-user-large {[m
[32m+[m[32m  --fa: "\f007";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-film,[m
[32m+[m[32m.fa-film-alt,[m
[32m+[m[32m.fa-film-simple {[m
[32m+[m[32m  --fa: "\f008";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table-cells-large,[m
[32m+[m[32m.fa-th-large {[m
[32m+[m[32m  --fa: "\f009";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table-cells,[m
[32m+[m[32m.fa-th {[m
[32m+[m[32m  --fa: "\f00a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table-list,[m
[32m+[m[32m.fa-th-list {[m
[32m+[m[32m  --fa: "\f00b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-check {[m
[32m+[m[32m  --fa: "\f00c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-close,[m
[32m+[m[32m.fa-multiply,[m
[32m+[m[32m.fa-remove,[m
[32m+[m[32m.fa-times,[m
[32m+[m[32m.fa-xmark {[m
[32m+[m[32m  --fa: "\f00d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass-plus,[m
[32m+[m[32m.fa-search-plus {[m
[32m+[m[32m  --fa: "\f00e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass-minus,[m
[32m+[m[32m.fa-search-minus {[m
[32m+[m[32m  --fa: "\f010";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-power-off {[m
[32m+[m[32m  --fa: "\f011";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-signal,[m
[32m+[m[32m.fa-signal-5,[m
[32m+[m[32m.fa-signal-perfect {[m
[32m+[m[32m  --fa: "\f012";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cog,[m
[32m+[m[32m.fa-gear {[m
[32m+[m[32m  --fa: "\f013";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-home,[m
[32m+[m[32m.fa-home-alt,[m
[32m+[m[32m.fa-home-lg-alt,[m
[32m+[m[32m.fa-house {[m
[32m+[m[32m  --fa: "\f015";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clock,[m
[32m+[m[32m.fa-clock-four {[m
[32m+[m[32m  --fa: "\f017";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-road {[m
[32m+[m[32m  --fa: "\f018";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-download {[m
[32m+[m[32m  --fa: "\f019";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-inbox {[m
[32m+[m[32m  --fa: "\f01c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-rotate,[m
[32m+[m[32m.fa-arrow-rotate-forward,[m
[32m+[m[32m.fa-arrow-rotate-right,[m
[32m+[m[32m.fa-redo {[m
[32m+[m[32m  --fa: "\f01e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-rotate,[m
[32m+[m[32m.fa-refresh,[m
[32m+[m[32m.fa-sync {[m
[32m+[m[32m  --fa: "\f021";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-list-alt,[m
[32m+[m[32m.fa-rectangle-list {[m
[32m+[m[32m  --fa: "\f022";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lock {[m
[32m+[m[32m  --fa: "\f023";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flag {[m
[32m+[m[32m  --fa: "\f024";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-headphones,[m
[32m+[m[32m.fa-headphones-alt,[m
[32m+[m[32m.fa-headphones-simple {[m
[32m+[m[32m  --fa: "\f025";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volume-off {[m
[32m+[m[32m  --fa: "\f026";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volume-down,[m
[32m+[m[32m.fa-volume-low {[m
[32m+[m[32m  --fa: "\f027";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volume-high,[m
[32m+[m[32m.fa-volume-up {[m
[32m+[m[32m  --fa: "\f028";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-qrcode {[m
[32m+[m[32m  --fa: "\f029";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-barcode {[m
[32m+[m[32m  --fa: "\f02a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tag {[m
[32m+[m[32m  --fa: "\f02b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tags {[m
[32m+[m[32m  --fa: "\f02c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book {[m
[32m+[m[32m  --fa: "\f02d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bookmark {[m
[32m+[m[32m  --fa: "\f02e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-print {[m
[32m+[m[32m  --fa: "\f02f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-camera,[m
[32m+[m[32m.fa-camera-alt {[m
[32m+[m[32m  --fa: "\f030";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-font {[m
[32m+[m[32m  --fa: "\f031";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bold {[m
[32m+[m[32m  --fa: "\f032";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-italic {[m
[32m+[m[32m  --fa: "\f033";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-text-height {[m
[32m+[m[32m  --fa: "\f034";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-text-width {[m
[32m+[m[32m  --fa: "\f035";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-align-left {[m
[32m+[m[32m  --fa: "\f036";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-align-center {[m
[32m+[m[32m  --fa: "\f037";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-align-right {[m
[32m+[m[32m  --fa: "\f038";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-align-justify {[m
[32m+[m[32m  --fa: "\f039";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-list,[m
[32m+[m[32m.fa-list-squares {[m
[32m+[m[32m  --fa: "\f03a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dedent,[m
[32m+[m[32m.fa-outdent {[m
[32m+[m[32m  --fa: "\f03b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-indent {[m
[32m+[m[32m  --fa: "\f03c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-video,[m
[32m+[m[32m.fa-video-camera {[m
[32m+[m[32m  --fa: "\f03d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-image {[m
[32m+[m[32m  --fa: "\f03e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-location-pin,[m
[32m+[m[32m.fa-map-marker {[m
[32m+[m[32m  --fa: "\f041";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-adjust,[m
[32m+[m[32m.fa-circle-half-stroke {[m
[32m+[m[32m  --fa: "\f042";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-droplet,[m
[32m+[m[32m.fa-tint {[m
[32m+[m[32m  --fa: "\f043";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-edit,[m
[32m+[m[32m.fa-pen-to-square {[m
[32m+[m[32m  --fa: "\f044";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows,[m
[32m+[m[32m.fa-arrows-up-down-left-right {[m
[32m+[m[32m  --fa: "\f047";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-backward-step,[m
[32m+[m[32m.fa-step-backward {[m
[32m+[m[32m  --fa: "\f048";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-backward-fast,[m
[32m+[m[32m.fa-fast-backward {[m
[32m+[m[32m  --fa: "\f049";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-backward {[m
[32m+[m[32m  --fa: "\f04a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-play {[m
[32m+[m[32m  --fa: "\f04b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pause {[m
[32m+[m[32m  --fa: "\f04c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stop {[m
[32m+[m[32m  --fa: "\f04d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-forward {[m
[32m+[m[32m  --fa: "\f04e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fast-forward,[m
[32m+[m[32m.fa-forward-fast {[m
[32m+[m[32m  --fa: "\f050";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-forward-step,[m
[32m+[m[32m.fa-step-forward {[m
[32m+[m[32m  --fa: "\f051";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eject {[m
[32m+[m[32m  --fa: "\f052";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-left {[m
[32m+[m[32m  --fa: "\f053";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-right {[m
[32m+[m[32m  --fa: "\f054";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-plus,[m
[32m+[m[32m.fa-plus-circle {[m
[32m+[m[32m  --fa: "\f055";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-minus,[m
[32m+[m[32m.fa-minus-circle {[m
[32m+[m[32m  --fa: "\f056";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-xmark,[m
[32m+[m[32m.fa-times-circle,[m
[32m+[m[32m.fa-xmark-circle {[m
[32m+[m[32m  --fa: "\f057";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-check-circle,[m
[32m+[m[32m.fa-circle-check {[m
[32m+[m[32m  --fa: "\f058";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-question,[m
[32m+[m[32m.fa-question-circle {[m
[32m+[m[32m  --fa: "\f059";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-info,[m
[32m+[m[32m.fa-info-circle {[m
[32m+[m[32m  --fa: "\f05a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-crosshairs {[m
[32m+[m[32m  --fa: "\f05b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ban,[m
[32m+[m[32m.fa-cancel {[m
[32m+[m[32m  --fa: "\f05e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-left {[m
[32m+[m[32m  --fa: "\f060";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right {[m
[32m+[m[32m  --fa: "\f061";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up {[m
[32m+[m[32m  --fa: "\f062";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down {[m
[32m+[m[32m  --fa: "\f063";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mail-forward,[m
[32m+[m[32m.fa-share {[m
[32m+[m[32m  --fa: "\f064";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-expand {[m
[32m+[m[32m  --fa: "\f065";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-compress {[m
[32m+[m[32m  --fa: "\f066";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-minus,[m
[32m+[m[32m.fa-subtract {[m
[32m+[m[32m  --fa: "\f068";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-exclamation,[m
[32m+[m[32m.fa-exclamation-circle {[m
[32m+[m[32m  --fa: "\f06a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gift {[m
[32m+[m[32m  --fa: "\f06b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-leaf {[m
[32m+[m[32m  --fa: "\f06c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fire {[m
[32m+[m[32m  --fa: "\f06d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eye {[m
[32m+[m[32m  --fa: "\f06e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eye-slash {[m
[32m+[m[32m  --fa: "\f070";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-exclamation-triangle,[m
[32m+[m[32m.fa-triangle-exclamation,[m
[32m+[m[32m.fa-warning {[m
[32m+[m[32m  --fa: "\f071";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane {[m
[32m+[m[32m  --fa: "\f072";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-alt,[m
[32m+[m[32m.fa-calendar-days {[m
[32m+[m[32m  --fa: "\f073";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-random,[m
[32m+[m[32m.fa-shuffle {[m
[32m+[m[32m  --fa: "\f074";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment {[m
[32m+[m[32m  --fa: "\f075";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnet {[m
[32m+[m[32m  --fa: "\f076";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-up {[m
[32m+[m[32m  --fa: "\f077";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-down {[m
[32m+[m[32m  --fa: "\f078";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-retweet {[m
[32m+[m[32m  --fa: "\f079";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cart-shopping,[m
[32m+[m[32m.fa-shopping-cart {[m
[32m+[m[32m  --fa: "\f07a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-folder,[m
[32m+[m[32m.fa-folder-blank {[m
[32m+[m[32m  --fa: "\f07b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-folder-open {[m
[32m+[m[32m  --fa: "\f07c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-up-down,[m
[32m+[m[32m.fa-arrows-v {[m
[32m+[m[32m  --fa: "\f07d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-h,[m
[32m+[m[32m.fa-arrows-left-right {[m
[32m+[m[32m  --fa: "\f07e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bar-chart,[m
[32m+[m[32m.fa-chart-bar {[m
[32m+[m[32m  --fa: "\f080";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-camera-retro {[m
[32m+[m[32m  --fa: "\f083";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-key {[m
[32m+[m[32m  --fa: "\f084";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cogs,[m
[32m+[m[32m.fa-gears {[m
[32m+[m[32m  --fa: "\f085";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comments {[m
[32m+[m[32m  --fa: "\f086";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-star-half {[m
[32m+[m[32m  --fa: "\f089";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-from-bracket,[m
[32m+[m[32m.fa-sign-out {[m
[32m+[m[32m  --fa: "\f08b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-thumb-tack,[m
[32m+[m[32m.fa-thumbtack {[m
[32m+[m[32m  --fa: "\f08d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-right-from-square,[m
[32m+[m[32m.fa-external-link {[m
[32m+[m[32m  --fa: "\f08e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-to-bracket,[m
[32m+[m[32m.fa-sign-in {[m
[32m+[m[32m  --fa: "\f090";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trophy {[m
[32m+[m[32m  --fa: "\f091";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-upload {[m
[32m+[m[32m  --fa: "\f093";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lemon {[m
[32m+[m[32m  --fa: "\f094";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phone {[m
[32m+[m[32m  --fa: "\f095";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phone-square,[m
[32m+[m[32m.fa-square-phone {[m
[32m+[m[32m  --fa: "\f098";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-unlock {[m
[32m+[m[32m  --fa: "\f09c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-credit-card,[m
[32m+[m[32m.fa-credit-card-alt {[m
[32m+[m[32m  --fa: "\f09d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-feed,[m
[32m+[m[32m.fa-rss {[m
[32m+[m[32m  --fa: "\f09e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hard-drive,[m
[32m+[m[32m.fa-hdd {[m
[32m+[m[32m  --fa: "\f0a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bullhorn {[m
[32m+[m[32m  --fa: "\f0a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-certificate {[m
[32m+[m[32m  --fa: "\f0a3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-point-right {[m
[32m+[m[32m  --fa: "\f0a4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-point-left {[m
[32m+[m[32m  --fa: "\f0a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-point-up {[m
[32m+[m[32m  --fa: "\f0a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-point-down {[m
[32m+[m[32m  --fa: "\f0a7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-circle-left,[m
[32m+[m[32m.fa-circle-arrow-left {[m
[32m+[m[32m  --fa: "\f0a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-circle-right,[m
[32m+[m[32m.fa-circle-arrow-right {[m
[32m+[m[32m  --fa: "\f0a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-circle-up,[m
[32m+[m[32m.fa-circle-arrow-up {[m
[32m+[m[32m  --fa: "\f0aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-circle-down,[m
[32m+[m[32m.fa-circle-arrow-down {[m
[32m+[m[32m  --fa: "\f0ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-globe {[m
[32m+[m[32m  --fa: "\f0ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wrench {[m
[32m+[m[32m  --fa: "\f0ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-list-check,[m
[32m+[m[32m.fa-tasks {[m
[32m+[m[32m  --fa: "\f0ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-filter {[m
[32m+[m[32m  --fa: "\f0b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-briefcase {[m
[32m+[m[32m  --fa: "\f0b1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-alt,[m
[32m+[m[32m.fa-up-down-left-right {[m
[32m+[m[32m  --fa: "\f0b2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users {[m
[32m+[m[32m  --fa: "\f0c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chain,[m
[32m+[m[32m.fa-link {[m
[32m+[m[32m  --fa: "\f0c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud {[m
[32m+[m[32m  --fa: "\f0c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flask {[m
[32m+[m[32m  --fa: "\f0c3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cut,[m
[32m+[m[32m.fa-scissors {[m
[32m+[m[32m  --fa: "\f0c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-copy {[m
[32m+[m[32m  --fa: "\f0c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paperclip {[m
[32m+[m[32m  --fa: "\f0c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-floppy-disk,[m
[32m+[m[32m.fa-save {[m
[32m+[m[32m  --fa: "\f0c7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square {[m
[32m+[m[32m  --fa: "\f0c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bars,[m
[32m+[m[32m.fa-navicon {[m
[32m+[m[32m  --fa: "\f0c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-list-dots,[m
[32m+[m[32m.fa-list-ul {[m
[32m+[m[32m  --fa: "\f0ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-list-1-2,[m
[32m+[m[32m.fa-list-numeric,[m
[32m+[m[32m.fa-list-ol {[m
[32m+[m[32m  --fa: "\f0cb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-strikethrough {[m
[32m+[m[32m  --fa: "\f0cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-underline {[m
[32m+[m[32m  --fa: "\f0cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-table {[m
[32m+[m[32m  --fa: "\f0ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magic,[m
[32m+[m[32m.fa-wand-magic {[m
[32m+[m[32m  --fa: "\f0d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck {[m
[32m+[m[32m  --fa: "\f0d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill {[m
[32m+[m[32m  --fa: "\f0d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-down {[m
[32m+[m[32m  --fa: "\f0d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-up {[m
[32m+[m[32m  --fa: "\f0d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-left {[m
[32m+[m[32m  --fa: "\f0d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-right {[m
[32m+[m[32m  --fa: "\f0da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-columns,[m
[32m+[m[32m.fa-table-columns {[m
[32m+[m[32m  --fa: "\f0db";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sort,[m
[32m+[m[32m.fa-unsorted {[m
[32m+[m[32m  --fa: "\f0dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sort-desc,[m
[32m+[m[32m.fa-sort-down {[m
[32m+[m[32m  --fa: "\f0dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sort-asc,[m
[32m+[m[32m.fa-sort-up {[m
[32m+[m[32m  --fa: "\f0de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envelope {[m
[32m+[m[32m  --fa: "\f0e0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-left-rotate,[m
[32m+[m[32m.fa-arrow-rotate-back,[m
[32m+[m[32m.fa-arrow-rotate-backward,[m
[32m+[m[32m.fa-arrow-rotate-left,[m
[32m+[m[32m.fa-undo {[m
[32m+[m[32m  --fa: "\f0e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gavel,[m
[32m+[m[32m.fa-legal {[m
[32m+[m[32m  --fa: "\f0e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bolt,[m
[32m+[m[32m.fa-zap {[m
[32m+[m[32m  --fa: "\f0e7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sitemap {[m
[32m+[m[32m  --fa: "\f0e8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-umbrella {[m
[32m+[m[32m  --fa: "\f0e9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-clipboard,[m
[32m+[m[32m.fa-paste {[m
[32m+[m[32m  --fa: "\f0ea";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lightbulb {[m
[32m+[m[32m  --fa: "\f0eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-arrow-left,[m
[32m+[m[32m.fa-exchange {[m
[32m+[m[32m  --fa: "\f0ec";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-arrow-down,[m
[32m+[m[32m.fa-cloud-download,[m
[32m+[m[32m.fa-cloud-download-alt {[m
[32m+[m[32m  --fa: "\f0ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-arrow-up,[m
[32m+[m[32m.fa-cloud-upload,[m
[32m+[m[32m.fa-cloud-upload-alt {[m
[32m+[m[32m  --fa: "\f0ee";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-doctor,[m
[32m+[m[32m.fa-user-md {[m
[32m+[m[32m  --fa: "\f0f0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stethoscope {[m
[32m+[m[32m  --fa: "\f0f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-suitcase {[m
[32m+[m[32m  --fa: "\f0f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bell {[m
[32m+[m[32m  --fa: "\f0f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-coffee,[m
[32m+[m[32m.fa-mug-saucer {[m
[32m+[m[32m  --fa: "\f0f4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hospital,[m
[32m+[m[32m.fa-hospital-alt,[m
[32m+[m[32m.fa-hospital-wide {[m
[32m+[m[32m  --fa: "\f0f8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ambulance,[m
[32m+[m[32m.fa-truck-medical {[m
[32m+[m[32m  --fa: "\f0f9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-medkit,[m
[32m+[m[32m.fa-suitcase-medical {[m
[32m+[m[32m  --fa: "\f0fa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fighter-jet,[m
[32m+[m[32m.fa-jet-fighter {[m
[32m+[m[32m  --fa: "\f0fb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-beer,[m
[32m+[m[32m.fa-beer-mug-empty {[m
[32m+[m[32m  --fa: "\f0fc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-h-square,[m
[32m+[m[32m.fa-square-h {[m
[32m+[m[32m  --fa: "\f0fd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plus-square,[m
[32m+[m[32m.fa-square-plus {[m
[32m+[m[32m  --fa: "\f0fe";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-double-left,[m
[32m+[m[32m.fa-angles-left {[m
[32m+[m[32m  --fa: "\f100";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-double-right,[m
[32m+[m[32m.fa-angles-right {[m
[32m+[m[32m  --fa: "\f101";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-double-up,[m
[32m+[m[32m.fa-angles-up {[m
[32m+[m[32m  --fa: "\f102";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-double-down,[m
[32m+[m[32m.fa-angles-down {[m
[32m+[m[32m  --fa: "\f103";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-left {[m
[32m+[m[32m  --fa: "\f104";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-right {[m
[32m+[m[32m  --fa: "\f105";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-up {[m
[32m+[m[32m  --fa: "\f106";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angle-down {[m
[32m+[m[32m  --fa: "\f107";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-laptop {[m
[32m+[m[32m  --fa: "\f109";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tablet-button {[m
[32m+[m[32m  --fa: "\f10a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mobile-button {[m
[32m+[m[32m  --fa: "\f10b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-quote-left,[m
[32m+[m[32m.fa-quote-left-alt {[m
[32m+[m[32m  --fa: "\f10d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-quote-right,[m
[32m+[m[32m.fa-quote-right-alt {[m
[32m+[m[32m  --fa: "\f10e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spinner {[m
[32m+[m[32m  --fa: "\f110";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle {[m
[32m+[m[32m  --fa: "\f111";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-smile,[m
[32m+[m[32m.fa-smile {[m
[32m+[m[32m  --fa: "\f118";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-frown,[m
[32m+[m[32m.fa-frown {[m
[32m+[m[32m  --fa: "\f119";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-meh,[m
[32m+[m[32m.fa-meh {[m
[32m+[m[32m  --fa: "\f11a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gamepad {[m
[32m+[m[32m  --fa: "\f11b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-keyboard {[m
[32m+[m[32m  --fa: "\f11c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flag-checkered {[m
[32m+[m[32m  --fa: "\f11e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-terminal {[m
[32m+[m[32m  --fa: "\f120";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code {[m
[32m+[m[32m  --fa: "\f121";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mail-reply-all,[m
[32m+[m[32m.fa-reply-all {[m
[32m+[m[32m  --fa: "\f122";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-location-arrow {[m
[32m+[m[32m  --fa: "\f124";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-crop {[m
[32m+[m[32m  --fa: "\f125";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code-branch {[m
[32m+[m[32m  --fa: "\f126";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chain-broken,[m
[32m+[m[32m.fa-chain-slash,[m
[32m+[m[32m.fa-link-slash,[m
[32m+[m[32m.fa-unlink {[m
[32m+[m[32m  --fa: "\f127";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-info {[m
[32m+[m[32m  --fa: "\f129";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-superscript {[m
[32m+[m[32m  --fa: "\f12b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-subscript {[m
[32m+[m[32m  --fa: "\f12c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eraser {[m
[32m+[m[32m  --fa: "\f12d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-puzzle-piece {[m
[32m+[m[32m  --fa: "\f12e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microphone {[m
[32m+[m[32m  --fa: "\f130";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microphone-slash {[m
[32m+[m[32m  --fa: "\f131";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shield,[m
[32m+[m[32m.fa-shield-blank {[m
[32m+[m[32m  --fa: "\f132";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar {[m
[32m+[m[32m  --fa: "\f133";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fire-extinguisher {[m
[32m+[m[32m  --fa: "\f134";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rocket {[m
[32m+[m[32m  --fa: "\f135";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-circle-left,[m
[32m+[m[32m.fa-circle-chevron-left {[m
[32m+[m[32m  --fa: "\f137";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-circle-right,[m
[32m+[m[32m.fa-circle-chevron-right {[m
[32m+[m[32m  --fa: "\f138";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-circle-up,[m
[32m+[m[32m.fa-circle-chevron-up {[m
[32m+[m[32m  --fa: "\f139";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chevron-circle-down,[m
[32m+[m[32m.fa-circle-chevron-down {[m
[32m+[m[32m  --fa: "\f13a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-anchor {[m
[32m+[m[32m  --fa: "\f13d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-unlock-alt,[m
[32m+[m[32m.fa-unlock-keyhole {[m
[32m+[m[32m  --fa: "\f13e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bullseye {[m
[32m+[m[32m  --fa: "\f140";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ellipsis,[m
[32m+[m[32m.fa-ellipsis-h {[m
[32m+[m[32m  --fa: "\f141";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ellipsis-v,[m
[32m+[m[32m.fa-ellipsis-vertical {[m
[32m+[m[32m  --fa: "\f142";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rss-square,[m
[32m+[m[32m.fa-square-rss {[m
[32m+[m[32m  --fa: "\f143";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-play,[m
[32m+[m[32m.fa-play-circle {[m
[32m+[m[32m  --fa: "\f144";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ticket {[m
[32m+[m[32m  --fa: "\f145";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-minus-square,[m
[32m+[m[32m.fa-square-minus {[m
[32m+[m[32m  --fa: "\f146";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-turn-up,[m
[32m+[m[32m.fa-level-up {[m
[32m+[m[32m  --fa: "\f148";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-turn-down,[m
[32m+[m[32m.fa-level-down {[m
[32m+[m[32m  --fa: "\f149";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-check-square,[m
[32m+[m[32m.fa-square-check {[m
[32m+[m[32m  --fa: "\f14a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pen-square,[m
[32m+[m[32m.fa-pencil-square,[m
[32m+[m[32m.fa-square-pen {[m
[32m+[m[32m  --fa: "\f14b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-external-link-square,[m
[32m+[m[32m.fa-square-arrow-up-right {[m
[32m+[m[32m  --fa: "\f14c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-share-from-square,[m
[32m+[m[32m.fa-share-square {[m
[32m+[m[32m  --fa: "\f14d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-compass {[m
[32m+[m[32m  --fa: "\f14e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-square-down,[m
[32m+[m[32m.fa-square-caret-down {[m
[32m+[m[32m  --fa: "\f150";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-square-up,[m
[32m+[m[32m.fa-square-caret-up {[m
[32m+[m[32m  --fa: "\f151";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-square-right,[m
[32m+[m[32m.fa-square-caret-right {[m
[32m+[m[32m  --fa: "\f152";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eur,[m
[32m+[m[32m.fa-euro,[m
[32m+[m[32m.fa-euro-sign {[m
[32m+[m[32m  --fa: "\f153";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gbp,[m
[32m+[m[32m.fa-pound-sign,[m
[32m+[m[32m.fa-sterling-sign {[m
[32m+[m[32m  --fa: "\f154";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rupee,[m
[32m+[m[32m.fa-rupee-sign {[m
[32m+[m[32m  --fa: "\f156";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cny,[m
[32m+[m[32m.fa-jpy,[m
[32m+[m[32m.fa-rmb,[m
[32m+[m[32m.fa-yen,[m
[32m+[m[32m.fa-yen-sign {[m
[32m+[m[32m  --fa: "\f157";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rouble,[m
[32m+[m[32m.fa-rub,[m
[32m+[m[32m.fa-ruble,[m
[32m+[m[32m.fa-ruble-sign {[m
[32m+[m[32m  --fa: "\f158";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-krw,[m
[32m+[m[32m.fa-won,[m
[32m+[m[32m.fa-won-sign {[m
[32m+[m[32m  --fa: "\f159";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file {[m
[32m+[m[32m  --fa: "\f15b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-alt,[m
[32m+[m[32m.fa-file-lines,[m
[32m+[m[32m.fa-file-text {[m
[32m+[m[32m  --fa: "\f15c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-a-z,[m
[32m+[m[32m.fa-sort-alpha-asc,[m
[32m+[m[32m.fa-sort-alpha-down {[m
[32m+[m[32m  --fa: "\f15d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-a-z,[m
[32m+[m[32m.fa-sort-alpha-up {[m
[32m+[m[32m  --fa: "\f15e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-wide-short,[m
[32m+[m[32m.fa-sort-amount-asc,[m
[32m+[m[32m.fa-sort-amount-down {[m
[32m+[m[32m  --fa: "\f160";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-wide-short,[m
[32m+[m[32m.fa-sort-amount-up {[m
[32m+[m[32m  --fa: "\f161";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-1-9,[m
[32m+[m[32m.fa-sort-numeric-asc,[m
[32m+[m[32m.fa-sort-numeric-down {[m
[32m+[m[32m  --fa: "\f162";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-1-9,[m
[32m+[m[32m.fa-sort-numeric-up {[m
[32m+[m[32m  --fa: "\f163";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-thumbs-up {[m
[32m+[m[32m  --fa: "\f164";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-thumbs-down {[m
[32m+[m[32m  --fa: "\f165";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-long,[m
[32m+[m[32m.fa-long-arrow-down {[m
[32m+[m[32m  --fa: "\f175";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-long,[m
[32m+[m[32m.fa-long-arrow-up {[m
[32m+[m[32m  --fa: "\f176";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-left-long,[m
[32m+[m[32m.fa-long-arrow-left {[m
[32m+[m[32m  --fa: "\f177";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-long,[m
[32m+[m[32m.fa-long-arrow-right {[m
[32m+[m[32m  --fa: "\f178";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-female,[m
[32m+[m[32m.fa-person-dress {[m
[32m+[m[32m  --fa: "\f182";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-male,[m
[32m+[m[32m.fa-person {[m
[32m+[m[32m  --fa: "\f183";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sun {[m
[32m+[m[32m  --fa: "\f185";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-moon {[m
[32m+[m[32m  --fa: "\f186";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-archive,[m
[32m+[m[32m.fa-box-archive {[m
[32m+[m[32m  --fa: "\f187";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bug {[m
[32m+[m[32m  --fa: "\f188";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caret-square-left,[m
[32m+[m[32m.fa-square-caret-left {[m
[32m+[m[32m  --fa: "\f191";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-dot,[m
[32m+[m[32m.fa-dot-circle {[m
[32m+[m[32m  --fa: "\f192";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wheelchair {[m
[32m+[m[32m  --fa: "\f193";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lira-sign {[m
[32m+[m[32m  --fa: "\f195";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shuttle-space,[m
[32m+[m[32m.fa-space-shuttle {[m
[32m+[m[32m  --fa: "\f197";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envelope-square,[m
[32m+[m[32m.fa-square-envelope {[m
[32m+[m[32m  --fa: "\f199";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bank,[m
[32m+[m[32m.fa-building-columns,[m
[32m+[m[32m.fa-institution,[m
[32m+[m[32m.fa-museum,[m
[32m+[m[32m.fa-university {[m
[32m+[m[32m  --fa: "\f19c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-graduation-cap,[m
[32m+[m[32m.fa-mortar-board {[m
[32m+[m[32m  --fa: "\f19d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-language {[m
[32m+[m[32m  --fa: "\f1ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fax {[m
[32m+[m[32m  --fa: "\f1ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-building {[m
[32m+[m[32m  --fa: "\f1ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-child {[m
[32m+[m[32m  --fa: "\f1ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paw {[m
[32m+[m[32m  --fa: "\f1b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cube {[m
[32m+[m[32m  --fa: "\f1b2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cubes {[m
[32m+[m[32m  --fa: "\f1b3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-recycle {[m
[32m+[m[32m  --fa: "\f1b8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-automobile,[m
[32m+[m[32m.fa-car {[m
[32m+[m[32m  --fa: "\f1b9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cab,[m
[32m+[m[32m.fa-taxi {[m
[32m+[m[32m  --fa: "\f1ba";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tree {[m
[32m+[m[32m  --fa: "\f1bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-database {[m
[32m+[m[32m  --fa: "\f1c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-pdf {[m
[32m+[m[32m  --fa: "\f1c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-word {[m
[32m+[m[32m  --fa: "\f1c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-excel {[m
[32m+[m[32m  --fa: "\f1c3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-powerpoint {[m
[32m+[m[32m  --fa: "\f1c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-image {[m
[32m+[m[32m  --fa: "\f1c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-archive,[m
[32m+[m[32m.fa-file-zipper {[m
[32m+[m[32m  --fa: "\f1c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-audio {[m
[32m+[m[32m  --fa: "\f1c7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-video {[m
[32m+[m[32m  --fa: "\f1c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-code {[m
[32m+[m[32m  --fa: "\f1c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-life-ring {[m
[32m+[m[32m  --fa: "\f1cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-notch {[m
[32m+[m[32m  --fa: "\f1ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paper-plane {[m
[32m+[m[32m  --fa: "\f1d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clock-rotate-left,[m
[32m+[m[32m.fa-history {[m
[32m+[m[32m  --fa: "\f1da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-header,[m
[32m+[m[32m.fa-heading {[m
[32m+[m[32m  --fa: "\f1dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paragraph {[m
[32m+[m[32m  --fa: "\f1dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sliders,[m
[32m+[m[32m.fa-sliders-h {[m
[32m+[m[32m  --fa: "\f1de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-share-alt,[m
[32m+[m[32m.fa-share-nodes {[m
[32m+[m[32m  --fa: "\f1e0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-share-alt-square,[m
[32m+[m[32m.fa-square-share-nodes {[m
[32m+[m[32m  --fa: "\f1e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bomb {[m
[32m+[m[32m  --fa: "\f1e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-futbol,[m
[32m+[m[32m.fa-futbol-ball,[m
[32m+[m[32m.fa-soccer-ball {[m
[32m+[m[32m  --fa: "\f1e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-teletype,[m
[32m+[m[32m.fa-tty {[m
[32m+[m[32m  --fa: "\f1e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-binoculars {[m
[32m+[m[32m  --fa: "\f1e5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plug {[m
[32m+[m[32m  --fa: "\f1e6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-newspaper {[m
[32m+[m[32m  --fa: "\f1ea";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wifi,[m
[32m+[m[32m.fa-wifi-3,[m
[32m+[m[32m.fa-wifi-strong {[m
[32m+[m[32m  --fa: "\f1eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calculator {[m
[32m+[m[32m  --fa: "\f1ec";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bell-slash {[m
[32m+[m[32m  --fa: "\f1f6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trash {[m
[32m+[m[32m  --fa: "\f1f8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-copyright {[m
[32m+[m[32m  --fa: "\f1f9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eye-dropper,[m
[32m+[m[32m.fa-eye-dropper-empty,[m
[32m+[m[32m.fa-eyedropper {[m
[32m+[m[32m  --fa: "\f1fb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paint-brush,[m
[32m+[m[32m.fa-paintbrush {[m
[32m+[m[32m  --fa: "\f1fc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-birthday-cake,[m
[32m+[m[32m.fa-cake,[m
[32m+[m[32m.fa-cake-candles {[m
[32m+[m[32m  --fa: "\f1fd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-area-chart,[m
[32m+[m[32m.fa-chart-area {[m
[32m+[m[32m  --fa: "\f1fe";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chart-pie,[m
[32m+[m[32m.fa-pie-chart {[m
[32m+[m[32m  --fa: "\f200";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chart-line,[m
[32m+[m[32m.fa-line-chart {[m
[32m+[m[32m  --fa: "\f201";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toggle-off {[m
[32m+[m[32m  --fa: "\f204";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toggle-on {[m
[32m+[m[32m  --fa: "\f205";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bicycle {[m
[32m+[m[32m  --fa: "\f206";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bus {[m
[32m+[m[32m  --fa: "\f207";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-closed-captioning {[m
[32m+[m[32m  --fa: "\f20a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ils,[m
[32m+[m[32m.fa-shekel,[m
[32m+[m[32m.fa-shekel-sign,[m
[32m+[m[32m.fa-sheqel,[m
[32m+[m[32m.fa-sheqel-sign {[m
[32m+[m[32m  --fa: "\f20b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cart-plus {[m
[32m+[m[32m  --fa: "\f217";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cart-arrow-down {[m
[32m+[m[32m  --fa: "\f218";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diamond {[m
[32m+[m[32m  --fa: "\f219";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ship {[m
[32m+[m[32m  --fa: "\f21a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-secret {[m
[32m+[m[32m  --fa: "\f21b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-motorcycle {[m
[32m+[m[32m  --fa: "\f21c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-street-view {[m
[32m+[m[32m  --fa: "\f21d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-pulse,[m
[32m+[m[32m.fa-heartbeat {[m
[32m+[m[32m  --fa: "\f21e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-venus {[m
[32m+[m[32m  --fa: "\f221";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars {[m
[32m+[m[32m  --fa: "\f222";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mercury {[m
[32m+[m[32m  --fa: "\f223";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars-and-venus {[m
[32m+[m[32m  --fa: "\f224";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-transgender,[m
[32m+[m[32m.fa-transgender-alt {[m
[32m+[m[32m  --fa: "\f225";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-venus-double {[m
[32m+[m[32m  --fa: "\f226";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars-double {[m
[32m+[m[32m  --fa: "\f227";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-venus-mars {[m
[32m+[m[32m  --fa: "\f228";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars-stroke {[m
[32m+[m[32m  --fa: "\f229";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars-stroke-up,[m
[32m+[m[32m.fa-mars-stroke-v {[m
[32m+[m[32m  --fa: "\f22a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mars-stroke-h,[m
[32m+[m[32m.fa-mars-stroke-right {[m
[32m+[m[32m  --fa: "\f22b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-neuter {[m
[32m+[m[32m  --fa: "\f22c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-genderless {[m
[32m+[m[32m  --fa: "\f22d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-server {[m
[32m+[m[32m  --fa: "\f233";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-plus {[m
[32m+[m[32m  --fa: "\f234";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-times,[m
[32m+[m[32m.fa-user-xmark {[m
[32m+[m[32m  --fa: "\f235";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bed {[m
[32m+[m[32m  --fa: "\f236";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-train {[m
[32m+[m[32m  --fa: "\f238";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-subway,[m
[32m+[m[32m.fa-train-subway {[m
[32m+[m[32m  --fa: "\f239";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battery,[m
[32m+[m[32m.fa-battery-5,[m
[32m+[m[32m.fa-battery-full {[m
[32m+[m[32m  --fa: "\f240";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battery-4,[m
[32m+[m[32m.fa-battery-three-quarters {[m
[32m+[m[32m  --fa: "\f241";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battery-3,[m
[32m+[m[32m.fa-battery-half {[m
[32m+[m[32m  --fa: "\f242";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battery-2,[m
[32m+[m[32m.fa-battery-quarter {[m
[32m+[m[32m  --fa: "\f243";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battery-0,[m
[32m+[m[32m.fa-battery-empty {[m
[32m+[m[32m  --fa: "\f244";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-pointer,[m
[32m+[m[32m.fa-mouse-pointer {[m
[32m+[m[32m  --fa: "\f245";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-i-cursor {[m
[32m+[m[32m  --fa: "\f246";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-object-group {[m
[32m+[m[32m  --fa: "\f247";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-object-ungroup {[m
[32m+[m[32m  --fa: "\f248";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-note-sticky,[m
[32m+[m[32m.fa-sticky-note {[m
[32m+[m[32m  --fa: "\f249";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clone {[m
[32m+[m[32m  --fa: "\f24d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-balance-scale,[m
[32m+[m[32m.fa-scale-balanced {[m
[32m+[m[32m  --fa: "\f24e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hourglass-1,[m
[32m+[m[32m.fa-hourglass-start {[m
[32m+[m[32m  --fa: "\f251";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hourglass-2,[m
[32m+[m[32m.fa-hourglass-half {[m
[32m+[m[32m  --fa: "\f252";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hourglass-3,[m
[32m+[m[32m.fa-hourglass-end {[m
[32m+[m[32m  --fa: "\f253";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hourglass,[m
[32m+[m[32m.fa-hourglass-empty {[m
[32m+[m[32m  --fa: "\f254";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-back-fist,[m
[32m+[m[32m.fa-hand-rock {[m
[32m+[m[32m  --fa: "\f255";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand,[m
[32m+[m[32m.fa-hand-paper {[m
[32m+[m[32m  --fa: "\f256";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-scissors {[m
[32m+[m[32m  --fa: "\f257";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-lizard {[m
[32m+[m[32m  --fa: "\f258";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-spock {[m
[32m+[m[32m  --fa: "\f259";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-pointer {[m
[32m+[m[32m  --fa: "\f25a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-peace {[m
[32m+[m[32m  --fa: "\f25b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trademark {[m
[32m+[m[32m  --fa: "\f25c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-registered {[m
[32m+[m[32m  --fa: "\f25d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-television,[m
[32m+[m[32m.fa-tv,[m
[32m+[m[32m.fa-tv-alt {[m
[32m+[m[32m  --fa: "\f26c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-plus {[m
[32m+[m[32m  --fa: "\f271";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-minus {[m
[32m+[m[32m  --fa: "\f272";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-times,[m
[32m+[m[32m.fa-calendar-xmark {[m
[32m+[m[32m  --fa: "\f273";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-check {[m
[32m+[m[32m  --fa: "\f274";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-industry {[m
[32m+[m[32m  --fa: "\f275";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-map-pin {[m
[32m+[m[32m  --fa: "\f276";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-map-signs,[m
[32m+[m[32m.fa-signs-post {[m
[32m+[m[32m  --fa: "\f277";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-map {[m
[32m+[m[32m  --fa: "\f279";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-alt,[m
[32m+[m[32m.fa-message {[m
[32m+[m[32m  --fa: "\f27a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-pause,[m
[32m+[m[32m.fa-pause-circle {[m
[32m+[m[32m  --fa: "\f28b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-stop,[m
[32m+[m[32m.fa-stop-circle {[m
[32m+[m[32m  --fa: "\f28d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bag-shopping,[m
[32m+[m[32m.fa-shopping-bag {[m
[32m+[m[32m  --fa: "\f290";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-basket-shopping,[m
[32m+[m[32m.fa-shopping-basket {[m
[32m+[m[32m  --fa: "\f291";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-universal-access {[m
[32m+[m[32m  --fa: "\f29a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blind,[m
[32m+[m[32m.fa-person-walking-with-cane {[m
[32m+[m[32m  --fa: "\f29d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-audio-description {[m
[32m+[m[32m  --fa: "\f29e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phone-volume,[m
[32m+[m[32m.fa-volume-control-phone {[m
[32m+[m[32m  --fa: "\f2a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-braille {[m
[32m+[m[32m  --fa: "\f2a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-assistive-listening-systems,[m
[32m+[m[32m.fa-ear-listen {[m
[32m+[m[32m  --fa: "\f2a2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-american-sign-language-interpreting,[m
[32m+[m[32m.fa-asl-interpreting,[m
[32m+[m[32m.fa-hands-american-sign-language-interpreting,[m
[32m+[m[32m.fa-hands-asl-interpreting {[m
[32m+[m[32m  --fa: "\f2a3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-deaf,[m
[32m+[m[32m.fa-deafness,[m
[32m+[m[32m.fa-ear-deaf,[m
[32m+[m[32m.fa-hard-of-hearing {[m
[32m+[m[32m  --fa: "\f2a4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands,[m
[32m+[m[32m.fa-sign-language,[m
[32m+[m[32m.fa-signing {[m
[32m+[m[32m  --fa: "\f2a7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-eye-low-vision,[m
[32m+[m[32m.fa-low-vision {[m
[32m+[m[32m  --fa: "\f2a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-handshake,[m
[32m+[m[32m.fa-handshake-alt,[m
[32m+[m[32m.fa-handshake-simple {[m
[32m+[m[32m  --fa: "\f2b5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envelope-open {[m
[32m+[m[32m  --fa: "\f2b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-address-book,[m
[32m+[m[32m.fa-contact-book {[m
[32m+[m[32m  --fa: "\f2b9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-address-card,[m
[32m+[m[32m.fa-contact-card,[m
[32m+[m[32m.fa-vcard {[m
[32m+[m[32m  --fa: "\f2bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-user,[m
[32m+[m[32m.fa-user-circle {[m
[32m+[m[32m  --fa: "\f2bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-id-badge {[m
[32m+[m[32m  --fa: "\f2c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-drivers-license,[m
[32m+[m[32m.fa-id-card {[m
[32m+[m[32m  --fa: "\f2c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-4,[m
[32m+[m[32m.fa-temperature-full,[m
[32m+[m[32m.fa-thermometer-4,[m
[32m+[m[32m.fa-thermometer-full {[m
[32m+[m[32m  --fa: "\f2c7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-3,[m
[32m+[m[32m.fa-temperature-three-quarters,[m
[32m+[m[32m.fa-thermometer-3,[m
[32m+[m[32m.fa-thermometer-three-quarters {[m
[32m+[m[32m  --fa: "\f2c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-2,[m
[32m+[m[32m.fa-temperature-half,[m
[32m+[m[32m.fa-thermometer-2,[m
[32m+[m[32m.fa-thermometer-half {[m
[32m+[m[32m  --fa: "\f2c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-1,[m
[32m+[m[32m.fa-temperature-quarter,[m
[32m+[m[32m.fa-thermometer-1,[m
[32m+[m[32m.fa-thermometer-quarter {[m
[32m+[m[32m  --fa: "\f2ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-0,[m
[32m+[m[32m.fa-temperature-empty,[m
[32m+[m[32m.fa-thermometer-0,[m
[32m+[m[32m.fa-thermometer-empty {[m
[32m+[m[32m  --fa: "\f2cb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shower {[m
[32m+[m[32m  --fa: "\f2cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bath,[m
[32m+[m[32m.fa-bathtub {[m
[32m+[m[32m  --fa: "\f2cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-podcast {[m
[32m+[m[32m  --fa: "\f2ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-window-maximize {[m
[32m+[m[32m  --fa: "\f2d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-window-minimize {[m
[32m+[m[32m  --fa: "\f2d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-window-restore {[m
[32m+[m[32m  --fa: "\f2d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-xmark,[m
[32m+[m[32m.fa-times-square,[m
[32m+[m[32m.fa-xmark-square {[m
[32m+[m[32m  --fa: "\f2d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microchip {[m
[32m+[m[32m  --fa: "\f2db";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-snowflake {[m
[32m+[m[32m  --fa: "\f2dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spoon,[m
[32m+[m[32m.fa-utensil-spoon {[m
[32m+[m[32m  --fa: "\f2e5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cutlery,[m
[32m+[m[32m.fa-utensils {[m
[32m+[m[32m  --fa: "\f2e7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rotate-back,[m
[32m+[m[32m.fa-rotate-backward,[m
[32m+[m[32m.fa-rotate-left,[m
[32m+[m[32m.fa-undo-alt {[m
[32m+[m[32m  --fa: "\f2ea";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trash-alt,[m
[32m+[m[32m.fa-trash-can {[m
[32m+[m[32m  --fa: "\f2ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rotate,[m
[32m+[m[32m.fa-sync-alt {[m
[32m+[m[32m  --fa: "\f2f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stopwatch {[m
[32m+[m[32m  --fa: "\f2f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-right-from-bracket,[m
[32m+[m[32m.fa-sign-out-alt {[m
[32m+[m[32m  --fa: "\f2f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-right-to-bracket,[m
[32m+[m[32m.fa-sign-in-alt {[m
[32m+[m[32m  --fa: "\f2f6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-redo-alt,[m
[32m+[m[32m.fa-rotate-forward,[m
[32m+[m[32m.fa-rotate-right {[m
[32m+[m[32m  --fa: "\f2f9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-poo {[m
[32m+[m[32m  --fa: "\f2fe";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-images {[m
[32m+[m[32m  --fa: "\f302";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pencil,[m
[32m+[m[32m.fa-pencil-alt {[m
[32m+[m[32m  --fa: "\f303";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pen {[m
[32m+[m[32m  --fa: "\f304";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pen-alt,[m
[32m+[m[32m.fa-pen-clip {[m
[32m+[m[32m  --fa: "\f305";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-octagon {[m
[32m+[m[32m  --fa: "\f306";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-down-long,[m
[32m+[m[32m.fa-long-arrow-alt-down {[m
[32m+[m[32m  --fa: "\f309";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-left-long,[m
[32m+[m[32m.fa-long-arrow-alt-left {[m
[32m+[m[32m  --fa: "\f30a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-long-arrow-alt-right,[m
[32m+[m[32m.fa-right-long {[m
[32m+[m[32m  --fa: "\f30b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-long-arrow-alt-up,[m
[32m+[m[32m.fa-up-long {[m
[32m+[m[32m  --fa: "\f30c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hexagon {[m
[32m+[m[32m  --fa: "\f312";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-edit,[m
[32m+[m[32m.fa-file-pen {[m
[32m+[m[32m  --fa: "\f31c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-expand-arrows-alt,[m
[32m+[m[32m.fa-maximize {[m
[32m+[m[32m  --fa: "\f31e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clipboard {[m
[32m+[m[32m  --fa: "\f328";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-alt-h,[m
[32m+[m[32m.fa-left-right {[m
[32m+[m[32m  --fa: "\f337";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrows-alt-v,[m
[32m+[m[32m.fa-up-down {[m
[32m+[m[32m  --fa: "\f338";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-alarm-clock {[m
[32m+[m[32m  --fa: "\f34e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-alt-circle-down,[m
[32m+[m[32m.fa-circle-down {[m
[32m+[m[32m  --fa: "\f358";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-alt-circle-left,[m
[32m+[m[32m.fa-circle-left {[m
[32m+[m[32m  --fa: "\f359";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-alt-circle-right,[m
[32m+[m[32m.fa-circle-right {[m
[32m+[m[32m  --fa: "\f35a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-alt-circle-up,[m
[32m+[m[32m.fa-circle-up {[m
[32m+[m[32m  --fa: "\f35b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-external-link-alt,[m
[32m+[m[32m.fa-up-right-from-square {[m
[32m+[m[32m  --fa: "\f35d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-external-link-square-alt,[m
[32m+[m[32m.fa-square-up-right {[m
[32m+[m[32m  --fa: "\f360";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-exchange-alt,[m
[32m+[m[32m.fa-right-left {[m
[32m+[m[32m  --fa: "\f362";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-repeat {[m
[32m+[m[32m  --fa: "\f363";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code-commit {[m
[32m+[m[32m  --fa: "\f386";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-code-merge {[m
[32m+[m[32m  --fa: "\f387";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-desktop,[m
[32m+[m[32m.fa-desktop-alt {[m
[32m+[m[32m  --fa: "\f390";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gem {[m
[32m+[m[32m  --fa: "\f3a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-level-down-alt,[m
[32m+[m[32m.fa-turn-down {[m
[32m+[m[32m  --fa: "\f3be";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-level-up-alt,[m
[32m+[m[32m.fa-turn-up {[m
[32m+[m[32m  --fa: "\f3bf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lock-open {[m
[32m+[m[32m  --fa: "\f3c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-location-dot,[m
[32m+[m[32m.fa-map-marker-alt {[m
[32m+[m[32m  --fa: "\f3c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microphone-alt,[m
[32m+[m[32m.fa-microphone-lines {[m
[32m+[m[32m  --fa: "\f3c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mobile-alt,[m
[32m+[m[32m.fa-mobile-screen-button {[m
[32m+[m[32m  --fa: "\f3cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mobile,[m
[32m+[m[32m.fa-mobile-android,[m
[32m+[m[32m.fa-mobile-phone {[m
[32m+[m[32m  --fa: "\f3ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mobile-android-alt,[m
[32m+[m[32m.fa-mobile-screen {[m
[32m+[m[32m  --fa: "\f3cf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill-1,[m
[32m+[m[32m.fa-money-bill-alt {[m
[32m+[m[32m  --fa: "\f3d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phone-slash {[m
[32m+[m[32m  --fa: "\f3dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-image-portrait,[m
[32m+[m[32m.fa-portrait {[m
[32m+[m[32m  --fa: "\f3e0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mail-reply,[m
[32m+[m[32m.fa-reply {[m
[32m+[m[32m  --fa: "\f3e5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shield-alt,[m
[32m+[m[32m.fa-shield-halved {[m
[32m+[m[32m  --fa: "\f3ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tablet-alt,[m
[32m+[m[32m.fa-tablet-screen-button {[m
[32m+[m[32m  --fa: "\f3fa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tablet,[m
[32m+[m[32m.fa-tablet-android {[m
[32m+[m[32m  --fa: "\f3fb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ticket-alt,[m
[32m+[m[32m.fa-ticket-simple {[m
[32m+[m[32m  --fa: "\f3ff";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rectangle-times,[m
[32m+[m[32m.fa-rectangle-xmark,[m
[32m+[m[32m.fa-times-rectangle,[m
[32m+[m[32m.fa-window-close {[m
[32m+[m[32m  --fa: "\f410";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-compress-alt,[m
[32m+[m[32m.fa-down-left-and-up-right-to-center {[m
[32m+[m[32m  --fa: "\f422";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-expand-alt,[m
[32m+[m[32m.fa-up-right-and-down-left-from-center {[m
[32m+[m[32m  --fa: "\f424";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-baseball-bat-ball {[m
[32m+[m[32m  --fa: "\f432";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-baseball,[m
[32m+[m[32m.fa-baseball-ball {[m
[32m+[m[32m  --fa: "\f433";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-basketball,[m
[32m+[m[32m.fa-basketball-ball {[m
[32m+[m[32m  --fa: "\f434";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bowling-ball {[m
[32m+[m[32m  --fa: "\f436";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess {[m
[32m+[m[32m  --fa: "\f439";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-bishop {[m
[32m+[m[32m  --fa: "\f43a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-board {[m
[32m+[m[32m  --fa: "\f43c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-king {[m
[32m+[m[32m  --fa: "\f43f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-knight {[m
[32m+[m[32m  --fa: "\f441";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-pawn {[m
[32m+[m[32m  --fa: "\f443";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-queen {[m
[32m+[m[32m  --fa: "\f445";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chess-rook {[m
[32m+[m[32m  --fa: "\f447";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dumbbell {[m
[32m+[m[32m  --fa: "\f44b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-football,[m
[32m+[m[32m.fa-football-ball {[m
[32m+[m[32m  --fa: "\f44e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-golf-ball,[m
[32m+[m[32m.fa-golf-ball-tee {[m
[32m+[m[32m  --fa: "\f450";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hockey-puck {[m
[32m+[m[32m  --fa: "\f453";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-broom-ball,[m
[32m+[m[32m.fa-quidditch,[m
[32m+[m[32m.fa-quidditch-broom-ball {[m
[32m+[m[32m  --fa: "\f458";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-full {[m
[32m+[m[32m  --fa: "\f45c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ping-pong-paddle-ball,[m
[32m+[m[32m.fa-table-tennis,[m
[32m+[m[32m.fa-table-tennis-paddle-ball {[m
[32m+[m[32m  --fa: "\f45d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volleyball,[m
[32m+[m[32m.fa-volleyball-ball {[m
[32m+[m[32m  --fa: "\f45f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-allergies,[m
[32m+[m[32m.fa-hand-dots {[m
[32m+[m[32m  --fa: "\f461";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-band-aid,[m
[32m+[m[32m.fa-bandage {[m
[32m+[m[32m  --fa: "\f462";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-box {[m
[32m+[m[32m  --fa: "\f466";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-boxes,[m
[32m+[m[32m.fa-boxes-alt,[m
[32m+[m[32m.fa-boxes-stacked {[m
[32m+[m[32m  --fa: "\f468";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-briefcase-medical {[m
[32m+[m[32m  --fa: "\f469";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-burn,[m
[32m+[m[32m.fa-fire-flame-simple {[m
[32m+[m[32m  --fa: "\f46a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-capsules {[m
[32m+[m[32m  --fa: "\f46b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clipboard-check {[m
[32m+[m[32m  --fa: "\f46c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clipboard-list {[m
[32m+[m[32m  --fa: "\f46d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diagnoses,[m
[32m+[m[32m.fa-person-dots-from-line {[m
[32m+[m[32m  --fa: "\f470";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dna {[m
[32m+[m[32m  --fa: "\f471";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dolly,[m
[32m+[m[32m.fa-dolly-box {[m
[32m+[m[32m  --fa: "\f472";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cart-flatbed,[m
[32m+[m[32m.fa-dolly-flatbed {[m
[32m+[m[32m  --fa: "\f474";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-medical {[m
[32m+[m[32m  --fa: "\f477";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-medical-alt,[m
[32m+[m[32m.fa-file-waveform {[m
[32m+[m[32m  --fa: "\f478";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-first-aid,[m
[32m+[m[32m.fa-kit-medical {[m
[32m+[m[32m  --fa: "\f479";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-h,[m
[32m+[m[32m.fa-hospital-symbol {[m
[32m+[m[32m  --fa: "\f47e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-id-card-alt,[m
[32m+[m[32m.fa-id-card-clip {[m
[32m+[m[32m  --fa: "\f47f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-notes-medical {[m
[32m+[m[32m  --fa: "\f481";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pallet {[m
[32m+[m[32m  --fa: "\f482";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pills {[m
[32m+[m[32m  --fa: "\f484";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-prescription-bottle {[m
[32m+[m[32m  --fa: "\f485";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-prescription-bottle-alt,[m
[32m+[m[32m.fa-prescription-bottle-medical {[m
[32m+[m[32m  --fa: "\f486";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bed-pulse,[m
[32m+[m[32m.fa-procedures {[m
[32m+[m[32m  --fa: "\f487";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shipping-fast,[m
[32m+[m[32m.fa-truck-fast {[m
[32m+[m[32m  --fa: "\f48b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-smoking {[m
[32m+[m[32m  --fa: "\f48d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-syringe {[m
[32m+[m[32m  --fa: "\f48e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tablets {[m
[32m+[m[32m  --fa: "\f490";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-thermometer {[m
[32m+[m[32m  --fa: "\f491";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vial {[m
[32m+[m[32m  --fa: "\f492";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vials {[m
[32m+[m[32m  --fa: "\f493";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-warehouse {[m
[32m+[m[32m  --fa: "\f494";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-weight,[m
[32m+[m[32m.fa-weight-scale {[m
[32m+[m[32m  --fa: "\f496";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-x-ray {[m
[32m+[m[32m  --fa: "\f497";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-box-open {[m
[32m+[m[32m  --fa: "\f49e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-dots,[m
[32m+[m[32m.fa-commenting {[m
[32m+[m[32m  --fa: "\f4ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-slash {[m
[32m+[m[32m  --fa: "\f4b3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-couch {[m
[32m+[m[32m  --fa: "\f4b8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-dollar-to-slot,[m
[32m+[m[32m.fa-donate {[m
[32m+[m[32m  --fa: "\f4b9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dove {[m
[32m+[m[32m  --fa: "\f4ba";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-holding {[m
[32m+[m[32m  --fa: "\f4bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-holding-heart {[m
[32m+[m[32m  --fa: "\f4be";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-holding-dollar,[m
[32m+[m[32m.fa-hand-holding-usd {[m
[32m+[m[32m  --fa: "\f4c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-holding-droplet,[m
[32m+[m[32m.fa-hand-holding-water {[m
[32m+[m[32m  --fa: "\f4c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-holding {[m
[32m+[m[32m  --fa: "\f4c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-helping,[m
[32m+[m[32m.fa-handshake-angle {[m
[32m+[m[32m  --fa: "\f4c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-parachute-box {[m
[32m+[m[32m  --fa: "\f4cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-people-carry,[m
[32m+[m[32m.fa-people-carry-box {[m
[32m+[m[32m  --fa: "\f4ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-piggy-bank {[m
[32m+[m[32m  --fa: "\f4d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ribbon {[m
[32m+[m[32m  --fa: "\f4d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-route {[m
[32m+[m[32m  --fa: "\f4d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-seedling,[m
[32m+[m[32m.fa-sprout {[m
[32m+[m[32m  --fa: "\f4d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sign,[m
[32m+[m[32m.fa-sign-hanging {[m
[32m+[m[32m  --fa: "\f4d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-smile-wink,[m
[32m+[m[32m.fa-smile-wink {[m
[32m+[m[32m  --fa: "\f4da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tape {[m
[32m+[m[32m  --fa: "\f4db";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-loading,[m
[32m+[m[32m.fa-truck-ramp-box {[m
[32m+[m[32m  --fa: "\f4de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-moving {[m
[32m+[m[32m  --fa: "\f4df";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-video-slash {[m
[32m+[m[32m  --fa: "\f4e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wine-glass {[m
[32m+[m[32m  --fa: "\f4e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-astronaut {[m
[32m+[m[32m  --fa: "\f4fb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-check {[m
[32m+[m[32m  --fa: "\f4fc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-clock {[m
[32m+[m[32m  --fa: "\f4fd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-cog,[m
[32m+[m[32m.fa-user-gear {[m
[32m+[m[32m  --fa: "\f4fe";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-edit,[m
[32m+[m[32m.fa-user-pen {[m
[32m+[m[32m  --fa: "\f4ff";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-friends,[m
[32m+[m[32m.fa-user-group {[m
[32m+[m[32m  --fa: "\f500";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-graduate {[m
[32m+[m[32m  --fa: "\f501";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-lock {[m
[32m+[m[32m  --fa: "\f502";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-minus {[m
[32m+[m[32m  --fa: "\f503";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-ninja {[m
[32m+[m[32m  --fa: "\f504";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-shield {[m
[32m+[m[32m  --fa: "\f505";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-alt-slash,[m
[32m+[m[32m.fa-user-large-slash,[m
[32m+[m[32m.fa-user-slash {[m
[32m+[m[32m  --fa: "\f506";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-tag {[m
[32m+[m[32m  --fa: "\f507";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-tie {[m
[32m+[m[32m  --fa: "\f508";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-users-cog,[m
[32m+[m[32m.fa-users-gear {[m
[32m+[m[32m  --fa: "\f509";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-balance-scale-left,[m
[32m+[m[32m.fa-scale-unbalanced {[m
[32m+[m[32m  --fa: "\f515";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-balance-scale-right,[m
[32m+[m[32m.fa-scale-unbalanced-flip {[m
[32m+[m[32m  --fa: "\f516";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blender {[m
[32m+[m[32m  --fa: "\f517";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-open {[m
[32m+[m[32m  --fa: "\f518";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-broadcast-tower,[m
[32m+[m[32m.fa-tower-broadcast {[m
[32m+[m[32m  --fa: "\f519";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-broom {[m
[32m+[m[32m  --fa: "\f51a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blackboard,[m
[32m+[m[32m.fa-chalkboard {[m
[32m+[m[32m  --fa: "\f51b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chalkboard-teacher,[m
[32m+[m[32m.fa-chalkboard-user {[m
[32m+[m[32m  --fa: "\f51c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-church {[m
[32m+[m[32m  --fa: "\f51d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-coins {[m
[32m+[m[32m  --fa: "\f51e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-compact-disc {[m
[32m+[m[32m  --fa: "\f51f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-crow {[m
[32m+[m[32m  --fa: "\f520";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-crown {[m
[32m+[m[32m  --fa: "\f521";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice {[m
[32m+[m[32m  --fa: "\f522";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-five {[m
[32m+[m[32m  --fa: "\f523";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-four {[m
[32m+[m[32m  --fa: "\f524";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-one {[m
[32m+[m[32m  --fa: "\f525";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-six {[m
[32m+[m[32m  --fa: "\f526";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-three {[m
[32m+[m[32m  --fa: "\f527";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-two {[m
[32m+[m[32m  --fa: "\f528";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-divide {[m
[32m+[m[32m  --fa: "\f529";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-door-closed {[m
[32m+[m[32m  --fa: "\f52a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-door-open {[m
[32m+[m[32m  --fa: "\f52b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-feather {[m
[32m+[m[32m  --fa: "\f52d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-frog {[m
[32m+[m[32m  --fa: "\f52e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gas-pump {[m
[32m+[m[32m  --fa: "\f52f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glasses {[m
[32m+[m[32m  --fa: "\f530";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-greater-than-equal {[m
[32m+[m[32m  --fa: "\f532";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-helicopter {[m
[32m+[m[32m  --fa: "\f533";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-infinity {[m
[32m+[m[32m  --fa: "\f534";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kiwi-bird {[m
[32m+[m[32m  --fa: "\f535";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-less-than-equal {[m
[32m+[m[32m  --fa: "\f537";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-memory {[m
[32m+[m[32m  --fa: "\f538";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microphone-alt-slash,[m
[32m+[m[32m.fa-microphone-lines-slash {[m
[32m+[m[32m  --fa: "\f539";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill-wave {[m
[32m+[m[32m  --fa: "\f53a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-bill-1-wave,[m
[32m+[m[32m.fa-money-bill-wave-alt {[m
[32m+[m[32m  --fa: "\f53b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-check {[m
[32m+[m[32m  --fa: "\f53c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-money-check-alt,[m
[32m+[m[32m.fa-money-check-dollar {[m
[32m+[m[32m  --fa: "\f53d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-not-equal {[m
[32m+[m[32m  --fa: "\f53e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-palette {[m
[32m+[m[32m  --fa: "\f53f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-parking,[m
[32m+[m[32m.fa-square-parking {[m
[32m+[m[32m  --fa: "\f540";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diagram-project,[m
[32m+[m[32m.fa-project-diagram {[m
[32m+[m[32m  --fa: "\f542";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-receipt {[m
[32m+[m[32m  --fa: "\f543";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-robot {[m
[32m+[m[32m  --fa: "\f544";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ruler {[m
[32m+[m[32m  --fa: "\f545";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ruler-combined {[m
[32m+[m[32m  --fa: "\f546";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ruler-horizontal {[m
[32m+[m[32m  --fa: "\f547";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ruler-vertical {[m
[32m+[m[32m  --fa: "\f548";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-school {[m
[32m+[m[32m  --fa: "\f549";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-screwdriver {[m
[32m+[m[32m  --fa: "\f54a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shoe-prints {[m
[32m+[m[32m  --fa: "\f54b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-skull {[m
[32m+[m[32m  --fa: "\f54c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ban-smoking,[m
[32m+[m[32m.fa-smoking-ban {[m
[32m+[m[32m  --fa: "\f54d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-store {[m
[32m+[m[32m  --fa: "\f54e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shop,[m
[32m+[m[32m.fa-store-alt {[m
[32m+[m[32m  --fa: "\f54f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bars-staggered,[m
[32m+[m[32m.fa-reorder,[m
[32m+[m[32m.fa-stream {[m
[32m+[m[32m  --fa: "\f550";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stroopwafel {[m
[32m+[m[32m  --fa: "\f551";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toolbox {[m
[32m+[m[32m  --fa: "\f552";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shirt,[m
[32m+[m[32m.fa-t-shirt,[m
[32m+[m[32m.fa-tshirt {[m
[32m+[m[32m  --fa: "\f553";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-walking,[m
[32m+[m[32m.fa-walking {[m
[32m+[m[32m  --fa: "\f554";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wallet {[m
[32m+[m[32m  --fa: "\f555";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angry,[m
[32m+[m[32m.fa-face-angry {[m
[32m+[m[32m  --fa: "\f556";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-archway {[m
[32m+[m[32m  --fa: "\f557";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-atlas,[m
[32m+[m[32m.fa-book-atlas {[m
[32m+[m[32m  --fa: "\f558";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-award {[m
[32m+[m[32m  --fa: "\f559";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-backspace,[m
[32m+[m[32m.fa-delete-left {[m
[32m+[m[32m  --fa: "\f55a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bezier-curve {[m
[32m+[m[32m  --fa: "\f55b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bong {[m
[32m+[m[32m  --fa: "\f55c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-brush {[m
[32m+[m[32m  --fa: "\f55d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bus-alt,[m
[32m+[m[32m.fa-bus-simple {[m
[32m+[m[32m  --fa: "\f55e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cannabis {[m
[32m+[m[32m  --fa: "\f55f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-check-double {[m
[32m+[m[32m  --fa: "\f560";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cocktail,[m
[32m+[m[32m.fa-martini-glass-citrus {[m
[32m+[m[32m  --fa: "\f561";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bell-concierge,[m
[32m+[m[32m.fa-concierge-bell {[m
[32m+[m[32m  --fa: "\f562";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cookie {[m
[32m+[m[32m  --fa: "\f563";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cookie-bite {[m
[32m+[m[32m  --fa: "\f564";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-crop-alt,[m
[32m+[m[32m.fa-crop-simple {[m
[32m+[m[32m  --fa: "\f565";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-digital-tachograph,[m
[32m+[m[32m.fa-tachograph-digital {[m
[32m+[m[32m  --fa: "\f566";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dizzy,[m
[32m+[m[32m.fa-face-dizzy {[m
[32m+[m[32m  --fa: "\f567";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-compass-drafting,[m
[32m+[m[32m.fa-drafting-compass {[m
[32m+[m[32m  --fa: "\f568";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-drum {[m
[32m+[m[32m  --fa: "\f569";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-drum-steelpan {[m
[32m+[m[32m  --fa: "\f56a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-feather-alt,[m
[32m+[m[32m.fa-feather-pointed {[m
[32m+[m[32m  --fa: "\f56b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-contract {[m
[32m+[m[32m  --fa: "\f56c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-arrow-down,[m
[32m+[m[32m.fa-file-download {[m
[32m+[m[32m  --fa: "\f56d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-from-file,[m
[32m+[m[32m.fa-file-export {[m
[32m+[m[32m  --fa: "\f56e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-right-to-file,[m
[32m+[m[32m.fa-file-import {[m
[32m+[m[32m  --fa: "\f56f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-invoice {[m
[32m+[m[32m  --fa: "\f570";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-invoice-dollar {[m
[32m+[m[32m  --fa: "\f571";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-prescription {[m
[32m+[m[32m  --fa: "\f572";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-signature {[m
[32m+[m[32m  --fa: "\f573";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-arrow-up,[m
[32m+[m[32m.fa-file-upload {[m
[32m+[m[32m  --fa: "\f574";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fill {[m
[32m+[m[32m  --fa: "\f575";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fill-drip {[m
[32m+[m[32m  --fa: "\f576";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fingerprint {[m
[32m+[m[32m  --fa: "\f577";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fish {[m
[32m+[m[32m  --fa: "\f578";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-flushed,[m
[32m+[m[32m.fa-flushed {[m
[32m+[m[32m  --fa: "\f579";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-frown-open,[m
[32m+[m[32m.fa-frown-open {[m
[32m+[m[32m  --fa: "\f57a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glass-martini-alt,[m
[32m+[m[32m.fa-martini-glass {[m
[32m+[m[32m  --fa: "\f57b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-earth-africa,[m
[32m+[m[32m.fa-globe-africa {[m
[32m+[m[32m  --fa: "\f57c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-earth,[m
[32m+[m[32m.fa-earth-america,[m
[32m+[m[32m.fa-earth-americas,[m
[32m+[m[32m.fa-globe-americas {[m
[32m+[m[32m  --fa: "\f57d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-earth-asia,[m
[32m+[m[32m.fa-globe-asia {[m
[32m+[m[32m  --fa: "\f57e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grimace,[m
[32m+[m[32m.fa-grimace {[m
[32m+[m[32m  --fa: "\f57f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin,[m
[32m+[m[32m.fa-grin {[m
[32m+[m[32m  --fa: "\f580";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-wide,[m
[32m+[m[32m.fa-grin-alt {[m
[32m+[m[32m  --fa: "\f581";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-beam,[m
[32m+[m[32m.fa-grin-beam {[m
[32m+[m[32m  --fa: "\f582";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-beam-sweat,[m
[32m+[m[32m.fa-grin-beam-sweat {[m
[32m+[m[32m  --fa: "\f583";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-hearts,[m
[32m+[m[32m.fa-grin-hearts {[m
[32m+[m[32m  --fa: "\f584";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-squint,[m
[32m+[m[32m.fa-grin-squint {[m
[32m+[m[32m  --fa: "\f585";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-squint-tears,[m
[32m+[m[32m.fa-grin-squint-tears {[m
[32m+[m[32m  --fa: "\f586";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-stars,[m
[32m+[m[32m.fa-grin-stars {[m
[32m+[m[32m  --fa: "\f587";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-tears,[m
[32m+[m[32m.fa-grin-tears {[m
[32m+[m[32m  --fa: "\f588";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-tongue,[m
[32m+[m[32m.fa-grin-tongue {[m
[32m+[m[32m  --fa: "\f589";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-tongue-squint,[m
[32m+[m[32m.fa-grin-tongue-squint {[m
[32m+[m[32m  --fa: "\f58a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-tongue-wink,[m
[32m+[m[32m.fa-grin-tongue-wink {[m
[32m+[m[32m  --fa: "\f58b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-grin-wink,[m
[32m+[m[32m.fa-grin-wink {[m
[32m+[m[32m  --fa: "\f58c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-grid-horizontal,[m
[32m+[m[32m.fa-grip,[m
[32m+[m[32m.fa-grip-horizontal {[m
[32m+[m[32m  --fa: "\f58d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-grid-vertical,[m
[32m+[m[32m.fa-grip-vertical {[m
[32m+[m[32m  --fa: "\f58e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-headset {[m
[32m+[m[32m  --fa: "\f590";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-highlighter {[m
[32m+[m[32m  --fa: "\f591";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hot-tub,[m
[32m+[m[32m.fa-hot-tub-person {[m
[32m+[m[32m  --fa: "\f593";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hotel {[m
[32m+[m[32m  --fa: "\f594";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-joint {[m
[32m+[m[32m  --fa: "\f595";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-kiss,[m
[32m+[m[32m.fa-kiss {[m
[32m+[m[32m  --fa: "\f596";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-kiss-beam,[m
[32m+[m[32m.fa-kiss-beam {[m
[32m+[m[32m  --fa: "\f597";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-kiss-wink-heart,[m
[32m+[m[32m.fa-kiss-wink-heart {[m
[32m+[m[32m  --fa: "\f598";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-laugh,[m
[32m+[m[32m.fa-laugh {[m
[32m+[m[32m  --fa: "\f599";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-laugh-beam,[m
[32m+[m[32m.fa-laugh-beam {[m
[32m+[m[32m  --fa: "\f59a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-laugh-squint,[m
[32m+[m[32m.fa-laugh-squint {[m
[32m+[m[32m  --fa: "\f59b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-laugh-wink,[m
[32m+[m[32m.fa-laugh-wink {[m
[32m+[m[32m  --fa: "\f59c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cart-flatbed-suitcase,[m
[32m+[m[32m.fa-luggage-cart {[m
[32m+[m[32m  --fa: "\f59d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-map-location,[m
[32m+[m[32m.fa-map-marked {[m
[32m+[m[32m  --fa: "\f59f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-map-location-dot,[m
[32m+[m[32m.fa-map-marked-alt {[m
[32m+[m[32m  --fa: "\f5a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-marker {[m
[32m+[m[32m  --fa: "\f5a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-medal {[m
[32m+[m[32m  --fa: "\f5a2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-meh-blank,[m
[32m+[m[32m.fa-meh-blank {[m
[32m+[m[32m  --fa: "\f5a4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-rolling-eyes,[m
[32m+[m[32m.fa-meh-rolling-eyes {[m
[32m+[m[32m  --fa: "\f5a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-monument {[m
[32m+[m[32m  --fa: "\f5a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mortar-pestle {[m
[32m+[m[32m  --fa: "\f5a7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paint-roller {[m
[32m+[m[32m  --fa: "\f5aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-passport {[m
[32m+[m[32m  --fa: "\f5ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pen-fancy {[m
[32m+[m[32m  --fa: "\f5ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pen-nib {[m
[32m+[m[32m  --fa: "\f5ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pen-ruler,[m
[32m+[m[32m.fa-pencil-ruler {[m
[32m+[m[32m  --fa: "\f5ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-arrival {[m
[32m+[m[32m  --fa: "\f5af";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-plane-departure {[m
[32m+[m[32m  --fa: "\f5b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-prescription {[m
[32m+[m[32m  --fa: "\f5b1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-sad-cry,[m
[32m+[m[32m.fa-sad-cry {[m
[32m+[m[32m  --fa: "\f5b3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-sad-tear,[m
[32m+[m[32m.fa-sad-tear {[m
[32m+[m[32m  --fa: "\f5b4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shuttle-van,[m
[32m+[m[32m.fa-van-shuttle {[m
[32m+[m[32m  --fa: "\f5b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-signature {[m
[32m+[m[32m  --fa: "\f5b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-smile-beam,[m
[32m+[m[32m.fa-smile-beam {[m
[32m+[m[32m  --fa: "\f5b8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-solar-panel {[m
[32m+[m[32m  --fa: "\f5ba";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spa {[m
[32m+[m[32m  --fa: "\f5bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-splotch {[m
[32m+[m[32m  --fa: "\f5bc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spray-can {[m
[32m+[m[32m  --fa: "\f5bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stamp {[m
[32m+[m[32m  --fa: "\f5bf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-star-half-alt,[m
[32m+[m[32m.fa-star-half-stroke {[m
[32m+[m[32m  --fa: "\f5c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-suitcase-rolling {[m
[32m+[m[32m  --fa: "\f5c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-surprise,[m
[32m+[m[32m.fa-surprise {[m
[32m+[m[32m  --fa: "\f5c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-swatchbook {[m
[32m+[m[32m  --fa: "\f5c3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-swimming,[m
[32m+[m[32m.fa-swimmer {[m
[32m+[m[32m  --fa: "\f5c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ladder-water,[m
[32m+[m[32m.fa-swimming-pool,[m
[32m+[m[32m.fa-water-ladder {[m
[32m+[m[32m  --fa: "\f5c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-droplet-slash,[m
[32m+[m[32m.fa-tint-slash {[m
[32m+[m[32m  --fa: "\f5c7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-face-tired,[m
[32m+[m[32m.fa-tired {[m
[32m+[m[32m  --fa: "\f5c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tooth {[m
[32m+[m[32m  --fa: "\f5c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-umbrella-beach {[m
[32m+[m[32m  --fa: "\f5ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-weight-hanging {[m
[32m+[m[32m  --fa: "\f5cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wine-glass-alt,[m
[32m+[m[32m.fa-wine-glass-empty {[m
[32m+[m[32m  --fa: "\f5ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-air-freshener,[m
[32m+[m[32m.fa-spray-can-sparkles {[m
[32m+[m[32m  --fa: "\f5d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-apple-alt,[m
[32m+[m[32m.fa-apple-whole {[m
[32m+[m[32m  --fa: "\f5d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-atom {[m
[32m+[m[32m  --fa: "\f5d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bone {[m
[32m+[m[32m  --fa: "\f5d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-open-reader,[m
[32m+[m[32m.fa-book-reader {[m
[32m+[m[32m  --fa: "\f5da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-brain {[m
[32m+[m[32m  --fa: "\f5dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-car-alt,[m
[32m+[m[32m.fa-car-rear {[m
[32m+[m[32m  --fa: "\f5de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battery-car,[m
[32m+[m[32m.fa-car-battery {[m
[32m+[m[32m  --fa: "\f5df";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-car-burst,[m
[32m+[m[32m.fa-car-crash {[m
[32m+[m[32m  --fa: "\f5e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-car-side {[m
[32m+[m[32m  --fa: "\f5e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-charging-station {[m
[32m+[m[32m  --fa: "\f5e7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diamond-turn-right,[m
[32m+[m[32m.fa-directions {[m
[32m+[m[32m  --fa: "\f5eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-draw-polygon,[m
[32m+[m[32m.fa-vector-polygon {[m
[32m+[m[32m  --fa: "\f5ee";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-laptop-code {[m
[32m+[m[32m  --fa: "\f5fc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-layer-group {[m
[32m+[m[32m  --fa: "\f5fd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-location,[m
[32m+[m[32m.fa-location-crosshairs {[m
[32m+[m[32m  --fa: "\f601";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lungs {[m
[32m+[m[32m  --fa: "\f604";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microscope {[m
[32m+[m[32m  --fa: "\f610";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-oil-can {[m
[32m+[m[32m  --fa: "\f613";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-poop {[m
[32m+[m[32m  --fa: "\f619";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shapes,[m
[32m+[m[32m.fa-triangle-circle-square {[m
[32m+[m[32m  --fa: "\f61f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-star-of-life {[m
[32m+[m[32m  --fa: "\f621";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dashboard,[m
[32m+[m[32m.fa-gauge,[m
[32m+[m[32m.fa-gauge-med,[m
[32m+[m[32m.fa-tachometer-alt-average {[m
[32m+[m[32m  --fa: "\f624";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gauge-high,[m
[32m+[m[32m.fa-tachometer-alt,[m
[32m+[m[32m.fa-tachometer-alt-fast {[m
[32m+[m[32m  --fa: "\f625";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gauge-simple,[m
[32m+[m[32m.fa-gauge-simple-med,[m
[32m+[m[32m.fa-tachometer-average {[m
[32m+[m[32m  --fa: "\f629";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gauge-simple-high,[m
[32m+[m[32m.fa-tachometer,[m
[32m+[m[32m.fa-tachometer-fast {[m
[32m+[m[32m  --fa: "\f62a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-teeth {[m
[32m+[m[32m  --fa: "\f62e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-teeth-open {[m
[32m+[m[32m  --fa: "\f62f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-masks-theater,[m
[32m+[m[32m.fa-theater-masks {[m
[32m+[m[32m  --fa: "\f630";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-traffic-light {[m
[32m+[m[32m  --fa: "\f637";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-monster {[m
[32m+[m[32m  --fa: "\f63b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-truck-pickup {[m
[32m+[m[32m  --fa: "\f63c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ad,[m
[32m+[m[32m.fa-rectangle-ad {[m
[32m+[m[32m  --fa: "\f641";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ankh {[m
[32m+[m[32m  --fa: "\f644";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bible,[m
[32m+[m[32m.fa-book-bible {[m
[32m+[m[32m  --fa: "\f647";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-briefcase-clock,[m
[32m+[m[32m.fa-business-time {[m
[32m+[m[32m  --fa: "\f64a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-city {[m
[32m+[m[32m  --fa: "\f64f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-dollar {[m
[32m+[m[32m  --fa: "\f651";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comments-dollar {[m
[32m+[m[32m  --fa: "\f653";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cross {[m
[32m+[m[32m  --fa: "\f654";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dharmachakra {[m
[32m+[m[32m  --fa: "\f655";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envelope-open-text {[m
[32m+[m[32m  --fa: "\f658";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-folder-minus {[m
[32m+[m[32m  --fa: "\f65d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-folder-plus {[m
[32m+[m[32m  --fa: "\f65e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-filter-circle-dollar,[m
[32m+[m[32m.fa-funnel-dollar {[m
[32m+[m[32m  --fa: "\f662";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gopuram {[m
[32m+[m[32m  --fa: "\f664";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hamsa {[m
[32m+[m[32m  --fa: "\f665";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bahai,[m
[32m+[m[32m.fa-haykal {[m
[32m+[m[32m  --fa: "\f666";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jedi {[m
[32m+[m[32m  --fa: "\f669";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-journal-whills,[m
[32m+[m[32m.fa-journal-whills {[m
[32m+[m[32m  --fa: "\f66a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kaaba {[m
[32m+[m[32m  --fa: "\f66b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-khanda {[m
[32m+[m[32m  --fa: "\f66d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-landmark {[m
[32m+[m[32m  --fa: "\f66f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envelopes-bulk,[m
[32m+[m[32m.fa-mail-bulk {[m
[32m+[m[32m  --fa: "\f674";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-menorah {[m
[32m+[m[32m  --fa: "\f676";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mosque {[m
[32m+[m[32m  --fa: "\f678";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-om {[m
[32m+[m[32m  --fa: "\f679";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pastafarianism,[m
[32m+[m[32m.fa-spaghetti-monster-flying {[m
[32m+[m[32m  --fa: "\f67b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-peace {[m
[32m+[m[32m  --fa: "\f67c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-place-of-worship {[m
[32m+[m[32m  --fa: "\f67f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-poll,[m
[32m+[m[32m.fa-square-poll-vertical {[m
[32m+[m[32m  --fa: "\f681";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-poll-h,[m
[32m+[m[32m.fa-square-poll-horizontal {[m
[32m+[m[32m  --fa: "\f682";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-praying,[m
[32m+[m[32m.fa-pray {[m
[32m+[m[32m  --fa: "\f683";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hands-praying,[m
[32m+[m[32m.fa-praying-hands {[m
[32m+[m[32m  --fa: "\f684";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-quran,[m
[32m+[m[32m.fa-quran {[m
[32m+[m[32m  --fa: "\f687";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass-dollar,[m
[32m+[m[32m.fa-search-dollar {[m
[32m+[m[32m  --fa: "\f688";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magnifying-glass-location,[m
[32m+[m[32m.fa-search-location {[m
[32m+[m[32m  --fa: "\f689";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-socks {[m
[32m+[m[32m  --fa: "\f696";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-root-alt,[m
[32m+[m[32m.fa-square-root-variable {[m
[32m+[m[32m  --fa: "\f698";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-star-and-crescent {[m
[32m+[m[32m  --fa: "\f699";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-star-of-david {[m
[32m+[m[32m  --fa: "\f69a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-synagogue {[m
[32m+[m[32m  --fa: "\f69b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-scroll-torah,[m
[32m+[m[32m.fa-torah {[m
[32m+[m[32m  --fa: "\f6a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-torii-gate {[m
[32m+[m[32m  --fa: "\f6a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vihara {[m
[32m+[m[32m  --fa: "\f6a7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volume,[m
[32m+[m[32m.fa-volume-medium {[m
[32m+[m[32m  --fa: "\f6a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volume-mute,[m
[32m+[m[32m.fa-volume-times,[m
[32m+[m[32m.fa-volume-xmark {[m
[32m+[m[32m  --fa: "\f6a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yin-yang {[m
[32m+[m[32m  --fa: "\f6ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blender-phone {[m
[32m+[m[32m  --fa: "\f6b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-dead,[m
[32m+[m[32m.fa-book-skull {[m
[32m+[m[32m  --fa: "\f6b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-campground {[m
[32m+[m[32m  --fa: "\f6bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cat {[m
[32m+[m[32m  --fa: "\f6be";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chair {[m
[32m+[m[32m  --fa: "\f6c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-moon {[m
[32m+[m[32m  --fa: "\f6c3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-sun {[m
[32m+[m[32m  --fa: "\f6c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cow {[m
[32m+[m[32m  --fa: "\f6c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-d20 {[m
[32m+[m[32m  --fa: "\f6cf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dice-d6 {[m
[32m+[m[32m  --fa: "\f6d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dog {[m
[32m+[m[32m  --fa: "\f6d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dragon {[m
[32m+[m[32m  --fa: "\f6d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-drumstick-bite {[m
[32m+[m[32m  --fa: "\f6d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dungeon {[m
[32m+[m[32m  --fa: "\f6d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-file-csv {[m
[32m+[m[32m  --fa: "\f6dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fist-raised,[m
[32m+[m[32m.fa-hand-fist {[m
[32m+[m[32m  --fa: "\f6de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ghost {[m
[32m+[m[32m  --fa: "\f6e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hammer {[m
[32m+[m[32m  --fa: "\f6e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hanukiah {[m
[32m+[m[32m  --fa: "\f6e6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hat-wizard {[m
[32m+[m[32m  --fa: "\f6e8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hiking,[m
[32m+[m[32m.fa-person-hiking {[m
[32m+[m[32m  --fa: "\f6ec";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hippo {[m
[32m+[m[32m  --fa: "\f6ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-horse {[m
[32m+[m[32m  --fa: "\f6f0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-house-chimney-crack,[m
[32m+[m[32m.fa-house-damage {[m
[32m+[m[32m  --fa: "\f6f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hryvnia,[m
[32m+[m[32m.fa-hryvnia-sign {[m
[32m+[m[32m  --fa: "\f6f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mask {[m
[32m+[m[32m  --fa: "\f6fa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mountain {[m
[32m+[m[32m  --fa: "\f6fc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-network-wired {[m
[32m+[m[32m  --fa: "\f6ff";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-otter {[m
[32m+[m[32m  --fa: "\f700";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ring {[m
[32m+[m[32m  --fa: "\f70b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-running,[m
[32m+[m[32m.fa-running {[m
[32m+[m[32m  --fa: "\f70c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-scroll {[m
[32m+[m[32m  --fa: "\f70e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-skull-crossbones {[m
[32m+[m[32m  --fa: "\f714";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-slash {[m
[32m+[m[32m  --fa: "\f715";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spider {[m
[32m+[m[32m  --fa: "\f717";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toilet-paper,[m
[32m+[m[32m.fa-toilet-paper-alt,[m
[32m+[m[32m.fa-toilet-paper-blank {[m
[32m+[m[32m  --fa: "\f71e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tractor {[m
[32m+[m[32m  --fa: "\f722";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-injured {[m
[32m+[m[32m  --fa: "\f728";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vr-cardboard {[m
[32m+[m[32m  --fa: "\f729";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wand-sparkles {[m
[32m+[m[32m  --fa: "\f72b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wind {[m
[32m+[m[32m  --fa: "\f72e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wine-bottle {[m
[32m+[m[32m  --fa: "\f72f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-meatball {[m
[32m+[m[32m  --fa: "\f73b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-moon-rain {[m
[32m+[m[32m  --fa: "\f73c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-rain {[m
[32m+[m[32m  --fa: "\f73d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-showers-heavy {[m
[32m+[m[32m  --fa: "\f740";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-sun-rain {[m
[32m+[m[32m  --fa: "\f743";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-democrat {[m
[32m+[m[32m  --fa: "\f747";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flag-usa {[m
[32m+[m[32m  --fa: "\f74d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hurricane {[m
[32m+[m[32m  --fa: "\f751";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-landmark-alt,[m
[32m+[m[32m.fa-landmark-dome {[m
[32m+[m[32m  --fa: "\f752";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-meteor {[m
[32m+[m[32m  --fa: "\f753";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-booth {[m
[32m+[m[32m  --fa: "\f756";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-poo-bolt,[m
[32m+[m[32m.fa-poo-storm {[m
[32m+[m[32m  --fa: "\f75a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rainbow {[m
[32m+[m[32m  --fa: "\f75b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-republican {[m
[32m+[m[32m  --fa: "\f75e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-smog {[m
[32m+[m[32m  --fa: "\f75f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-high {[m
[32m+[m[32m  --fa: "\f769";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-temperature-low {[m
[32m+[m[32m  --fa: "\f76b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloud-bolt,[m
[32m+[m[32m.fa-thunderstorm {[m
[32m+[m[32m  --fa: "\f76c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tornado {[m
[32m+[m[32m  --fa: "\f76f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-volcano {[m
[32m+[m[32m  --fa: "\f770";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-check-to-slot,[m
[32m+[m[32m.fa-vote-yea {[m
[32m+[m[32m  --fa: "\f772";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-water {[m
[32m+[m[32m  --fa: "\f773";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-baby {[m
[32m+[m[32m  --fa: "\f77c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-baby-carriage,[m
[32m+[m[32m.fa-carriage-baby {[m
[32m+[m[32m  --fa: "\f77d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-biohazard {[m
[32m+[m[32m  --fa: "\f780";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blog {[m
[32m+[m[32m  --fa: "\f781";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-day {[m
[32m+[m[32m  --fa: "\f783";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-calendar-week {[m
[32m+[m[32m  --fa: "\f784";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-candy-cane {[m
[32m+[m[32m  --fa: "\f786";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-carrot {[m
[32m+[m[32m  --fa: "\f787";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cash-register {[m
[32m+[m[32m  --fa: "\f788";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-compress-arrows-alt,[m
[32m+[m[32m.fa-minimize {[m
[32m+[m[32m  --fa: "\f78c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dumpster {[m
[32m+[m[32m  --fa: "\f793";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dumpster-fire {[m
[32m+[m[32m  --fa: "\f794";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ethernet {[m
[32m+[m[32m  --fa: "\f796";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gifts {[m
[32m+[m[32m  --fa: "\f79c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-champagne-glasses,[m
[32m+[m[32m.fa-glass-cheers {[m
[32m+[m[32m  --fa: "\f79f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glass-whiskey,[m
[32m+[m[32m.fa-whiskey-glass {[m
[32m+[m[32m  --fa: "\f7a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-earth-europe,[m
[32m+[m[32m.fa-globe-europe {[m
[32m+[m[32m  --fa: "\f7a2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-grip-lines {[m
[32m+[m[32m  --fa: "\f7a4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-grip-lines-vertical {[m
[32m+[m[32m  --fa: "\f7a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-guitar {[m
[32m+[m[32m  --fa: "\f7a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-broken,[m
[32m+[m[32m.fa-heart-crack {[m
[32m+[m[32m  --fa: "\f7a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-holly-berry {[m
[32m+[m[32m  --fa: "\f7aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-horse-head {[m
[32m+[m[32m  --fa: "\f7ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-icicles {[m
[32m+[m[32m  --fa: "\f7ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-igloo {[m
[32m+[m[32m  --fa: "\f7ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mitten {[m
[32m+[m[32m  --fa: "\f7b5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mug-hot {[m
[32m+[m[32m  --fa: "\f7b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-radiation {[m
[32m+[m[32m  --fa: "\f7b9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-radiation,[m
[32m+[m[32m.fa-radiation-alt {[m
[32m+[m[32m  --fa: "\f7ba";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-restroom {[m
[32m+[m[32m  --fa: "\f7bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-satellite {[m
[32m+[m[32m  --fa: "\f7bf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-satellite-dish {[m
[32m+[m[32m  --fa: "\f7c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sd-card {[m
[32m+[m[32m  --fa: "\f7c2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sim-card {[m
[32m+[m[32m  --fa: "\f7c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-skating,[m
[32m+[m[32m.fa-skating {[m
[32m+[m[32m  --fa: "\f7c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-skiing,[m
[32m+[m[32m.fa-skiing {[m
[32m+[m[32m  --fa: "\f7c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-skiing-nordic,[m
[32m+[m[32m.fa-skiing-nordic {[m
[32m+[m[32m  --fa: "\f7ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sleigh {[m
[32m+[m[32m  --fa: "\f7cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-sms,[m
[32m+[m[32m.fa-sms {[m
[32m+[m[32m  --fa: "\f7cd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-person-snowboarding,[m
[32m+[m[32m.fa-snowboarding {[m
[32m+[m[32m  --fa: "\f7ce";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-snowman {[m
[32m+[m[32m  --fa: "\f7d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-snowplow {[m
[32m+[m[32m  --fa: "\f7d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tenge,[m
[32m+[m[32m.fa-tenge-sign {[m
[32m+[m[32m  --fa: "\f7d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-toilet {[m
[32m+[m[32m  --fa: "\f7d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-screwdriver-wrench,[m
[32m+[m[32m.fa-tools {[m
[32m+[m[32m  --fa: "\f7d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cable-car,[m
[32m+[m[32m.fa-tram {[m
[32m+[m[32m  --fa: "\f7da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fire-alt,[m
[32m+[m[32m.fa-fire-flame-curved {[m
[32m+[m[32m  --fa: "\f7e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bacon {[m
[32m+[m[32m  --fa: "\f7e5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-medical {[m
[32m+[m[32m  --fa: "\f7e6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bread-slice {[m
[32m+[m[32m  --fa: "\f7ec";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cheese {[m
[32m+[m[32m  --fa: "\f7ef";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clinic-medical,[m
[32m+[m[32m.fa-house-chimney-medical {[m
[32m+[m[32m  --fa: "\f7f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-clipboard-user {[m
[32m+[m[32m  --fa: "\f7f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-comment-medical {[m
[32m+[m[32m  --fa: "\f7f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-crutch {[m
[32m+[m[32m  --fa: "\f7f7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-disease {[m
[32m+[m[32m  --fa: "\f7fa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-egg {[m
[32m+[m[32m  --fa: "\f7fb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-folder-tree {[m
[32m+[m[32m  --fa: "\f802";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-burger,[m
[32m+[m[32m.fa-hamburger {[m
[32m+[m[32m  --fa: "\f805";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hand-middle-finger {[m
[32m+[m[32m  --fa: "\f806";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hard-hat,[m
[32m+[m[32m.fa-hat-hard,[m
[32m+[m[32m.fa-helmet-safety {[m
[32m+[m[32m  --fa: "\f807";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hospital-user {[m
[32m+[m[32m  --fa: "\f80d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hotdog {[m
[32m+[m[32m  --fa: "\f80f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ice-cream {[m
[32m+[m[32m  --fa: "\f810";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-laptop-medical {[m
[32m+[m[32m  --fa: "\f812";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pager {[m
[32m+[m[32m  --fa: "\f815";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pepper-hot {[m
[32m+[m[32m  --fa: "\f816";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pizza-slice {[m
[32m+[m[32m  --fa: "\f818";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sack-dollar {[m
[32m+[m[32m  --fa: "\f81d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-book-tanakh,[m
[32m+[m[32m.fa-tanakh {[m
[32m+[m[32m  --fa: "\f827";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bars-progress,[m
[32m+[m[32m.fa-tasks-alt {[m
[32m+[m[32m  --fa: "\f828";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trash-arrow-up,[m
[32m+[m[32m.fa-trash-restore {[m
[32m+[m[32m  --fa: "\f829";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trash-can-arrow-up,[m
[32m+[m[32m.fa-trash-restore-alt {[m
[32m+[m[32m  --fa: "\f82a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-user-nurse {[m
[32m+[m[32m  --fa: "\f82f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wave-square {[m
[32m+[m[32m  --fa: "\f83e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-biking,[m
[32m+[m[32m.fa-person-biking {[m
[32m+[m[32m  --fa: "\f84a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-border-all {[m
[32m+[m[32m  --fa: "\f84c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-border-none {[m
[32m+[m[32m  --fa: "\f850";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-border-style,[m
[32m+[m[32m.fa-border-top-left {[m
[32m+[m[32m  --fa: "\f853";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-digging,[m
[32m+[m[32m.fa-person-digging {[m
[32m+[m[32m  --fa: "\f85e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fan {[m
[32m+[m[32m  --fa: "\f863";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-heart-music-camera-bolt,[m
[32m+[m[32m.fa-icons {[m
[32m+[m[32m  --fa: "\f86d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phone-alt,[m
[32m+[m[32m.fa-phone-flip {[m
[32m+[m[32m  --fa: "\f879";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phone-square-alt,[m
[32m+[m[32m.fa-square-phone-flip {[m
[32m+[m[32m  --fa: "\f87b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-photo-film,[m
[32m+[m[32m.fa-photo-video {[m
[32m+[m[32m  --fa: "\f87c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-remove-format,[m
[32m+[m[32m.fa-text-slash {[m
[32m+[m[32m  --fa: "\f87d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-z-a,[m
[32m+[m[32m.fa-sort-alpha-desc,[m
[32m+[m[32m.fa-sort-alpha-down-alt {[m
[32m+[m[32m  --fa: "\f881";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-z-a,[m
[32m+[m[32m.fa-sort-alpha-up-alt {[m
[32m+[m[32m  --fa: "\f882";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-short-wide,[m
[32m+[m[32m.fa-sort-amount-desc,[m
[32m+[m[32m.fa-sort-amount-down-alt {[m
[32m+[m[32m  --fa: "\f884";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-short-wide,[m
[32m+[m[32m.fa-sort-amount-up-alt {[m
[32m+[m[32m  --fa: "\f885";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-down-9-1,[m
[32m+[m[32m.fa-sort-numeric-desc,[m
[32m+[m[32m.fa-sort-numeric-down-alt {[m
[32m+[m[32m  --fa: "\f886";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arrow-up-9-1,[m
[32m+[m[32m.fa-sort-numeric-up-alt {[m
[32m+[m[32m  --fa: "\f887";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spell-check {[m
[32m+[m[32m  --fa: "\f891";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-voicemail {[m
[32m+[m[32m  --fa: "\f897";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hat-cowboy {[m
[32m+[m[32m  --fa: "\f8c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hat-cowboy-side {[m
[32m+[m[32m  --fa: "\f8c1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-computer-mouse,[m
[32m+[m[32m.fa-mouse {[m
[32m+[m[32m  --fa: "\f8cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-radio {[m
[32m+[m[32m  --fa: "\f8d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-record-vinyl {[m
[32m+[m[32m  --fa: "\f8d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-walkie-talkie {[m
[32m+[m[32m  --fa: "\f8ef";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-caravan {[m
[32m+[m[32m  --fa: "\f8ff";[m
[32m+[m[32m}[m
[32m+[m[32m:host,[m
[32m+[m[32m:root {[m
[32m+[m[32m  --fa-family-brands: "Font Awesome 7 Brands";[m
[32m+[m[32m  --fa-font-brands: normal 400 1em/1 var(--fa-family-brands);[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "Font Awesome 7 Brands";[m
[32m+[m[32m  font-style: normal;[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-brands-400.woff2);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-brands,[m
[32m+[m[32m.fa-classic.fa-brands,[m
[32m+[m[32m.fab {[m
[32m+[m[32m  --fa-family: var(--fa-family-brands);[m
[32m+[m[32m  --fa-style: 400;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-firefox-browser {[m
[32m+[m[32m  --fa: "\e007";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ideal {[m
[32m+[m[32m  --fa: "\e013";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microblog {[m
[32m+[m[32m  --fa: "\e01a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pied-piper-square,[m
[32m+[m[32m.fa-square-pied-piper {[m
[32m+[m[32m  --fa: "\e01e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-unity {[m
[32m+[m[32m  --fa: "\e049";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dailymotion {[m
[32m+[m[32m  --fa: "\e052";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-instagram-square,[m
[32m+[m[32m.fa-square-instagram {[m
[32m+[m[32m  --fa: "\e055";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mixer {[m
[32m+[m[32m  --fa: "\e056";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shopify {[m
[32m+[m[32m  --fa: "\e057";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-deezer {[m
[32m+[m[32m  --fa: "\e077";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-edge-legacy {[m
[32m+[m[32m  --fa: "\e078";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-pay {[m
[32m+[m[32m  --fa: "\e079";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rust {[m
[32m+[m[32m  --fa: "\e07a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tiktok {[m
[32m+[m[32m  --fa: "\e07b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-unsplash {[m
[32m+[m[32m  --fa: "\e07c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloudflare {[m
[32m+[m[32m  --fa: "\e07d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-guilded {[m
[32m+[m[32m  --fa: "\e07e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hive {[m
[32m+[m[32m  --fa: "\e07f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-42-group,[m
[32m+[m[32m.fa-innosoft {[m
[32m+[m[32m  --fa: "\e080";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-instalod {[m
[32m+[m[32m  --fa: "\e081";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-octopus-deploy {[m
[32m+[m[32m  --fa: "\e082";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-perbyte {[m
[32m+[m[32m  --fa: "\e083";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-uncharted {[m
[32m+[m[32m  --fa: "\e084";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-watchman-monitoring {[m
[32m+[m[32m  --fa: "\e087";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wodu {[m
[32m+[m[32m  --fa: "\e088";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wirsindhandwerk,[m
[32m+[m[32m.fa-wsh {[m
[32m+[m[32m  --fa: "\e2d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bots {[m
[32m+[m[32m  --fa: "\e340";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cmplid {[m
[32m+[m[32m  --fa: "\e360";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bilibili {[m
[32m+[m[32m  --fa: "\e3d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-golang {[m
[32m+[m[32m  --fa: "\e40f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pix {[m
[32m+[m[32m  --fa: "\e43a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sitrox {[m
[32m+[m[32m  --fa: "\e44a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hashnode {[m
[32m+[m[32m  --fa: "\e499";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-meta {[m
[32m+[m[32m  --fa: "\e49b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-padlet {[m
[32m+[m[32m  --fa: "\e4a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-nfc-directional {[m
[32m+[m[32m  --fa: "\e530";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-nfc-symbol {[m
[32m+[m[32m  --fa: "\e531";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-screenpal {[m
[32m+[m[32m  --fa: "\e570";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-space-awesome {[m
[32m+[m[32m  --fa: "\e5ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-font-awesome {[m
[32m+[m[32m  --fa: "\e5ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gitlab-square,[m
[32m+[m[32m.fa-square-gitlab {[m
[32m+[m[32m  --fa: "\e5ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-odysee {[m
[32m+[m[32m  --fa: "\e5c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stubber {[m
[32m+[m[32m  --fa: "\e5c7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-debian {[m
[32m+[m[32m  --fa: "\e60b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shoelace {[m
[32m+[m[32m  --fa: "\e60c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-threads {[m
[32m+[m[32m  --fa: "\e618";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-threads {[m
[32m+[m[32m  --fa: "\e619";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-x-twitter {[m
[32m+[m[32m  --fa: "\e61a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-x-twitter {[m
[32m+[m[32m  --fa: "\e61b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-opensuse {[m
[32m+[m[32m  --fa: "\e62b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-letterboxd {[m
[32m+[m[32m  --fa: "\e62d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-letterboxd {[m
[32m+[m[32m  --fa: "\e62e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mintbit {[m
[32m+[m[32m  --fa: "\e62f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-scholar {[m
[32m+[m[32m  --fa: "\e63b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-brave {[m
[32m+[m[32m  --fa: "\e63c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-brave-reverse {[m
[32m+[m[32m  --fa: "\e63d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pixiv {[m
[32m+[m[32m  --fa: "\e640";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-upwork {[m
[32m+[m[32m  --fa: "\e641";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-webflow {[m
[32m+[m[32m  --fa: "\e65c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-signal-messenger {[m
[32m+[m[32m  --fa: "\e663";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bluesky {[m
[32m+[m[32m  --fa: "\e671";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jxl {[m
[32m+[m[32m  --fa: "\e67b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-upwork {[m
[32m+[m[32m  --fa: "\e67c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-web-awesome {[m
[32m+[m[32m  --fa: "\e682";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-web-awesome {[m
[32m+[m[32m  --fa: "\e683";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-web-awesome-stroke {[m
[32m+[m[32m  --fa: "\e684";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dart-lang {[m
[32m+[m[32m  --fa: "\e693";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flutter {[m
[32m+[m[32m  --fa: "\e694";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-files-pinwheel {[m
[32m+[m[32m  --fa: "\e69f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-css {[m
[32m+[m[32m  --fa: "\e6a2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-bluesky {[m
[32m+[m[32m  --fa: "\e6a3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-openai {[m
[32m+[m[32m  --fa: "\e7cf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-linkedin {[m
[32m+[m[32m  --fa: "\e7d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cash-app {[m
[32m+[m[32m  --fa: "\e7d4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-disqus {[m
[32m+[m[32m  --fa: "\e7d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-11ty,[m
[32m+[m[32m.fa-eleventy {[m
[32m+[m[32m  --fa: "\e7d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kakao-talk {[m
[32m+[m[32m  --fa: "\e7d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-linktree {[m
[32m+[m[32m  --fa: "\e7d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-notion {[m
[32m+[m[32m  --fa: "\e7d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pandora {[m
[32m+[m[32m  --fa: "\e7da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pixelfed {[m
[32m+[m[32m  --fa: "\e7db";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tidal {[m
[32m+[m[32m  --fa: "\e7dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vsco {[m
[32m+[m[32m  --fa: "\e7dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-w3c {[m
[32m+[m[32m  --fa: "\e7de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lumon {[m
[32m+[m[32m  --fa: "\e7e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lumon-drop {[m
[32m+[m[32m  --fa: "\e7e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-figma {[m
[32m+[m[32m  --fa: "\e7e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tex {[m
[32m+[m[32m  --fa: "\e7ff";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-duolingo {[m
[32m+[m[32m  --fa: "\e812";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-supportnow {[m
[32m+[m[32m  --fa: "\e833";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tor-browser {[m
[32m+[m[32m  --fa: "\e838";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-typescript {[m
[32m+[m[32m  --fa: "\e840";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-deskpro {[m
[32m+[m[32m  --fa: "\e844";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-circle-zulip {[m
[32m+[m[32m  --fa: "\e851";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-julia {[m
[32m+[m[32m  --fa: "\e852";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-zulip {[m
[32m+[m[32m  --fa: "\e853";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-unison {[m
[32m+[m[32m  --fa: "\e854";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bgg,[m
[32m+[m[32m.fa-board-game-geek {[m
[32m+[m[32m  --fa: "\e855";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ko-fi {[m
[32m+[m[32m  --fa: "\e856";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kubernetes {[m
[32m+[m[32m  --fa: "\e857";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-postgresql {[m
[32m+[m[32m  --fa: "\e858";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-scaleway {[m
[32m+[m[32m  --fa: "\e859";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-venmo {[m
[32m+[m[32m  --fa: "\e85a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-venmo-v {[m
[32m+[m[32m  --fa: "\e85b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-unreal-engine {[m
[32m+[m[32m  --fa: "\e85c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-globaleaks {[m
[32m+[m[32m  --fa: "\e85d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-solana {[m
[32m+[m[32m  --fa: "\e85e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-threema {[m
[32m+[m[32m  --fa: "\e85f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-forgejo {[m
[32m+[m[32m  --fa: "\e860";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-claude {[m
[32m+[m[32m  --fa: "\e861";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gitee {[m
[32m+[m[32m  --fa: "\e863";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-xmpp {[m
[32m+[m[32m  --fa: "\e864";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fediverse {[m
[32m+[m[32m  --fa: "\e865";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tailwind-css {[m
[32m+[m[32m  --fa: "\e866";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-arch-linux {[m
[32m+[m[32m  --fa: "\e867";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-svelte {[m
[32m+[m[32m  --fa: "\e868";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hugging-face {[m
[32m+[m[32m  --fa: "\e869";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-leetcode {[m
[32m+[m[32m  --fa: "\e86a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-openstreetmap {[m
[32m+[m[32m  --fa: "\e86b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ultralytics {[m
[32m+[m[32m  --fa: "\e86d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ultralytics-hub {[m
[32m+[m[32m  --fa: "\e86e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ultralytics-yolo {[m
[32m+[m[32m  --fa: "\e86f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-obsidian {[m
[32m+[m[32m  --fa: "\e879";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-zoom {[m
[32m+[m[32m  --fa: "\e87b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vim {[m
[32m+[m[32m  --fa: "\e88a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-symfonycasts {[m
[32m+[m[32m  --fa: "\e8ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-twitter,[m
[32m+[m[32m.fa-twitter-square {[m
[32m+[m[32m  --fa: "\f081";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-facebook-square,[m
[32m+[m[32m.fa-square-facebook {[m
[32m+[m[32m  --fa: "\f082";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-linkedin {[m
[32m+[m[32m  --fa: "\f08c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-github-square,[m
[32m+[m[32m.fa-square-github {[m
[32m+[m[32m  --fa: "\f092";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-twitter {[m
[32m+[m[32m  --fa: "\f099";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-facebook {[m
[32m+[m[32m  --fa: "\f09a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-github {[m
[32m+[m[32m  --fa: "\f09b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pinterest {[m
[32m+[m[32m  --fa: "\f0d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pinterest-square,[m
[32m+[m[32m.fa-square-pinterest {[m
[32m+[m[32m  --fa: "\f0d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-plus-square,[m
[32m+[m[32m.fa-square-google-plus {[m
[32m+[m[32m  --fa: "\f0d4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-plus-g {[m
[32m+[m[32m  --fa: "\f0d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-linkedin-in {[m
[32m+[m[32m  --fa: "\f0e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-github-alt {[m
[32m+[m[32m  --fa: "\f113";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-maxcdn {[m
[32m+[m[32m  --fa: "\f136";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-html5 {[m
[32m+[m[32m  --fa: "\f13b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-css3 {[m
[32m+[m[32m  --fa: "\f13c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-btc {[m
[32m+[m[32m  --fa: "\f15a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-youtube {[m
[32m+[m[32m  --fa: "\f167";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-xing {[m
[32m+[m[32m  --fa: "\f168";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-xing,[m
[32m+[m[32m.fa-xing-square {[m
[32m+[m[32m  --fa: "\f169";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dropbox {[m
[32m+[m[32m  --fa: "\f16b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stack-overflow {[m
[32m+[m[32m  --fa: "\f16c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-instagram {[m
[32m+[m[32m  --fa: "\f16d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flickr {[m
[32m+[m[32m  --fa: "\f16e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-adn {[m
[32m+[m[32m  --fa: "\f170";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bitbucket {[m
[32m+[m[32m  --fa: "\f171";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tumblr {[m
[32m+[m[32m  --fa: "\f173";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-tumblr,[m
[32m+[m[32m.fa-tumblr-square {[m
[32m+[m[32m  --fa: "\f174";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-apple {[m
[32m+[m[32m  --fa: "\f179";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-windows {[m
[32m+[m[32m  --fa: "\f17a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-android {[m
[32m+[m[32m  --fa: "\f17b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-linux {[m
[32m+[m[32m  --fa: "\f17c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dribbble {[m
[32m+[m[32m  --fa: "\f17d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-skype {[m
[32m+[m[32m  --fa: "\f17e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-foursquare {[m
[32m+[m[32m  --fa: "\f180";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trello {[m
[32m+[m[32m  --fa: "\f181";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gratipay {[m
[32m+[m[32m  --fa: "\f184";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vk {[m
[32m+[m[32m  --fa: "\f189";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-weibo {[m
[32m+[m[32m  --fa: "\f18a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-renren {[m
[32m+[m[32m  --fa: "\f18b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pagelines {[m
[32m+[m[32m  --fa: "\f18c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stack-exchange {[m
[32m+[m[32m  --fa: "\f18d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-vimeo,[m
[32m+[m[32m.fa-vimeo-square {[m
[32m+[m[32m  --fa: "\f194";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-slack,[m
[32m+[m[32m.fa-slack-hash {[m
[32m+[m[32m  --fa: "\f198";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wordpress {[m
[32m+[m[32m  --fa: "\f19a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-openid {[m
[32m+[m[32m  --fa: "\f19b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yahoo {[m
[32m+[m[32m  --fa: "\f19e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google {[m
[32m+[m[32m  --fa: "\f1a0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-reddit {[m
[32m+[m[32m  --fa: "\f1a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-reddit-square,[m
[32m+[m[32m.fa-square-reddit {[m
[32m+[m[32m  --fa: "\f1a2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stumbleupon-circle {[m
[32m+[m[32m  --fa: "\f1a3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stumbleupon {[m
[32m+[m[32m  --fa: "\f1a4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-delicious {[m
[32m+[m[32m  --fa: "\f1a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-digg {[m
[32m+[m[32m  --fa: "\f1a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pied-piper-pp {[m
[32m+[m[32m  --fa: "\f1a7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pied-piper-alt {[m
[32m+[m[32m  --fa: "\f1a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-drupal {[m
[32m+[m[32m  --fa: "\f1a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-joomla {[m
[32m+[m[32m  --fa: "\f1aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-behance {[m
[32m+[m[32m  --fa: "\f1b4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-behance-square,[m
[32m+[m[32m.fa-square-behance {[m
[32m+[m[32m  --fa: "\f1b5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-steam {[m
[32m+[m[32m  --fa: "\f1b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-steam,[m
[32m+[m[32m.fa-steam-square {[m
[32m+[m[32m  --fa: "\f1b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-spotify {[m
[32m+[m[32m  --fa: "\f1bc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-deviantart {[m
[32m+[m[32m  --fa: "\f1bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-soundcloud {[m
[32m+[m[32m  --fa: "\f1be";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vine {[m
[32m+[m[32m  --fa: "\f1ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-codepen {[m
[32m+[m[32m  --fa: "\f1cb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jsfiddle {[m
[32m+[m[32m  --fa: "\f1cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rebel {[m
[32m+[m[32m  --fa: "\f1d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-empire {[m
[32m+[m[32m  --fa: "\f1d1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-git-square,[m
[32m+[m[32m.fa-square-git {[m
[32m+[m[32m  --fa: "\f1d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-git {[m
[32m+[m[32m  --fa: "\f1d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hacker-news {[m
[32m+[m[32m  --fa: "\f1d4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-tencent-weibo {[m
[32m+[m[32m  --fa: "\f1d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-qq {[m
[32m+[m[32m  --fa: "\f1d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-weixin {[m
[32m+[m[32m  --fa: "\f1d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-slideshare {[m
[32m+[m[32m  --fa: "\f1e7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-twitch {[m
[32m+[m[32m  --fa: "\f1e8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yelp {[m
[32m+[m[32m  --fa: "\f1e9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-paypal {[m
[32m+[m[32m  --fa: "\f1ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-wallet {[m
[32m+[m[32m  --fa: "\f1ee";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-visa {[m
[32m+[m[32m  --fa: "\f1f0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-mastercard {[m
[32m+[m[32m  --fa: "\f1f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-discover {[m
[32m+[m[32m  --fa: "\f1f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-amex {[m
[32m+[m[32m  --fa: "\f1f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-paypal {[m
[32m+[m[32m  --fa: "\f1f4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-stripe {[m
[32m+[m[32m  --fa: "\f1f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lastfm {[m
[32m+[m[32m  --fa: "\f202";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lastfm-square,[m
[32m+[m[32m.fa-square-lastfm {[m
[32m+[m[32m  --fa: "\f203";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ioxhost {[m
[32m+[m[32m  --fa: "\f208";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angellist {[m
[32m+[m[32m  --fa: "\f209";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-buysellads {[m
[32m+[m[32m  --fa: "\f20d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-connectdevelop {[m
[32m+[m[32m  --fa: "\f20e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dashcube {[m
[32m+[m[32m  --fa: "\f210";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-forumbee {[m
[32m+[m[32m  --fa: "\f211";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-leanpub {[m
[32m+[m[32m  --fa: "\f212";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sellsy {[m
[32m+[m[32m  --fa: "\f213";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shirtsinbulk {[m
[32m+[m[32m  --fa: "\f214";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-simplybuilt {[m
[32m+[m[32m  --fa: "\f215";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-skyatlas {[m
[32m+[m[32m  --fa: "\f216";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pinterest-p {[m
[32m+[m[32m  --fa: "\f231";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-whatsapp {[m
[32m+[m[32m  --fa: "\f232";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-viacoin {[m
[32m+[m[32m  --fa: "\f237";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-medium,[m
[32m+[m[32m.fa-medium-m {[m
[32m+[m[32m  --fa: "\f23a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-y-combinator {[m
[32m+[m[32m  --fa: "\f23b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-optin-monster {[m
[32m+[m[32m  --fa: "\f23c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-opencart {[m
[32m+[m[32m  --fa: "\f23d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-expeditedssl {[m
[32m+[m[32m  --fa: "\f23e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-jcb {[m
[32m+[m[32m  --fa: "\f24b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-diners-club {[m
[32m+[m[32m  --fa: "\f24c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons {[m
[32m+[m[32m  --fa: "\f25e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gg {[m
[32m+[m[32m  --fa: "\f260";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gg-circle {[m
[32m+[m[32m  --fa: "\f261";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-odnoklassniki {[m
[32m+[m[32m  --fa: "\f263";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-odnoklassniki-square,[m
[32m+[m[32m.fa-square-odnoklassniki {[m
[32m+[m[32m  --fa: "\f264";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-get-pocket {[m
[32m+[m[32m  --fa: "\f265";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wikipedia-w {[m
[32m+[m[32m  --fa: "\f266";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-safari {[m
[32m+[m[32m  --fa: "\f267";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chrome {[m
[32m+[m[32m  --fa: "\f268";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-firefox {[m
[32m+[m[32m  --fa: "\f269";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-opera {[m
[32m+[m[32m  --fa: "\f26a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-internet-explorer {[m
[32m+[m[32m  --fa: "\f26b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-contao {[m
[32m+[m[32m  --fa: "\f26d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-500px {[m
[32m+[m[32m  --fa: "\f26e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-amazon {[m
[32m+[m[32m  --fa: "\f270";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-houzz {[m
[32m+[m[32m  --fa: "\f27c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vimeo-v {[m
[32m+[m[32m  --fa: "\f27d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-black-tie {[m
[32m+[m[32m  --fa: "\f27e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fonticons {[m
[32m+[m[32m  --fa: "\f280";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-reddit-alien {[m
[32m+[m[32m  --fa: "\f281";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-edge {[m
[32m+[m[32m  --fa: "\f282";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-codiepie {[m
[32m+[m[32m  --fa: "\f284";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-modx {[m
[32m+[m[32m  --fa: "\f285";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fort-awesome {[m
[32m+[m[32m  --fa: "\f286";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-usb {[m
[32m+[m[32m  --fa: "\f287";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-product-hunt {[m
[32m+[m[32m  --fa: "\f288";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mixcloud {[m
[32m+[m[32m  --fa: "\f289";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-scribd {[m
[32m+[m[32m  --fa: "\f28a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bluetooth {[m
[32m+[m[32m  --fa: "\f293";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bluetooth-b {[m
[32m+[m[32m  --fa: "\f294";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gitlab {[m
[32m+[m[32m  --fa: "\f296";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wpbeginner {[m
[32m+[m[32m  --fa: "\f297";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wpforms {[m
[32m+[m[32m  --fa: "\f298";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-envira {[m
[32m+[m[32m  --fa: "\f299";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glide {[m
[32m+[m[32m  --fa: "\f2a5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-glide-g {[m
[32m+[m[32m  --fa: "\f2a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-viadeo {[m
[32m+[m[32m  --fa: "\f2a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-viadeo,[m
[32m+[m[32m.fa-viadeo-square {[m
[32m+[m[32m  --fa: "\f2aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-snapchat,[m
[32m+[m[32m.fa-snapchat-ghost {[m
[32m+[m[32m  --fa: "\f2ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-snapchat-square,[m
[32m+[m[32m.fa-square-snapchat {[m
[32m+[m[32m  --fa: "\f2ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pied-piper {[m
[32m+[m[32m  --fa: "\f2ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-first-order {[m
[32m+[m[32m  --fa: "\f2b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yoast {[m
[32m+[m[32m  --fa: "\f2b1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-themeisle {[m
[32m+[m[32m  --fa: "\f2b2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-plus {[m
[32m+[m[32m  --fa: "\f2b3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-font-awesome,[m
[32m+[m[32m.fa-font-awesome-flag,[m
[32m+[m[32m.fa-font-awesome-logo-full {[m
[32m+[m[32m  --fa: "\f2b4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-linode {[m
[32m+[m[32m  --fa: "\f2b8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-quora {[m
[32m+[m[32m  --fa: "\f2c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-free-code-camp {[m
[32m+[m[32m  --fa: "\f2c5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-telegram,[m
[32m+[m[32m.fa-telegram-plane {[m
[32m+[m[32m  --fa: "\f2c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bandcamp {[m
[32m+[m[32m  --fa: "\f2d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-grav {[m
[32m+[m[32m  --fa: "\f2d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-etsy {[m
[32m+[m[32m  --fa: "\f2d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-imdb {[m
[32m+[m[32m  --fa: "\f2d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ravelry {[m
[32m+[m[32m  --fa: "\f2d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sellcast {[m
[32m+[m[32m  --fa: "\f2da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-superpowers {[m
[32m+[m[32m  --fa: "\f2dd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wpexplorer {[m
[32m+[m[32m  --fa: "\f2de";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-meetup {[m
[32m+[m[32m  --fa: "\f2e0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-font-awesome-alt,[m
[32m+[m[32m.fa-square-font-awesome-stroke {[m
[32m+[m[32m  --fa: "\f35c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-accessible-icon {[m
[32m+[m[32m  --fa: "\f368";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-accusoft {[m
[32m+[m[32m  --fa: "\f369";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-adversal {[m
[32m+[m[32m  --fa: "\f36a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-affiliatetheme {[m
[32m+[m[32m  --fa: "\f36b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-algolia {[m
[32m+[m[32m  --fa: "\f36c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-amilia {[m
[32m+[m[32m  --fa: "\f36d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angrycreative {[m
[32m+[m[32m  --fa: "\f36e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-app-store {[m
[32m+[m[32m  --fa: "\f36f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-app-store-ios {[m
[32m+[m[32m  --fa: "\f370";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-apper {[m
[32m+[m[32m  --fa: "\f371";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-asymmetrik {[m
[32m+[m[32m  --fa: "\f372";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-audible {[m
[32m+[m[32m  --fa: "\f373";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-avianex {[m
[32m+[m[32m  --fa: "\f374";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-aws {[m
[32m+[m[32m  --fa: "\f375";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bimobject {[m
[32m+[m[32m  --fa: "\f378";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bitcoin {[m
[32m+[m[32m  --fa: "\f379";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bity {[m
[32m+[m[32m  --fa: "\f37a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blackberry {[m
[32m+[m[32m  --fa: "\f37b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blogger {[m
[32m+[m[32m  --fa: "\f37c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-blogger-b {[m
[32m+[m[32m  --fa: "\f37d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-buromobelexperte {[m
[32m+[m[32m  --fa: "\f37f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-centercode {[m
[32m+[m[32m  --fa: "\f380";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloudscale {[m
[32m+[m[32m  --fa: "\f383";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloudsmith {[m
[32m+[m[32m  --fa: "\f384";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cloudversify {[m
[32m+[m[32m  --fa: "\f385";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cpanel {[m
[32m+[m[32m  --fa: "\f388";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-css3-alt {[m
[32m+[m[32m  --fa: "\f38b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cuttlefish {[m
[32m+[m[32m  --fa: "\f38c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-d-and-d {[m
[32m+[m[32m  --fa: "\f38d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-deploydog {[m
[32m+[m[32m  --fa: "\f38e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-deskpro {[m
[32m+[m[32m  --fa: "\f38f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-digital-ocean {[m
[32m+[m[32m  --fa: "\f391";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-discord {[m
[32m+[m[32m  --fa: "\f392";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-discourse {[m
[32m+[m[32m  --fa: "\f393";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dochub {[m
[32m+[m[32m  --fa: "\f394";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-docker {[m
[32m+[m[32m  --fa: "\f395";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-draft2digital {[m
[32m+[m[32m  --fa: "\f396";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dribbble-square,[m
[32m+[m[32m.fa-square-dribbble {[m
[32m+[m[32m  --fa: "\f397";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dyalog {[m
[32m+[m[32m  --fa: "\f399";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-earlybirds {[m
[32m+[m[32m  --fa: "\f39a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-erlang {[m
[32m+[m[32m  --fa: "\f39d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-facebook-f {[m
[32m+[m[32m  --fa: "\f39e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-facebook-messenger {[m
[32m+[m[32m  --fa: "\f39f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-firstdraft {[m
[32m+[m[32m  --fa: "\f3a1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fonticons-fi {[m
[32m+[m[32m  --fa: "\f3a2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fort-awesome-alt {[m
[32m+[m[32m  --fa: "\f3a3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-freebsd {[m
[32m+[m[32m  --fa: "\f3a4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gitkraken {[m
[32m+[m[32m  --fa: "\f3a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gofore {[m
[32m+[m[32m  --fa: "\f3a7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-goodreads {[m
[32m+[m[32m  --fa: "\f3a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-goodreads-g {[m
[32m+[m[32m  --fa: "\f3a9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-drive {[m
[32m+[m[32m  --fa: "\f3aa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-google-play {[m
[32m+[m[32m  --fa: "\f3ab";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gripfire {[m
[32m+[m[32m  --fa: "\f3ac";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-grunt {[m
[32m+[m[32m  --fa: "\f3ad";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gulp {[m
[32m+[m[32m  --fa: "\f3ae";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hacker-news-square,[m
[32m+[m[32m.fa-square-hacker-news {[m
[32m+[m[32m  --fa: "\f3af";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hire-a-helper {[m
[32m+[m[32m  --fa: "\f3b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hotjar {[m
[32m+[m[32m  --fa: "\f3b1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hubspot {[m
[32m+[m[32m  --fa: "\f3b2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-itunes {[m
[32m+[m[32m  --fa: "\f3b4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-itunes-note {[m
[32m+[m[32m  --fa: "\f3b5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jenkins {[m
[32m+[m[32m  --fa: "\f3b6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-joget {[m
[32m+[m[32m  --fa: "\f3b7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-js {[m
[32m+[m[32m  --fa: "\f3b8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-js-square,[m
[32m+[m[32m.fa-square-js {[m
[32m+[m[32m  --fa: "\f3b9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-keycdn {[m
[32m+[m[32m  --fa: "\f3ba";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kickstarter,[m
[32m+[m[32m.fa-square-kickstarter {[m
[32m+[m[32m  --fa: "\f3bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kickstarter-k {[m
[32m+[m[32m  --fa: "\f3bc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-laravel {[m
[32m+[m[32m  --fa: "\f3bd";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-line {[m
[32m+[m[32m  --fa: "\f3c0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-lyft {[m
[32m+[m[32m  --fa: "\f3c3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-magento {[m
[32m+[m[32m  --fa: "\f3c4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-medapps {[m
[32m+[m[32m  --fa: "\f3c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-medrt {[m
[32m+[m[32m  --fa: "\f3c8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-microsoft {[m
[32m+[m[32m  --fa: "\f3ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mix {[m
[32m+[m[32m  --fa: "\f3cb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mizuni {[m
[32m+[m[32m  --fa: "\f3cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-monero {[m
[32m+[m[32m  --fa: "\f3d0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-napster {[m
[32m+[m[32m  --fa: "\f3d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-node-js {[m
[32m+[m[32m  --fa: "\f3d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-npm {[m
[32m+[m[32m  --fa: "\f3d4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ns8 {[m
[32m+[m[32m  --fa: "\f3d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-nutritionix {[m
[32m+[m[32m  --fa: "\f3d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-page4 {[m
[32m+[m[32m  --fa: "\f3d7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-palfed {[m
[32m+[m[32m  --fa: "\f3d8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-patreon {[m
[32m+[m[32m  --fa: "\f3d9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-periscope {[m
[32m+[m[32m  --fa: "\f3da";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phabricator {[m
[32m+[m[32m  --fa: "\f3db";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phoenix-framework {[m
[32m+[m[32m  --fa: "\f3dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-playstation {[m
[32m+[m[32m  --fa: "\f3df";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pushed {[m
[32m+[m[32m  --fa: "\f3e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-python {[m
[32m+[m[32m  --fa: "\f3e2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-red-river {[m
[32m+[m[32m  --fa: "\f3e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rendact,[m
[32m+[m[32m.fa-wpressr {[m
[32m+[m[32m  --fa: "\f3e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-replyd {[m
[32m+[m[32m  --fa: "\f3e6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-resolving {[m
[32m+[m[32m  --fa: "\f3e7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rocketchat {[m
[32m+[m[32m  --fa: "\f3e8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rockrms {[m
[32m+[m[32m  --fa: "\f3e9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-schlix {[m
[32m+[m[32m  --fa: "\f3ea";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-searchengin {[m
[32m+[m[32m  --fa: "\f3eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-servicestack {[m
[32m+[m[32m  --fa: "\f3ec";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sistrix {[m
[32m+[m[32m  --fa: "\f3ee";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-speakap {[m
[32m+[m[32m  --fa: "\f3f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-staylinked {[m
[32m+[m[32m  --fa: "\f3f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-steam-symbol {[m
[32m+[m[32m  --fa: "\f3f6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sticker-mule {[m
[32m+[m[32m  --fa: "\f3f7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-studiovinari {[m
[32m+[m[32m  --fa: "\f3f8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-supple {[m
[32m+[m[32m  --fa: "\f3f9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-uber {[m
[32m+[m[32m  --fa: "\f402";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-uikit {[m
[32m+[m[32m  --fa: "\f403";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-uniregistry {[m
[32m+[m[32m  --fa: "\f404";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-untappd {[m
[32m+[m[32m  --fa: "\f405";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ussunnah {[m
[32m+[m[32m  --fa: "\f407";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vaadin {[m
[32m+[m[32m  --fa: "\f408";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-viber {[m
[32m+[m[32m  --fa: "\f409";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vimeo {[m
[32m+[m[32m  --fa: "\f40a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vnv {[m
[32m+[m[32m  --fa: "\f40b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-whatsapp,[m
[32m+[m[32m.fa-whatsapp-square {[m
[32m+[m[32m  --fa: "\f40c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-whmcs {[m
[32m+[m[32m  --fa: "\f40d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wordpress-simple {[m
[32m+[m[32m  --fa: "\f411";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-xbox {[m
[32m+[m[32m  --fa: "\f412";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yandex {[m
[32m+[m[32m  --fa: "\f413";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yandex-international {[m
[32m+[m[32m  --fa: "\f414";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-apple-pay {[m
[32m+[m[32m  --fa: "\f415";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-apple-pay {[m
[32m+[m[32m  --fa: "\f416";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fly {[m
[32m+[m[32m  --fa: "\f417";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-node {[m
[32m+[m[32m  --fa: "\f419";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-osi {[m
[32m+[m[32m  --fa: "\f41a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-react {[m
[32m+[m[32m  --fa: "\f41b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-autoprefixer {[m
[32m+[m[32m  --fa: "\f41c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-less {[m
[32m+[m[32m  --fa: "\f41d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sass {[m
[32m+[m[32m  --fa: "\f41e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-vuejs {[m
[32m+[m[32m  --fa: "\f41f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-angular {[m
[32m+[m[32m  --fa: "\f420";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-aviato {[m
[32m+[m[32m  --fa: "\f421";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ember {[m
[32m+[m[32m  --fa: "\f423";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-gitter {[m
[32m+[m[32m  --fa: "\f426";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hooli {[m
[32m+[m[32m  --fa: "\f427";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-strava {[m
[32m+[m[32m  --fa: "\f428";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stripe {[m
[32m+[m[32m  --fa: "\f429";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stripe-s {[m
[32m+[m[32m  --fa: "\f42a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-typo3 {[m
[32m+[m[32m  --fa: "\f42b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-amazon-pay {[m
[32m+[m[32m  --fa: "\f42c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cc-amazon-pay {[m
[32m+[m[32m  --fa: "\f42d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ethereum {[m
[32m+[m[32m  --fa: "\f42e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-korvue {[m
[32m+[m[32m  --fa: "\f42f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-elementor {[m
[32m+[m[32m  --fa: "\f430";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-square-youtube,[m
[32m+[m[32m.fa-youtube-square {[m
[32m+[m[32m  --fa: "\f431";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-flipboard {[m
[32m+[m[32m  --fa: "\f44d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hips {[m
[32m+[m[32m  --fa: "\f452";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-php {[m
[32m+[m[32m  --fa: "\f457";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-quinscape {[m
[32m+[m[32m  --fa: "\f459";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-readme {[m
[32m+[m[32m  --fa: "\f4d5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-java {[m
[32m+[m[32m  --fa: "\f4e4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-pied-piper-hat {[m
[32m+[m[32m  --fa: "\f4e5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-by {[m
[32m+[m[32m  --fa: "\f4e7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-nc {[m
[32m+[m[32m  --fa: "\f4e8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-nc-eu {[m
[32m+[m[32m  --fa: "\f4e9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-nc-jp {[m
[32m+[m[32m  --fa: "\f4ea";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-nd {[m
[32m+[m[32m  --fa: "\f4eb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-pd {[m
[32m+[m[32m  --fa: "\f4ec";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-pd-alt {[m
[32m+[m[32m  --fa: "\f4ed";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-remix {[m
[32m+[m[32m  --fa: "\f4ee";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-sa {[m
[32m+[m[32m  --fa: "\f4ef";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-sampling {[m
[32m+[m[32m  --fa: "\f4f0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-sampling-plus {[m
[32m+[m[32m  --fa: "\f4f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-share {[m
[32m+[m[32m  --fa: "\f4f2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-creative-commons-zero {[m
[32m+[m[32m  --fa: "\f4f3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ebay {[m
[32m+[m[32m  --fa: "\f4f4";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-keybase {[m
[32m+[m[32m  --fa: "\f4f5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mastodon {[m
[32m+[m[32m  --fa: "\f4f6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-r-project {[m
[32m+[m[32m  --fa: "\f4f7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-researchgate {[m
[32m+[m[32m  --fa: "\f4f8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-teamspeak {[m
[32m+[m[32m  --fa: "\f4f9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-first-order-alt {[m
[32m+[m[32m  --fa: "\f50a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fulcrum {[m
[32m+[m[32m  --fa: "\f50b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-galactic-republic {[m
[32m+[m[32m  --fa: "\f50c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-galactic-senate {[m
[32m+[m[32m  --fa: "\f50d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jedi-order {[m
[32m+[m[32m  --fa: "\f50e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mandalorian {[m
[32m+[m[32m  --fa: "\f50f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-old-republic {[m
[32m+[m[32m  --fa: "\f510";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-phoenix-squadron {[m
[32m+[m[32m  --fa: "\f511";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sith {[m
[32m+[m[32m  --fa: "\f512";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-trade-federation {[m
[32m+[m[32m  --fa: "\f513";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wolf-pack-battalion {[m
[32m+[m[32m  --fa: "\f514";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hornbill {[m
[32m+[m[32m  --fa: "\f592";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mailchimp {[m
[32m+[m[32m  --fa: "\f59e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-megaport {[m
[32m+[m[32m  --fa: "\f5a3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-nimblr {[m
[32m+[m[32m  --fa: "\f5a8";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-rev {[m
[32m+[m[32m  --fa: "\f5b2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-shopware {[m
[32m+[m[32m  --fa: "\f5b5";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-squarespace {[m
[32m+[m[32m  --fa: "\f5be";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-themeco {[m
[32m+[m[32m  --fa: "\f5c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-weebly {[m
[32m+[m[32m  --fa: "\f5cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wix {[m
[32m+[m[32m  --fa: "\f5cf";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ello {[m
[32m+[m[32m  --fa: "\f5f1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-hackerrank {[m
[32m+[m[32m  --fa: "\f5f7";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-kaggle {[m
[32m+[m[32m  --fa: "\f5fa";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-markdown {[m
[32m+[m[32m  --fa: "\f60f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-neos {[m
[32m+[m[32m  --fa: "\f612";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-zhihu {[m
[32m+[m[32m  --fa: "\f63f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-alipay {[m
[32m+[m[32m  --fa: "\f642";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-the-red-yeti {[m
[32m+[m[32m  --fa: "\f69d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-critical-role {[m
[32m+[m[32m  --fa: "\f6c9";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-d-and-d-beyond {[m
[32m+[m[32m  --fa: "\f6ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dev {[m
[32m+[m[32m  --fa: "\f6cc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fantasy-flight-games {[m
[32m+[m[32m  --fa: "\f6dc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-wizards-of-the-coast {[m
[32m+[m[32m  --fa: "\f730";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-think-peaks {[m
[32m+[m[32m  --fa: "\f731";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-reacteurope {[m
[32m+[m[32m  --fa: "\f75d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-artstation {[m
[32m+[m[32m  --fa: "\f77a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-atlassian {[m
[32m+[m[32m  --fa: "\f77b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-canadian-maple-leaf {[m
[32m+[m[32m  --fa: "\f785";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-centos {[m
[32m+[m[32m  --fa: "\f789";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-confluence {[m
[32m+[m[32m  --fa: "\f78d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-dhl {[m
[32m+[m[32m  --fa: "\f790";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-diaspora {[m
[32m+[m[32m  --fa: "\f791";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fedex {[m
[32m+[m[32m  --fa: "\f797";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-fedora {[m
[32m+[m[32m  --fa: "\f798";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-figma {[m
[32m+[m[32m  --fa: "\f799";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-intercom {[m
[32m+[m[32m  --fa: "\f7af";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-invision {[m
[32m+[m[32m  --fa: "\f7b0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-jira {[m
[32m+[m[32m  --fa: "\f7b1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mendeley {[m
[32m+[m[32m  --fa: "\f7b3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-raspberry-pi {[m
[32m+[m[32m  --fa: "\f7bb";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-redhat {[m
[32m+[m[32m  --fa: "\f7bc";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sketch {[m
[32m+[m[32m  --fa: "\f7c6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-sourcetree {[m
[32m+[m[32m  --fa: "\f7d3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-suse {[m
[32m+[m[32m  --fa: "\f7d6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ubuntu {[m
[32m+[m[32m  --fa: "\f7df";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-ups {[m
[32m+[m[32m  --fa: "\f7e0";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-usps {[m
[32m+[m[32m  --fa: "\f7e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yarn {[m
[32m+[m[32m  --fa: "\f7e3";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-airbnb {[m
[32m+[m[32m  --fa: "\f834";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-battle-net {[m
[32m+[m[32m  --fa: "\f835";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-bootstrap {[m
[32m+[m[32m  --fa: "\f836";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-buffer {[m
[32m+[m[32m  --fa: "\f837";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-chromecast {[m
[32m+[m[32m  --fa: "\f838";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-evernote {[m
[32m+[m[32m  --fa: "\f839";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-itch-io {[m
[32m+[m[32m  --fa: "\f83a";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-salesforce {[m
[32m+[m[32m  --fa: "\f83b";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-speaker-deck {[m
[32m+[m[32m  --fa: "\f83c";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-symfony {[m
[32m+[m[32m  --fa: "\f83d";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-waze {[m
[32m+[m[32m  --fa: "\f83f";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-yammer {[m
[32m+[m[32m  --fa: "\f840";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-git-alt {[m
[32m+[m[32m  --fa: "\f841";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-stackpath {[m
[32m+[m[32m  --fa: "\f842";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-cotton-bureau {[m
[32m+[m[32m  --fa: "\f89e";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-buy-n-large {[m
[32m+[m[32m  --fa: "\f8a6";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-mdb {[m
[32m+[m[32m  --fa: "\f8ca";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-orcid {[m
[32m+[m[32m  --fa: "\f8d2";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-swift {[m
[32m+[m[32m  --fa: "\f8e1";[m
[32m+[m[32m}[m
[32m+[m[32m.fa-umbraco {[m
[32m+[m[32m  --fa: "\f8e8";[m
[32m+[m[32m}[m
[32m+[m[32m:host,[m
[32m+[m[32m:root {[m
[32m+[m[32m  --fa-font-regular: normal 400 1em/1 var(--fa-family-classic);[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "Font Awesome 7 Free";[m
[32m+[m[32m  font-style: normal;[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-regular-400.woff2);[m
[32m+[m[32m}[m
[32m+[m[32m.far {[m
[32m+[m[32m  --fa-family: var(--fa-family-classic);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-regular,[m
[32m+[m[32m.far {[m
[32m+[m[32m  --fa-style: 400;[m
[32m+[m[32m}[m
[32m+[m[32m:host,[m
[32m+[m[32m:root {[m
[32m+[m[32m  --fa-family-classic: "Font Awesome 7 Free";[m
[32m+[m[32m  --fa-font-solid: normal 900 1em/1 var(--fa-family-classic);[m
[32m+[m[32m  --fa-style-family-classic: var(--fa-family-classic);[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "Font Awesome 7 Free";[m
[32m+[m[32m  font-style: normal;[m
[32m+[m[32m  font-weight: 900;[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-solid-900.woff2);[m
[32m+[m[32m}[m
[32m+[m[32m.fas {[m
[32m+[m[32m  --fa-style: 900;[m
[32m+[m[32m}[m
[32m+[m[32m.fa-classic,[m
[32m+[m[32m.fas {[m
[32m+[m[32m  --fa-family: var(--fa-family-classic);[m
[32m+[m[32m}[m
[32m+[m[32m.fa-solid {[m
[32m+[m[32m  --fa-style: 900;[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "Font Awesome 5 Brands";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m  src: url(../webfonts/fa-brands-400.woff2) format("woff2");[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "Font Awesome 5 Free";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  font-weight: 900;[m
[32m+[m[32m  src: url(../webfonts/fa-solid-900.woff2) format("woff2");[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "Font Awesome 5 Free";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m  src: url(../webfonts/fa-regular-400.woff2) format("woff2");[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "FontAwesome";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-solid-900.woff2) format("woff2");[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "FontAwesome";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-brands-400.woff2) format("woff2");[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "FontAwesome";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-regular-400.woff2) format("woff2");[m
[32m+[m[32m  unicode-range:[m
[32m+[m[32m    u+f003, u+f006, u+f014, u+f016-f017, u+f01a-f01b, u+f01d, u+f022, u+f03e,[m
[32m+[m[32m    u+f044, u+f046, u+f05c-f05d, u+f06e, u+f070, u+f087-f088, u+f08a, u+f094,[m
[32m+[m[32m    u+f096-f097, u+f09d, u+f0a0, u+f0a2, u+f0a4-f0a7, u+f0c5, u+f0c7,[m
[32m+[m[32m    u+f0e5-f0e6, u+f0eb, u+f0f6-f0f8, u+f10c, u+f114-f115, u+f118-f11a,[m
[32m+[m[32m    u+f11c-f11d, u+f133, u+f147, u+f14e, u+f150-f152, u+f185-f186, u+f18e,[m
[32m+[m[32m    u+f190-f192, u+f196, u+f1c1-f1c9, u+f1d9, u+f1db, u+f1e3, u+f1ea, u+f1f7,[m
[32m+[m[32m    u+f1f9, u+f20a, u+f247-f248, u+f24a, u+f24d, u+f255-f25b, u+f25d,[m
[32m+[m[32m    u+f271-f274, u+f278, u+f27b, u+f28c, u+f28e, u+f29c, u+f2b5, u+f2b7, u+f2ba,[m
[32m+[m[32m    u+f2bc, u+f2be, u+f2c0-f2c1, u+f2c3, u+f2d0, u+f2d2, u+f2d4, u+f2dc;[m
[32m+[m[32m}[m
[32m+[m[32m@font-face {[m
[32m+[m[32m  font-family: "FontAwesome";[m
[32m+[m[32m  font-display: block;[m
[32m+[m[32m  src: url(../webfonts/fa-v4compatibility.woff2) format("woff2");[m
[32m+[m[32m  unicode-range:[m
[32m+[m[32m    u+f041, u+f047, u+f065-f066, u+f07d-f07e, u+f080, u+f08b, u+f08e, u+f090,[m
[32m+[m[32m    u+f09a, u+f0ac, u+f0ae, u+f0b2, u+f0d0, u+f0d6, u+f0e4, u+f0ec, u+f10a-f10b,[m
[32m+[m[32m    u+f123, u+f13e, u+f148-f149, u+f14c, u+f156, u+f15e, u+f160-f161, u+f163,[m
[32m+[m[32m    u+f175-f178, u+f195, u+f1f8, u+f219, u+f27a;[m
[32m+[m[32m}[m
[1mdiff --git a/css/blog-post.css b/css/blog-post.css[m
[1mindex fa8e535..4393705 100644[m
[1m--- a/css/blog-post.css[m
[1m+++ b/css/blog-post.css[m
[36m@@ -1,409 +1,369 @@[m
[31m-/* =========================================[m
[31m-   Single Blog Post / Article Details[m
[31m-   ========================================= */[m
[31m-[m
 html {[m
[31m-    overflow-y: auto !important;[m
[31m-    overflow-x: hidden;[m
[31m-    height: auto !important;[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m  height: auto !important;[m
 }[m
[31m-[m
 body.blog-post-page {[m
[31m-    background: var(--bg-dark);[m
[31m-    color: var(--text-light);[m
[31m-    overflow-y: auto !important;[m
[31m-    overflow-x: hidden;[m
[31m-    height: auto !important;[m
[31m-    position: relative;[m
[31m-    padding-top: 50px; /* Space for scroll progress */[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding-top: 50px;[m
 }[m
[31m-[m
[31m-/* Scroll Progress Bar */[m
 .post-progress-bar {[m
[31m-    position: fixed;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    height: 4px;[m
[31m-    background: linear-gradient(90deg, var(--primary-color), var(--accent-primary));[m
[31m-    width: 0%;[m
[31m-    z-index: 9999;[m
[31m-    transition: width 0.1s ease-out;[m
[31m-}[m
[31m-[m
[31m-/* Back Button Wrapper */[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  height: 4px;[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    90deg,[m
[32m+[m[32m    var(--primary-color),[m
[32m+[m[32m    var(--accent-primary)[m
[32m+[m[32m  );[m
[32m+[m[32m  width: 0%;[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m  transition: width 0.1s ease-out;[m
[32m+[m[32m}[m
 .back-home-wrapper {[m
[31m-    max-width: 1200px;[m
[31m-    margin: 40px auto 20px;[m
[31m-    padding: 0 20px;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 40px auto 20px;[m
[32m+[m[32m  padding: 0 20px;[m
 }[m
[31m-[m
[31m-/* Back Button */[m
 .back-home-btn {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 0.5rem;[m
[31m-    padding: 0.75rem 1.5rem;[m
[31m-    border-radius: 50px;[m
[31m-    background: var(--glass-bg);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    transition: all 0.3s ease;[m
[31m-    font-weight: 500;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  padding: 0.75rem 1.5rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
 .back-home-btn:hover {[m
[31m-    color: var(--text-light); /* Assuming dark mode is default */[m
[31m-    background: rgba(255, 255, 255, 0.1);[m
[31m-    transform: translateX(-5px);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  transform: translateX(-5px);[m
 }[m
[31m-[m
 [data-theme="light"] .back-home-btn:hover {[m
[31m-    background: rgba(0, 0, 0, 0.1);[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.1);[m
 }[m
[31m-[m
[31m-/* Post Hero Section */[m
 .post-hero {[m
[31m-    max-width: 1200px;[m
[31m-    margin: 0 auto 60px;[m
[31m-    padding: 0 20px;[m
[31m-    text-align: center;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto 60px;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m  text-align: center;[m
 }[m
[31m-[m
 .post-hero-title {[m
[31m-    font-size: clamp(2.5rem, 5vw, 4.5rem);[m
[31m-    line-height: 1.1;[m
[31m-    margin-bottom: 20px;[m
[31m-    font-weight: 800;[m
[32m+[m[32m  font-size: clamp(2.5rem, 5vw, 4.5rem);[m
[32m+[m[32m  line-height: 1.1;[m
[32m+[m[32m  margin-bottom: 20px;[m
[32m+[m[32m  font-weight: 800;[m
 }[m
[31m-[m
 .post-hero-meta {[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    gap: 20px;[m
[31m-    color: var(--text-muted);[m
[31m-    font-size: 0.95rem;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-    margin-bottom: 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  margin-bottom: 40px;[m
 }[m
[31m-[m
 .post-hero-image-container {[m
[31m-    width: 100%;[m
[31m-    max-height: 600px;[m
[31m-    border-radius: 24px;[m
[31m-    overflow: hidden;[m
[31m-    border: 1px solid rgba(255, 255, 255, 0.05);[m
[31m-    box-shadow: 0 20px 50px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-height: 600px;[m
[32m+[m[32m  border-radius: 24px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  box-shadow: 0 20px 50px rgba(0, 0, 0, 0.3);[m
 }[m
[31m-[m
 .post-hero-img {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    display: block;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  display: block;[m
 }[m
[31m-[m
[31m-/* Asymmetric Layout Container */[m
 .post-layout {[m
[31m-    display: flex;[m
[31m-    max-width: 1200px;[m
[31m-    margin: 0 auto;[m
[31m-    padding: 0 20px 80px;[m
[31m-    gap: 60px;[m
[31m-    align-items: flex-start;[m
[31m-}[m
[31m-[m
[31m-/* Sticky Sidebar (Left) */[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 0 20px 80px;[m
[32m+[m[32m  gap: 60px;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m}[m
 .post-sidebar {[m
[31m-    width: 250px;[m
[31m-    flex-shrink: 0;[m
[31m-    position: sticky;[m
[31m-    top: 100px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 40px;[m
[32m+[m[32m  width: 250px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  position: sticky;[m
[32m+[m[32m  top: 100px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 40px;[m
 }[m
[31m-[m
 .post-author {[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 15px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
 }[m
[31m-[m
 .post-author-img {[m
[31m-    width: 50px;[m
[31m-    height: 50px;[m
[31m-    border-radius: 50%;[m
[31m-    object-fit: cover;[m
[32m+[m[32m  width: 50px;[m
[32m+[m[32m  height: 50px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  object-fit: cover;[m
 }[m
[31m-[m
 .post-author-info h4 {[m
[31m-    margin: 0;[m
[31m-    font-size: 1rem;[m
[31m-    color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-light);[m
 }[m
[31m-[m
 .post-author-info p {[m
[31m-    margin: 2px 0 0;[m
[31m-    font-size: 0.85rem;[m
[31m-    color: var(--text-muted);[m
[32m+[m[32m  margin: 2px 0 0;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: var(--text-muted);[m
 }[m
[31m-[m
 .post-toc {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
 }[m
[31m-[m
 .post-toc h4 {[m
[31m-    font-size: 0.9rem;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 15px;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 15px;[m
 }[m
[31m-[m
 .post-toc ul {[m
[31m-    list-style: none;[m
[31m-    padding: 0;[m
[31m-    margin: 0;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 12px;[m
[32m+[m[32m  list-style: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 12px;[m
 }[m
[31m-[m
 .post-toc a {[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    font-size: 0.95rem;[m
[31m-    transition: color 0.3s ease, border-left-color 0.3s ease;[m
[31m-    border-left: 2px solid transparent;[m
[31m-    padding-left: 10px;[m
[31m-}[m
[31m-[m
[31m-.post-toc a:hover,[m
[31m-.post-toc a.active {[m
[31m-    color: var(--accent-primary);[m
[31m-    border-left-color: var(--accent-primary);[m
[31m-}[m
[31m-[m
[31m-/* The Trailing Line Animation (Snake SVG) */[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    border-left-color 0.3s ease;[m
[32m+[m[32m  border-left: 2px solid transparent;[m
[32m+[m[32m  padding-left: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-toc a.active,[m
[32m+[m[32m.post-toc a:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  border-left-color: var(--accent-primary);[m
[32m+[m[32m}[m
 .trailing-line-wrapper {[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    bottom: 0;[m
[31m-    left: -30px; /* Positioned just outside the sidebar */[m
[31m-    width: 20px;[m
[31m-    z-index: 0;[m
[31m-    pointer-events: none;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: -30px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  z-index: 0;[m
[32m+[m[32m  pointer-events: none;[m
 }[m
[31m-[m
 .snake-line-svg {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    overflow: visible;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  overflow: visible;[m
 }[m
[31m-[m
 .snake-track {[m
[31m-    fill: none;[m
[31m-    stroke: var(--border-color, rgba(255,255,255,0.06));[m
[31m-    stroke-width: 2;[m
[31m-    stroke-linecap: round;[m
[31m-    stroke-linejoin: round;[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: var(--border-color, rgba(255, 255, 255, 0.06));[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
 }[m
[31m-[m
 .snake-fill {[m
[31m-    fill: none;[m
[31m-    stroke: url(#snakeGradient);[m
[31m-    stroke-width: 2;[m
[31m-    stroke-linecap: round;[m
[31m-    stroke-linejoin: round;[m
[31m-    filter: drop-shadow(0 0 6px var(--accent-primary));[m
[31m-}[m
[31m-[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: url(#snakeGradient);[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
[32m+[m[32m  filter: drop-shadow(0 0 6px var(--accent-primary));[m
[32m+[m[32m}[m
 [data-theme="light"] .snake-track {[m
[31m-    stroke: rgba(0,0,0,0.06);[m
[32m+[m[32m  stroke: rgba(0, 0, 0, 0.06);[m
 }[m
[31m-[m
 .post-share {[m
[31m-    display: flex;[m
[31m-    gap: 15px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 15px;[m
 }[m
[31m-[m
 .share-btn {[m
[31m-    width: 40px;[m
[31m-    height: 40px;[m
[31m-    border-radius: 50%;[m
[31m-    background: var(--glass-bg);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    color: var(--text-light);[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    text-decoration: none;[m
[31m-    transition: background 0.3s ease, color 0.3s ease, transform 0.3s ease;[m
[32m+[m[32m  width: 40px;[m
[32m+[m[32m  height: 40px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background 0.3s ease,[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
 }[m
[31m-[m
 .share-btn:hover {[m
[31m-    background: var(--accent-primary);[m
[31m-    color: #fff;[m
[31m-    transform: translateY(-3px);[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  transform: translateY(-3px);[m
 }[m
[31m-[m
[31m-/* Main Content (Right) */[m
 .post-content-wrapper {[m
[31m-    flex-grow: 1;[m
[31m-    min-width: 0; /* Prevents flex blowout */[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m  min-width: 0;[m
 }[m
[31m-[m
 .post-content {[m
[31m-    font-size: 1.15rem;[m
[31m-    line-height: 1.8;[m
[31m-    color: var(--text-light);[m
[31m-    opacity: 0.9;[m
[31m-}[m
[31m-[m
[31m-.post-content h2, .post-content h3 {[m
[31m-    color: var(--text-light);[m
[31m-    margin-top: 2em;[m
[31m-    margin-bottom: 1em;[m
[31m-    font-weight: 700;[m
[31m-}[m
[31m-[m
[31m-.post-content h2 { font-size: 2rem; }[m
[31m-.post-content h3 { font-size: 1.5rem; }[m
[31m-[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  opacity: 0.9;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content h2,[m
[32m+[m[32m.post-content h3 {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin-top: 2em;[m
[32m+[m[32m  margin-bottom: 1em;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content h2 {[m
[32m+[m[32m  font-size: 2rem;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content h3 {[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m}[m
 .post-content p {[m
[31m-    margin-bottom: 1.5em;[m
[32m+[m[32m  margin-bottom: 1.5em;[m
 }[m
[31m-[m
 .post-content img {[m
[31m-    width: 100%;[m
[31m-    border-radius: 16px;[m
[31m-    margin: 2em 0;[m
[31m-    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[31m-    /* Make image slightly wider than text if space permits */[m
[31m-    max-width: calc(100% + 40px);[m
[31m-    transform: translateX(-20px);[m
[31m-}[m
[31m-[m
[31m-/* Code Snippets within Content */[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  max-width: calc(100% + 40px);[m
[32m+[m[32m  transform: translateX(-20px);[m
[32m+[m[32m}[m
 .post-content pre {[m
[31m-    background: #111;[m
[31m-    padding: 20px;[m
[31m-    border-radius: 12px;[m
[31m-    overflow-x: auto;[m
[31m-    border: 1px solid rgba(255,255,255,0.05);[m
[31m-    margin: 2em 0;[m
[31m-}[m
[31m-[m
[32m+[m[32m  background: #111;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  border-radius: 12px;[m
[32m+[m[32m  overflow-x: auto;[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m}[m
 .post-content code {[m
[31m-    font-family: 'Fira Code', monospace;[m
[31m-    font-size: 0.9rem;[m
[31m-    color: #e6e6e6;[m
[32m+[m[32m  font-family: "Fira Code", monospace;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: #e6e6e6;[m
 }[m
[31m-[m
[31m-/* Inline code */[m
 .post-content p code {[m
[31m-    background: rgba(255,255,255,0.1);[m
[31m-    padding: 2px 6px;[m
[31m-    border-radius: 4px;[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  padding: 2px 6px;[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
[31m-/* Blockquotes */[m
 .post-content blockquote {[m
[31m-    margin: 2em 0;[m
[31m-    padding: 20px 30px;[m
[31m-    border-left: 4px solid var(--accent-primary);[m
[31m-    background: linear-gradient(90deg, rgba(0, 140, 255, 0.1) 0%, transparent 100%);[m
[31m-    border-radius: 0 12px 12px 0;[m
[31m-    font-style: italic;[m
[31m-    font-size: 1.25rem;[m
[31m-}[m
[31m-[m
[31m-/* Navigation Links (Bottom) */[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  padding: 20px 30px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    90deg,[m
[32m+[m[32m    rgba(0, 140, 255, 0.1) 0,[m
[32m+[m[32m    transparent 100%[m
[32m+[m[32m  );[m
[32m+[m[32m  border-radius: 0 12px 12px 0;[m
[32m+[m[32m  font-style: italic;[m
[32m+[m[32m  font-size: 1.25rem;[m
[32m+[m[32m}[m
 .post-bottom-nav {[m
[31m-    display: flex;[m
[31m-    justify-content: space-between;[m
[31m-    margin-top: 60px;[m
[31m-    padding-top: 40px;[m
[31m-    border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  margin-top: 60px;[m
[32m+[m[32m  padding-top: 40px;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
 }[m
[31m-[m
 .nav-direction-btn {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    text-decoration: none;[m
[31m-    color: var(--text-light);[m
[31m-    transition: transform 0.3s ease;[m
[31m-    width: 48%;[m
[31m-    padding: 20px;[m
[31m-    background: var(--glass-bg);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 16px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m  width: 48%;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m}[m
 .nav-direction-btn:hover {[m
[31m-    transform: translateY(-5px);[m
[31m-    border-color: rgba(255, 255, 255, 0.15);[m
[31m-}[m
[31m-[m
[31m-.nav-direction-btn.prev-btn { align-items: flex-start; }[m
[31m-.nav-direction-btn.next-btn { align-items: flex-end; text-align: right; }[m
[31m-.nav-direction-btn.disabled { opacity: 0.5; pointer-events: none; }[m
[31m-[m
[32m+[m[32m  transform: translateY(-5px);[m
[32m+[m[32m  border-color: rgba(255, 255, 255, 0.15);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.prev-btn {[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.next-btn {[m
[32m+[m[32m  align-items: flex-end;[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.disabled {[m
[32m+[m[32m  opacity: 0.5;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .direction-label {[m
[31m-    font-size: 0.8rem;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 5px;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 5px;[m
 }[m
[31m-[m
 .target-title {[m
[31m-    font-size: 1.2rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
[31m-/* Responsive */[m
 @media (max-width: 992px) {[m
[31m-    .post-layout {[m
[31m-        flex-direction: column;[m
[31m-        gap: 40px;[m
[31m-    }[m
[31m-    .post-sidebar {[m
[31m-        width: 100%;[m
[31m-        position: relative;[m
[31m-        top: 0;[m
[31m-        flex-direction: row;[m
[31m-        justify-content: space-between;[m
[31m-        align-items: center;[m
[31m-        flex-wrap: wrap;[m
[31m-    }[m
[31m-    .post-toc {[m
[31m-        display: none; /* Hide TOC on mobile by default, or could make it a dropdown */[m
[31m-    }[m
[31m-    .post-content img {[m
[31m-        max-width: 100%;[m
[31m-        transform: none;[m
[31m-    }[m
[31m-}[m
[31m-[m
[32m+[m[32m  .post-layout {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-sidebar {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    top: 0;[m
[32m+[m[32m    flex-direction: row;[m
[32m+[m[32m    justify-content: space-between;[m
[32m+[m[32m    align-items: center;[m
[32m+[m[32m    flex-wrap: wrap;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-toc {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-content img {[m
[32m+[m[32m    max-width: 100%;[m
[32m+[m[32m    transform: none;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 @media (max-width: 768px) {[m
[31m-    .post-hero-title {[m
[31m-        font-size: 2rem;[m
[31m-    }[m
[31m-    .post-bottom-nav {[m
[31m-        flex-direction: column;[m
[31m-        gap: 20px;[m
[31m-    }[m
[31m-    .nav-direction-btn {[m
[31m-        width: 100%;[m
[31m-        align-items: center !important;[m
[31m-        text-align: center !important;[m
[31m-    }[m
[32m+[m[32m  .post-hero-title {[m
[32m+[m[32m    font-size: 2rem;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-bottom-nav {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    gap: 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-direction-btn {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    align-items: center !important;[m
[32m+[m[32m    text-align: center !important;[m
[32m+[m[32m  }[m
 }[m
[1mdiff --git a/css/blog-post.min.css b/css/blog-post.min.css[m
[1mnew file mode 100644[m
[1mindex 0000000..4393705[m
[1m--- /dev/null[m
[1m+++ b/css/blog-post.min.css[m
[36m@@ -0,0 +1,369 @@[m
[32m+[m[32mhtml {[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m}[m
[32m+[m[32mbody.blog-post-page {[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding-top: 50px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-progress-bar {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  height: 4px;[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    90deg,[m
[32m+[m[32m    var(--primary-color),[m
[32m+[m[32m    var(--accent-primary)[m
[32m+[m[32m  );[m
[32m+[m[32m  width: 0%;[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m  transition: width 0.1s ease-out;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-wrapper {[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 40px auto 20px;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-btn {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  padding: 0.75rem 1.5rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-btn:hover {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  transform: translateX(-5px);[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .back-home-btn:hover {[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.1);[m
[32m+[m[32m}[m
[32m+[m[32m.post-hero {[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto 60px;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m}[m
[32m+[m[32m.post-hero-title {[m
[32m+[m[32m  font-size: clamp(2.5rem, 5vw, 4.5rem);[m
[32m+[m[32m  line-height: 1.1;[m
[32m+[m[32m  margin-bottom: 20px;[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m}[m
[32m+[m[32m.post-hero-meta {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  margin-bottom: 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-hero-image-container {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-height: 600px;[m
[32m+[m[32m  border-radius: 24px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  box-shadow: 0 20px 50px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m}[m
[32m+[m[32m.post-hero-img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m}[m
[32m+[m[32m.post-layout {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 0 20px 80px;[m
[32m+[m[32m  gap: 60px;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m}[m
[32m+[m[32m.post-sidebar {[m
[32m+[m[32m  width: 250px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  position: sticky;[m
[32m+[m[32m  top: 100px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-author {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-author-img {[m
[32m+[m[32m  width: 50px;[m
[32m+[m[32m  height: 50px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m}[m
[32m+[m[32m.post-author-info h4 {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.post-author-info p {[m
[32m+[m[32m  margin: 2px 0 0;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m}[m
[32m+[m[32m.post-toc {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m}[m
[32m+[m[32m.post-toc h4 {[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-toc ul {[m
[32m+[m[32m  list-style: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 12px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-toc a {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    border-left-color 0.3s ease;[m
[32m+[m[32m  border-left: 2px solid transparent;[m
[32m+[m[32m  padding-left: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.post-toc a.active,[m
[32m+[m[32m.post-toc a:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  border-left-color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.trailing-line-wrapper {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: -30px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  z-index: 0;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.snake-line-svg {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  overflow: visible;[m
[32m+[m[32m}[m
[32m+[m[32m.snake-track {[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: var(--border-color, rgba(255, 255, 255, 0.06));[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
[32m+[m[32m}[m
[32m+[m[32m.snake-fill {[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: url(#snakeGradient);[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
[32m+[m[32m  filter: drop-shadow(0 0 6px var(--accent-primary));[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .snake-track {[m
[32m+[m[32m  stroke: rgba(0, 0, 0, 0.06);[m
[32m+[m[32m}[m
[32m+[m[32m.post-share {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.share-btn {[m
[32m+[m[32m  width: 40px;[m
[32m+[m[32m  height: 40px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background 0.3s ease,[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.share-btn:hover {[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  transform: translateY(-3px);[m
[32m+[m[32m}[m
[32m+[m[32m.post-content-wrapper {[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m  min-width: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content {[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  opacity: 0.9;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content h2,[m
[32m+[m[32m.post-content h3 {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin-top: 2em;[m
[32m+[m[32m  margin-bottom: 1em;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content h2 {[m
[32m+[m[32m  font-size: 2rem;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content h3 {[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content p {[m
[32m+[m[32m  margin-bottom: 1.5em;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  max-width: calc(100% + 40px);[m
[32m+[m[32m  transform: translateX(-20px);[m
[32m+[m[32m}[m
[32m+[m[32m.post-content pre {[m
[32m+[m[32m  background: #111;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  border-radius: 12px;[m
[32m+[m[32m  overflow-x: auto;[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content code {[m
[32m+[m[32m  font-family: "Fira Code", monospace;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: #e6e6e6;[m
[32m+[m[32m}[m
[32m+[m[32m.post-content p code {[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  padding: 2px 6px;[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.post-content blockquote {[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  padding: 20px 30px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    90deg,[m
[32m+[m[32m    rgba(0, 140, 255, 0.1) 0,[m
[32m+[m[32m    transparent 100%[m
[32m+[m[32m  );[m
[32m+[m[32m  border-radius: 0 12px 12px 0;[m
[32m+[m[32m  font-style: italic;[m
[32m+[m[32m  font-size: 1.25rem;[m
[32m+[m[32m}[m
[32m+[m[32m.post-bottom-nav {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  margin-top: 60px;[m
[32m+[m[32m  padding-top: 40px;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m  width: 48%;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn:hover {[m
[32m+[m[32m  transform: translateY(-5px);[m
[32m+[m[32m  border-color: rgba(255, 255, 255, 0.15);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.prev-btn {[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.next-btn {[m
[32m+[m[32m  align-items: flex-end;[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.disabled {[m
[32m+[m[32m  opacity: 0.5;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.direction-label {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m}[m
[32m+[m[32m.target-title {[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 992px) {[m
[32m+[m[32m  .post-layout {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-sidebar {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    position: relative;[m
[32m+[m[32m    top: 0;[m
[32m+[m[32m    flex-direction: row;[m
[32m+[m[32m    justify-content: space-between;[m
[32m+[m[32m    align-items: center;[m
[32m+[m[32m    flex-wrap: wrap;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-toc {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-content img {[m
[32m+[m[32m    max-width: 100%;[m
[32m+[m[32m    transform: none;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .post-hero-title {[m
[32m+[m[32m    font-size: 2rem;[m
[32m+[m[32m  }[m
[32m+[m[32m  .post-bottom-nav {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    gap: 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-direction-btn {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    align-items: center !important;[m
[32m+[m[32m    text-align: center !important;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/css/blog.css b/css/blog.css[m
[1mindex ca04550..3579f80 100644[m
[1m--- a/css/blog.css[m
[1m+++ b/css/blog.css[m
[36m@@ -1,267 +1,238 @@[m
[31m-[m
[31m-/* Override global style.css overflow hiding for articles */[m
[31m-html, body {[m
[31m-    overflow-y: auto !important;[m
[31m-    overflow-x: hidden;[m
[31m-    height: auto !important;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Back Button (shared style with project.css)[m
[31m-========================================= */[m
[32m+[m[32mbody,[m
[32m+[m[32mhtml {[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m}[m
 .back-home-btn {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 0.5rem;[m
[31m-    padding: 0.6rem 1.25rem;[m
[31m-    border-radius: 50px;[m
[31m-    background: var(--glass-bg);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    transition: all 0.3s ease;[m
[31m-    font-weight: 500;[m
[31m-    font-size: 0.9rem;[m
[31m-    position: fixed;[m
[31m-    top: 1.5rem;[m
[31m-    left: 1.5rem;[m
[31m-    z-index: 9999;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  padding: 0.6rem 1.25rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 1.5rem;[m
[32m+[m[32m  left: 1.5rem;[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m}[m
 .back-home-btn:hover {[m
[31m-    color: var(--text-light);[m
[31m-    background: rgba(255, 255, 255, 0.1);[m
[31m-    transform: translateX(-5px);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  transform: translateX(-5px);[m
 }[m
[31m-[m
 [data-theme="light"] .back-home-btn:hover {[m
[31m-    background: rgba(0, 0, 0, 0.08);[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.08);[m
 }[m
[31m-[m
 @media (max-width: 768px) {[m
[31m-    .back-home-btn {[m
[31m-        top: 1rem;[m
[31m-        left: 1rem;[m
[31m-        padding: 0.5rem 1rem;[m
[31m-        font-size: 0.85rem;[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Blog / Articles Section (Static Grid)[m
[31m-========================================= */[m
[32m+[m[32m  .back-home-btn {[m
[32m+[m[32m    top: 1rem;[m
[32m+[m[32m    left: 1rem;[m
[32m+[m[32m    padding: 0.5rem 1rem;[m
[32m+[m[32m    font-size: 0.85rem;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 .blog-gallery-section {[m
[31m-    padding: 100px 20px;[m
[31m-    background: var(--bg-dark);[m
[31m-    min-height: 100vh;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-}[m
[31m-[m
[32m+[m[32m  padding: 100px 20px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  min-height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
 .blog-section-header {[m
[31m-    text-align: center;[m
[31m-    margin-bottom: 80px;[m
[31m-    position: relative;[m
[31m-    width: 100%;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-bottom: 80px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
 }[m
[31m-[m
 .blog-title {[m
[31m-    position: relative;[m
[31m-    display: inline-block;[m
[31m-    margin: 0;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .blog-main-text {[m
[31m-    position: relative;[m
[31m-    font-size: clamp(2rem, 5vw, 3.5rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    z-index: 2;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
 }[m
[31m-[m
 .blog-ghost-text {[m
[31m-    position: absolute;[m
[31m-    top: 50%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    font-size: clamp(3.5rem, 10vw, 7rem);[m
[31m-    font-weight: 800;[m
[31m-    color: var(--text-muted);[m
[31m-    opacity: var(--ghost-opacity);[m
[31m-    z-index: 1;[m
[31m-    white-space: nowrap;[m
[31m-    user-select: none;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3.5rem, 10vw, 7rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .blog-gallery-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(3, 1fr);[m
[31m-    grid-auto-rows: minmax(400px, auto);[m
[31m-    gap: 40px;[m
[31m-    width: 100%;[m
[31m-    max-width: 1200px;[m
[31m-    margin: 0 auto;[m
[31m-}[m
[31m-[m
[31m-/* Base Blog Card (Uses Glow Card Logic) */[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(3, 1fr);[m
[32m+[m[32m  grid-auto-rows: minmax(400px, auto);[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
 .blog-card {[m
[31m-    border-radius: 16px;[m
[31m-    cursor: pointer;[m
[31m-    transition: transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1), box-shadow 0.3s ease, filter 0.3s ease;[m
[31m-    display: flex; /* Ensures content stretches */[m
[31m-    opacity: 0;[m
[31m-    transform: translateY(40px);[m
[31m-    animation: fadeInUp 0.6s ease-out forwards;[m
[31m-}[m
[31m-[m
[31m-.blog-card:nth-child(1) { animation-delay: 0.1s; }[m
[31m-.blog-card:nth-child(2) { animation-delay: 0.2s; }[m
[31m-.blog-card:nth-child(3) { animation-delay: 0.3s; }[m
[31m-.blog-card:nth-child(4) { animation-delay: 0.4s; }[m
[31m-[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1),[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(40px);[m
[32m+[m[32m  animation: fadeInUp 0.6s ease-out forwards;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:first-child {[m
[32m+[m[32m  animation-delay: 0.1s;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:nth-child(2) {[m
[32m+[m[32m  animation-delay: 0.2s;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:nth-child(3) {[m
[32m+[m[32m  animation-delay: 0.3s;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:nth-child(4) {[m
[32m+[m[32m  animation-delay: 0.4s;[m
[32m+[m[32m}[m
 @keyframes fadeInUp {[m
[31m-    to {[m
[31m-        opacity: 1;[m
[31m-        transform: translateY(0);[m
[31m-    }[m
[32m+[m[32m  to {[m
[32m+[m[32m    opacity: 1;[m
[32m+[m[32m    transform: translateY(0);[m
[32m+[m[32m  }[m
 }[m
[31m-[m
 .blog-card .glow-content {[m
[31m-    border-radius: 15px; /* Manually specify inner radius */[m
[31m-    background: var(--glass-bg); /* Glass look */[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[32m+[m[32m  border-radius: 15px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
 }[m
[31m-[m
 @media (hover: hover) {[m
[31m-    .blog-card:hover {[m
[31m-        transform: translateY(-5px) scale(1.02);[m
[31m-        box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);[m
[31m-        z-index: 10;[m
[31m-    }[m
[31m-[m
[31m-    /* Dim siblings on hover */[m
[31m-    .blog-gallery-grid:hover .blog-card:not(:hover) {[m
[31m-        filter: brightness(0.6) blur(2px);[m
[31m-    }[m
[31m-}[m
[31m-[m
[32m+[m[32m  .blog-card:hover {[m
[32m+[m[32m    transform: translateY(-5px) scale(1.02);[m
[32m+[m[32m    box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m    z-index: 10;[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-gallery-grid:hover .blog-card:not(:hover) {[m
[32m+[m[32m    filter: brightness(0.6) blur(2px);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 .blog-gallery-image-wrapper {[m
[31m-    width: 100%;[m
[31m-    height: 200px;[m
[31m-    background-color: var(--skeleton-base); [m
[31m-    overflow: hidden;[m
[31m-    position: relative;[m
[31m-    border-bottom: 1px solid var(--glass-border);[m
[31m-}[m
[31m-[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 200px;[m
[32m+[m[32m  background-color: var(--skeleton-base);[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
 .blog-gallery-placeholder {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    background-color: var(--skeleton-highlight);[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  background-color: var(--skeleton-highlight);[m
 }[m
[31m-[m
 .blog-gallery-image-wrapper img {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    display: block;[m
[31m-    transition: transform 0.5s ease;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  transition: transform 0.5s ease;[m
 }[m
[31m-[m
 @media (hover: hover) {[m
[31m-    .blog-card:hover .blog-gallery-image-wrapper img {[m
[31m-        transform: scale(1.05);[m
[31m-    }[m
[32m+[m[32m  .blog-card:hover .blog-gallery-image-wrapper img {[m
[32m+[m[32m    transform: scale(1.05);[m
[32m+[m[32m  }[m
 }[m
[31m-[m
 .blog-gallery-content {[m
[31m-    position: relative;[m
[31m-    padding: 25px 20px;[m
[31m-    flex: 1;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding: 25px 20px;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
 }[m
[31m-[m
 .blog-gallery-text-content {[m
[31m-    position: relative;[m
[31m-    z-index: 2;[m
[31m-    flex: 1;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
 }[m
[31m-[m
 .blog-gallery-topic {[m
[31m-    font-size: 1.4rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-light); /* Adjusted from accent to keep it clean */[m
[31m-    margin: 0 0 10px 0;[m
[31m-    line-height: 1.3;[m
[32m+[m[32m  font-size: 1.4rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0 0 10px 0;[m
[32m+[m[32m  line-height: 1.3;[m
 }[m
[31m-[m
 .blog-gallery-date {[m
[31m-    font-size: 0.8rem;[m
[31m-    letter-spacing: 1px;[m
[31m-    color: var(--accent-primary); /* Changed to primary accent instead of muted text */[m
[31m-    margin: 0 0 15px 0;[m
[31m-    text-transform: uppercase;[m
[31m-    font-weight: 600;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin: 0 0 15px 0;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
 .blog-gallery-desc {[m
[31m-    font-size: 0.95rem;[m
[31m-    line-height: 1.6;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0 0 25px 0;[m
[31m-    flex-grow: 1; /* Pushes the button to the bottom */[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0 0 25px 0;[m
[32m+[m[32m  flex-grow: 1;[m
 }[m
[31m-[m
 .blog-gallery-link {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 8px;[m
[31m-    font-weight: 600;[m
[31m-    font-size: 0.95rem;[m
[31m-    color: var(--text-light); [m
[31m-    text-decoration: none;[m
[31m-    transition: color 0.3s ease, transform 0.3s ease;[m
[31m-    margin-top: auto;[m
[31m-    width: fit-content;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m  margin-top: auto;[m
[32m+[m[32m  width: fit-content;[m
[32m+[m[32m}[m
 .blog-gallery-link i {[m
[31m-    transition: transform 0.3s ease;[m
[32m+[m[32m  transition: transform 0.3s ease;[m
 }[m
[31m-[m
 @media (hover: hover) {[m
[31m-    .blog-card:hover .blog-gallery-link {[m
[31m-        color: var(--accent-primary);[m
[31m-    }[m
[31m-[m
[31m-    .blog-card:hover .blog-gallery-link i {[m
[31m-        transform: translateX(5px);[m
[31m-    }[m
[31m-}[m
[31m-[m
[32m+[m[32m  .blog-card:hover .blog-gallery-link {[m
[32m+[m[32m    color: var(--accent-primary);[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-card:hover .blog-gallery-link i {[m
[32m+[m[32m    transform: translateX(5px);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 @media (max-width: 992px) {[m
[31m-    .blog-gallery-grid {[m
[31m-        grid-template-columns: repeat(2, 1fr);[m
[31m-    }[m
[32m+[m[32m  .blog-gallery-grid {[m
[32m+[m[32m    grid-template-columns: repeat(2, 1fr);[m
[32m+[m[32m  }[m
 }[m
[31m-[m
 @media (max-width: 768px) {[m
[31m-    .blog-gallery-grid {[m
[31m-        grid-template-columns: 1fr;[m
[31m-    }[m
[31m-    [m
[31m-    /* Make link styled as active by default on mobile for better accessibility */[m
[31m-    .blog-gallery-link {[m
[31m-        color: var(--accent-primary);[m
[31m-    }[m
[31m-    .blog-gallery-link i {[m
[31m-        transform: translateX(5px);[m
[31m-    }[m
[32m+[m[32m  .blog-gallery-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-gallery-link {[m
[32m+[m[32m    color: var(--accent-primary);[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-gallery-link i {[m
[32m+[m[32m    transform: translateX(5px);[m
[32m+[m[32m  }[m
 }[m
[1mdiff --git a/css/blog.min.css b/css/blog.min.css[m
[1mnew file mode 100644[m
[1mindex 0000000..3579f80[m
[1m--- /dev/null[m
[1m+++ b/css/blog.min.css[m
[36m@@ -0,0 +1,238 @@[m
[32m+[m[32mbody,[m
[32m+[m[32mhtml {[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m  height: auto !important;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-btn {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  padding: 0.6rem 1.25rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 1.5rem;[m
[32m+[m[32m  left: 1.5rem;[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-btn:hover {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  transform: translateX(-5px);[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .back-home-btn:hover {[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.08);[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .back-home-btn {[m
[32m+[m[32m    top: 1rem;[m
[32m+[m[32m    left: 1rem;[m
[32m+[m[32m    padding: 0.5rem 1rem;[m
[32m+[m[32m    font-size: 0.85rem;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-section {[m
[32m+[m[32m  padding: 100px 20px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  min-height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-section-header {[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-bottom: 80px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-title {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-main-text {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-ghost-text {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3.5rem, 10vw, 7rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(3, 1fr);[m
[32m+[m[32m  grid-auto-rows: minmax(400px, auto);[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card {[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1),[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(40px);[m
[32m+[m[32m  animation: fadeInUp 0.6s ease-out forwards;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:first-child {[m
[32m+[m[32m  animation-delay: 0.1s;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:nth-child(2) {[m
[32m+[m[32m  animation-delay: 0.2s;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:nth-child(3) {[m
[32m+[m[32m  animation-delay: 0.3s;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card:nth-child(4) {[m
[32m+[m[32m  animation-delay: 0.4s;[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes fadeInUp {[m
[32m+[m[32m  to {[m
[32m+[m[32m    opacity: 1;[m
[32m+[m[32m    transform: translateY(0);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.blog-card .glow-content {[m
[32m+[m[32m  border-radius: 15px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m@media (hover: hover) {[m
[32m+[m[32m  .blog-card:hover {[m
[32m+[m[32m    transform: translateY(-5px) scale(1.02);[m
[32m+[m[32m    box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m    z-index: 10;[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-gallery-grid:hover .blog-card:not(:hover) {[m
[32m+[m[32m    filter: brightness(0.6) blur(2px);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-image-wrapper {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 200px;[m
[32m+[m[32m  background-color: var(--skeleton-base);[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-bottom: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-placeholder {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  background-color: var(--skeleton-highlight);[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-image-wrapper img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  transition: transform 0.5s ease;[m
[32m+[m[32m}[m
[32m+[m[32m@media (hover: hover) {[m
[32m+[m[32m  .blog-card:hover .blog-gallery-image-wrapper img {[m
[32m+[m[32m    transform: scale(1.05);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-content {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding: 25px 20px;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-text-content {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-topic {[m
[32m+[m[32m  font-size: 1.4rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0 0 10px 0;[m
[32m+[m[32m  line-height: 1.3;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-date {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin: 0 0 15px 0;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-desc {[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0 0 25px 0;[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-link {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m  margin-top: auto;[m
[32m+[m[32m  width: fit-content;[m
[32m+[m[32m}[m
[32m+[m[32m.blog-gallery-link i {[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m@media (hover: hover) {[m
[32m+[m[32m  .blog-card:hover .blog-gallery-link {[m
[32m+[m[32m    color: var(--accent-primary);[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-card:hover .blog-gallery-link i {[m
[32m+[m[32m    transform: translateX(5px);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 992px) {[m
[32m+[m[32m  .blog-gallery-grid {[m
[32m+[m[32m    grid-template-columns: repeat(2, 1fr);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .blog-gallery-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-gallery-link {[m
[32m+[m[32m    color: var(--accent-primary);[m
[32m+[m[32m  }[m
[32m+[m[32m  .blog-gallery-link i {[m
[32m+[m[32m    transform: translateX(5px);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/css/project.css b/css/project.css[m
[1mindex e87db74..a049228 100644[m
[1m--- a/css/project.css[m
[1m+++ b/css/project.css[m
[36m@@ -1,727 +1,621 @@[m
[31m-/* ========================================= */[m
[31m-/*  Project Template Specific Styling        */[m
[31m-/* ========================================= */[m
[31m-[m
[31m-/* Global and Container adjustments */[m
 .project-detail-page {[m
[31m-    background-color: var(--bg-color);[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[32m+[m[32m  background-color: var(--bg-color);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
 }[m
[31m-[m
 body.project-detail-page {[m
[31m-    overflow-y: auto !important;[m
[31m-    overflow-x: hidden;[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
 }[m
[31m-[m
 .project-container {[m
[31m-    max-width: 1200px;[m
[31m-    margin: 0 auto;[m
[31m-    padding: 0 5%;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 0 5%;[m
 }[m
[31m-[m
[31m-/* Scroll Progress Tracker */[m
 .scroll-progress-bar {[m
[31m-    position: fixed;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 0%;[m
[31m-    height: 4px;[m
[31m-    background: var(--accent-primary);[m
[31m-    z-index: 10000;[m
[31m-}[m
[31m-[m
[31m-/* Back Button */[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 0%;[m
[32m+[m[32m  height: 4px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  z-index: 10000;[m
[32m+[m[32m}[m
 .back-home-btn {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 0.5rem;[m
[31m-    margin-top: 2rem;[m
[31m-    margin-bottom: 2rem;[m
[31m-    padding: 0.75rem 1.5rem;[m
[31m-    border-radius: 50px;[m
[31m-    background: var(--glass-bg);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    transition: all 0.3s ease;[m
[31m-    font-weight: 500;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  margin-top: 2rem;[m
[32m+[m[32m  margin-bottom: 2rem;[m
[32m+[m[32m  padding: 0.75rem 1.5rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
 .back-home-btn:hover {[m
[31m-    color: var(--text-light); /* Enforces consistency with global variables */[m
[31m-    background: rgba(255, 255, 255, 0.1);[m
[31m-    transform: translateX(-5px);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  transform: translateX(-5px);[m
 }[m
[31m-[m
 [data-theme="light"] .back-home-btn:hover {[m
[31m-    background: rgba(0, 0, 0, 0.1);[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.1);[m
 }[m
[31m-[m
[31m-/* Hero Section */[m
 .project-hero {[m
[31m-    margin-bottom: 4rem;[m
[31m-    position: relative;[m
[31m-    border-radius: 30px;[m
[31m-    overflow: hidden;[m
[31m-    box-shadow: 0 20px 50px rgba(0, 0, 0, 0.15);[m
[32m+[m[32m  margin-bottom: 4rem;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-radius: 30px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  box-shadow: 0 20px 50px rgba(0, 0, 0, 0.15);[m
 }[m
[31m-[m
 .project-hero-image-container {[m
[31m-    position: relative;[m
[31m-    width: 100%;[m
[31m-    height: 60vh;[m
[31m-    min-height: 400px;[m
[31m-    max-height: 700px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 60vh;[m
[32m+[m[32m  min-height: 400px;[m
[32m+[m[32m  max-height: 700px;[m
 }[m
[31m-[m
 .project-hero-img {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    object-position: center;[m
[31m-    transition: transform 10s ease; /* Super slow ambient zoom */[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  object-position: center;[m
[32m+[m[32m  transition: transform 10s ease;[m
 }[m
[31m-[m
 .project-hero:hover .project-hero-img {[m
[31m-    transform: scale(1.08); /* Gentle scale inward on hover */[m
[32m+[m[32m  transform: scale(1.08);[m
 }[m
[31m-[m
[31m-/* Gradient overlay to ensure text is always readable over images */[m
 .project-hero-overlay {[m
[31m-    position: absolute;[m
[31m-    inset: 0;[m
[31m-    background: linear-gradient(180deg, rgba(0,0,0,0) 0%, rgba(0,0,0,0.8) 100%);[m
[31m-    z-index: 1;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  inset: 0;[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    180deg,[m
[32m+[m[32m    rgba(0, 0, 0, 0) 0,[m
[32m+[m[32m    rgba(0, 0, 0, 0.8) 100%[m
[32m+[m[32m  );[m
[32m+[m[32m  z-index: 1;[m
 }[m
[31m-[m
 .project-hero-title {[m
[31m-    position: absolute;[m
[31m-    bottom: 3rem;[m
[31m-    left: 3rem;[m
[31m-    font-size: clamp(3rem, 6vw, 5rem);[m
[31m-    margin: 0;[m
[31m-    z-index: 2;[m
[31m-    text-shadow: 0 4px 20px rgba(0,0,0,0.5);[m
[31m-    line-height: 1.1;[m
[31m-    color: white; /* Force white on hero regardless of theme */[m
[31m-}[m
[31m-[m
[31m-/* Badges floating on hero */[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: 3rem;[m
[32m+[m[32m  left: 3rem;[m
[32m+[m[32m  font-size: clamp(3rem, 6vw, 5rem);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  text-shadow: 0 4px 20px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  line-height: 1.1;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
 .project-hero-badges {[m
[31m-    position: absolute;[m
[31m-    top: 2rem;[m
[31m-    right: 2rem;[m
[31m-    display: flex;[m
[31m-    gap: 1rem;[m
[31m-    z-index: 2;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 2rem;[m
[32m+[m[32m  right: 2rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 1rem;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
 .badge {[m
[31m-    background: rgba(255, 255, 255, 0.15);[m
[31m-    backdrop-filter: blur(15px);[m
[31m-    -webkit-backdrop-filter: blur(15px);[m
[31m-    border: 1px solid rgba(255, 255, 255, 0.3);[m
[31m-    padding: 0.5rem 1.25rem;[m
[31m-    border-radius: 50px;[m
[31m-    color: white;[m
[31m-    font-size: 0.85rem;[m
[31m-    font-weight: 600;[m
[31m-    letter-spacing: 1px;[m
[31m-    text-transform: uppercase;[m
[31m-    box-shadow: 0 4px 15px rgba(0,0,0,0.2);[m
[31m-}[m
[31m-[m
[31m-/* Meta Data Grid (4 Columns) */[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.15);[m
[32m+[m[32m  backdrop-filter: blur(15px);[m
[32m+[m[32m  -webkit-backdrop-filter: blur(15px);[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.3);[m
[32m+[m[32m  padding: 0.5rem 1.25rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m}[m
 .project-meta-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(4, 1fr);[m
[31m-    gap: 2rem;[m
[31m-    padding: 3rem;[m
[31m-    background: var(--card-bg, rgba(255, 255, 255, 0.02));[m
[31m-    border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[31m-    border-radius: 20px;[m
[31m-    margin-bottom: 6rem;[m
[31m-    position: relative;[m
[31m-    z-index: 10;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(4, 1fr);[m
[32m+[m[32m  gap: 2rem;[m
[32m+[m[32m  padding: 3rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.02));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  margin-bottom: 6rem;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
 [data-theme="light"] .project-meta-grid {[m
[31m-    background: rgba(255,255,255,0.8);[m
[31m-    box-shadow: 0 10px 40px rgba(0,0,0,0.05);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.8);[m
[32m+[m[32m  box-shadow: 0 10px 40px rgba(0, 0, 0, 0.05);[m
 }[m
[31m-[m
 .meta-item h4 {[m
[31m-    font-size: 0.9rem;[m
[31m-    color: var(--text-muted);[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1.5px;[m
[31m-    margin-bottom: 0.75rem;[m
[31m-    margin-top: 0;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1.5px;[m
[32m+[m[32m  margin-bottom: 0.75rem;[m
[32m+[m[32m  margin-top: 0;[m
[32m+[m[32m}[m
 .meta-item p {[m
[31m-    font-size: 1.1rem;[m
[31m-    font-weight: 500;[m
[31m-    color: var(--text-light);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .meta-links {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 0.75rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 0.75rem;[m
 }[m
[31m-[m
 .project-link-btn {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    gap: 0.75rem;[m
[31m-    font-size: 0.95rem;[m
[31m-    font-weight: 600;[m
[31m-    text-decoration: none;[m
[31m-    color: var(--text-light);[m
[31m-    transition: all 0.3s ease;[m
[31m-    padding: 0.75rem 1.25rem;[m
[31m-    background: var(--card-bg, rgba(255, 255, 255, 0.05));[m
[31m-    border: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[31m-    border-radius: 8px;[m
[31m-    box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 0.75rem;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  padding: 0.75rem 1.25rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m  border-radius: 8px;[m
[32m+[m[32m  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);[m
[32m+[m[32m}[m
 [data-theme="light"] .project-link-btn {[m
[31m-    background: rgba(0,0,0,0.03);[m
[31m-    border: 1px solid rgba(0,0,0,0.08);[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.03);[m
[32m+[m[32m  border: 1px solid rgba(0, 0, 0, 0.08);[m
 }[m
[31m-[m
 .project-link-btn:hover {[m
[31m-    color: var(--accent-primary);[m
[31m-    border-color: var(--accent-primary);[m
[31m-    transform: translateY(-3px);[m
[31m-    box-shadow: 0 8px 25px rgba(0, 140, 255, 0.15);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-3px);[m
[32m+[m[32m  box-shadow: 0 8px 25px rgba(0, 140, 255, 0.15);[m
 }[m
[31m-[m
 .project-link-btn i {[m
[31m-    font-size: 1.1rem;[m
[32m+[m[32m  font-size: 1.1rem;[m
 }[m
[31m-[m
[31m-/* Typography elements */[m
 .section-subtitle {[m
[31m-    display: block;[m
[31m-    font-size: 0.9rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 2px;[m
[31m-    margin-bottom: 1rem;[m
[31m-    font-weight: 700;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  margin-bottom: 1rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m}[m
 .section-padding {[m
[31m-    padding: 5rem 0;[m
[32m+[m[32m  padding: 5rem 0;[m
 }[m
[31m-[m
 .large-text {[m
[31m-    font-size: 1.35rem;[m
[31m-    line-height: 1.8;[m
[31m-    color: var(--text-light);[m
[31m-    font-weight: 400;[m
[32m+[m[32m  font-size: 1.35rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 400;[m
 }[m
[31m-[m
[31m-/* The Narrative Container (Asymmetric setup) */[m
 .narrative-container {[m
[31m-    display: flex;[m
[31m-    max-width: 1200px;[m
[31m-    margin: 4rem auto;[m
[31m-    gap: 60px;[m
[31m-    align-items: flex-start;[m
[31m-    position: relative;[m
[31m-}[m
[31m-[m
[31m-/* Left Sidebar (Sticky) */[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 4rem auto;[m
[32m+[m[32m  gap: 60px;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
 .project-sidebar {[m
[31m-    width: 250px;[m
[31m-    flex-shrink: 0;[m
[31m-    position: sticky;[m
[31m-    top: 120px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 40px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  width: 250px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  position: sticky;[m
[32m+[m[32m  top: 120px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m}[m
 .project-toc {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
 }[m
[31m-[m
 .project-toc h4 {[m
[31m-    font-size: 0.9rem;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 15px;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 15px;[m
 }[m
[31m-[m
 .project-toc ul {[m
[31m-    list-style: none;[m
[31m-    padding: 0;[m
[31m-    margin: 0;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 12px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  list-style: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 12px;[m
[32m+[m[32m}[m
 .project-toc a {[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    font-size: 0.95rem;[m
[31m-    transition: color 0.3s ease, border-left-color 0.3s ease;[m
[31m-    border-left: 2px solid transparent;[m
[31m-    padding-left: 10px;[m
[31m-}[m
[31m-[m
[31m-.project-toc a:hover,[m
[31m-.project-toc a.active {[m
[31m-    color: var(--accent-primary);[m
[31m-    border-left-color: var(--accent-primary);[m
[31m-}[m
[31m-[m
[31m-/* The Trailing Line Animation (Snake SVG) */[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    border-left-color 0.3s ease;[m
[32m+[m[32m  border-left: 2px solid transparent;[m
[32m+[m[32m  padding-left: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-toc a.active,[m
[32m+[m[32m.project-toc a:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  border-left-color: var(--accent-primary);[m
[32m+[m[32m}[m
 .trailing-line-wrapper {[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    bottom: 0;[m
[31m-    left: -30px; /* Positioned just outside the sidebar */[m
[31m-    width: 20px;[m
[31m-    z-index: 0;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: -30px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  z-index: 0;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .snake-line-svg {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    overflow: visible;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  overflow: visible;[m
 }[m
[31m-[m
 .snake-track {[m
[31m-    fill: none;[m
[31m-    stroke: var(--border-color, rgba(255,255,255,0.06));[m
[31m-    stroke-width: 2;[m
[31m-    stroke-linecap: round;[m
[31m-    stroke-linejoin: round;[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: var(--border-color, rgba(255, 255, 255, 0.06));[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
 }[m
[31m-[m
 .snake-fill {[m
[31m-    fill: none;[m
[31m-    stroke: url(#snakeGradient);[m
[31m-    stroke-width: 2;[m
[31m-    stroke-linecap: round;[m
[31m-    stroke-linejoin: round;[m
[31m-    filter: drop-shadow(0 0 6px var(--accent-primary));[m
[31m-}[m
[31m-[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: url(#snakeGradient);[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
[32m+[m[32m  filter: drop-shadow(0 0 6px var(--accent-primary));[m
[32m+[m[32m}[m
 [data-theme="light"] .snake-track {[m
[31m-    stroke: rgba(0,0,0,0.06);[m
[32m+[m[32m  stroke: rgba(0, 0, 0, 0.06);[m
 }[m
[31m-[m
[31m-/* Project Tech Sidebar block */[m
 .project-tech-sidebar h4 {[m
[31m-    font-size: 0.9rem;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-/* Main Content Wrapper (Markdown) */[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 15px;[m
[32m+[m[32m}[m
 .project-content-wrapper {[m
[31m-    flex-grow: 1;[m
[31m-    min-width: 0; /* Prevents flex blowout */[m
[31m-    font-size: 1.15rem;[m
[31m-    line-height: 1.8;[m
[31m-    color: var(--text-light);[m
[31m-    opacity: 0.9;[m
[31m-}[m
[31m-[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m  min-width: 0;[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  opacity: 0.9;[m
[32m+[m[32m}[m
 .project-content-wrapper h2 {[m
[31m-    font-size: 2.2rem;[m
[31m-    margin-top: 2.5em;[m
[31m-    margin-bottom: 1em;[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[32m+[m[32m  font-size: 2.2rem;[m
[32m+[m[32m  margin-top: 2.5em;[m
[32m+[m[32m  margin-bottom: 1em;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
 }[m
[31m-[m
 .project-content-wrapper h3 {[m
[31m-    font-size: 1.5rem;[m
[31m-    margin-top: 2em;[m
[31m-    margin-bottom: 1em;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-light);[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  margin-top: 2em;[m
[32m+[m[32m  margin-bottom: 1em;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
 }[m
[31m-[m
 .project-content-wrapper p {[m
[31m-    margin-bottom: 1.5em;[m
[32m+[m[32m  margin-bottom: 1.5em;[m
 }[m
[31m-[m
[31m-/* Styled Markdown Blockquotes (replaces glass-panel) */[m
 .project-content-wrapper blockquote {[m
[31m-    margin: 2em 0;[m
[31m-    padding: 30px 40px;[m
[31m-    background: var(--card-bg, rgba(255, 255, 255, 0.03));[m
[31m-    backdrop-filter: blur(20px);[m
[31m-    border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[31m-    border-radius: 20px;[m
[31m-    box-shadow: 0 15px 35px rgba(0,0,0,0.1);[m
[31m-    font-size: 1.2rem;[m
[31m-    line-height: 1.6;[m
[31m-    color: var(--text-muted);[m
[31m-    position: relative;[m
[31m-    border-top: 4px solid var(--accent-primary);[m
[31m-}[m
[31m-[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  padding: 30px 40px;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.03));[m
[32m+[m[32m  backdrop-filter: blur(20px);[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  box-shadow: 0 15px 35px rgba(0, 0, 0, 0.1);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-top: 4px solid var(--accent-primary);[m
[32m+[m[32m}[m
 [data-theme="light"] .project-content-wrapper blockquote {[m
[31m-    background: rgba(255, 255, 255, 0.7);[m
[31m-    border: 1px solid rgba(0,0,0,0.05);[m
[31m-    border-top: 4px solid var(--accent-primary);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.7);[m
[32m+[m[32m  border: 1px solid rgba(0, 0, 0, 0.05);[m
[32m+[m[32m  border-top: 4px solid var(--accent-primary);[m
 }[m
[31m-[m
 .project-content-wrapper blockquote p {[m
[31m-    margin: 0;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .project-content-wrapper img {[m
[31m-    width: 100%;[m
[31m-    border-radius: 16px;[m
[31m-    margin: 2em 0;[m
[31m-    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
 }[m
[31m-[m
[31m-/* Technologies Section */[m
 .tech-pills-container {[m
[31m-    display: flex;[m
[31m-    flex-wrap: wrap;[m
[31m-    gap: 1.5rem;[m
[31m-    justify-content: center;[m
[31m-    margin-top: 3rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  margin-top: 3rem;[m
 }[m
[31m-[m
 .tech-pill {[m
[31m-    padding: 1rem 2rem;[m
[31m-    background: var(--card-bg, rgba(255, 255, 255, 0.05));[m
[31m-    border: 1px solid var(--border-color, rgba(255,255,255,0.1));[m
[31m-    border-radius: 50px;[m
[31m-    font-size: 1.1rem;[m
[31m-    font-weight: 500;[m
[31m-    color: var(--text-light);[m
[31m-    transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);[m
[31m-    cursor: default;[m
[31m-}[m
[31m-[m
[32m+[m[32m  padding: 1rem 2rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);[m
[32m+[m[32m  cursor: default;[m
[32m+[m[32m}[m
 [data-theme="light"] .tech-pill {[m
[31m-    background: rgba(0,0,0,0.03);[m
[31m-    border: 1px solid rgba(0,0,0,0.08);[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.03);[m
[32m+[m[32m  border: 1px solid rgba(0, 0, 0, 0.08);[m
 }[m
[31m-[m
 .tech-pill:hover {[m
[31m-    transform: translateY(-5px) scale(1.05);[m
[31m-    border-color: var(--accent-primary);[m
[31m-    box-shadow: 0 10px 20px rgba(0, 140, 255, 0.2);[m
[31m-    background: rgba(0, 140, 255, 0.05);[m
[31m-    color: var(--accent-primary);[m
[31m-}[m
[31m-[m
[31m-/* Project Footer Navigation */[m
[32m+[m[32m  transform: translateY(-5px) scale(1.05);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 10px 20px rgba(0, 140, 255, 0.2);[m
[32m+[m[32m  background: rgba(0, 140, 255, 0.05);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
 .project-bottom-nav {[m
[31m-    display: flex;[m
[31m-    justify-content: space-between;[m
[31m-    border-top: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[31m-    padding: 3rem 0;[m
[31m-    margin-top: 5rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  border-top: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m  padding: 3rem 0;[m
[32m+[m[32m  margin-top: 5rem;[m
 }[m
[31m-[m
 .nav-direction-btn {[m
[31m-    text-decoration: none;[m
[31m-    color: var(--text-light);[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 0.5rem;[m
[31m-    transition: transform 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m}[m
 .nav-direction-btn .direction-label {[m
[31m-    font-size: 0.85rem;[m
[31m-    color: var(--text-muted);[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
 }[m
[31m-[m
 .nav-direction-btn .target-title {[m
[31m-    font-size: 1.5rem;[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .nav-direction-btn.prev-btn:hover {[m
[31m-    transform: translateX(-10px);[m
[32m+[m[32m  transform: translateX(-10px);[m
 }[m
[31m-[m
 .nav-direction-btn.next-btn {[m
[31m-    text-align: right;[m
[32m+[m[32m  text-align: right;[m
 }[m
[31m-[m
 .nav-direction-btn.next-btn:hover {[m
[31m-    transform: translateX(10px);[m
[32m+[m[32m  transform: translateX(10px);[m
 }[m
[31m-[m
 .project-footer {[m
[31m-    text-align: center;[m
[31m-    padding: 2rem 0;[m
[31m-    color: var(--text-muted);[m
[31m-    font-size: 0.9rem;[m
[31m-    border-top: 1px dashed var(--border-color, rgba(255,255,255,0.1));[m
[31m-}[m
[31m-[m
[31m-/* --- New Enrichment Sections --- */[m
[31m-[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  padding: 2rem 0;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  border-top: 1px dashed var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m}[m
 .section-title {[m
[31m-    font-size: 2.2rem;[m
[31m-    margin-top: 4rem;[m
[31m-    margin-bottom: 2rem;[m
[31m-    font-weight: 700;[m
[31m-    color: var(--text-light);[m
[31m-    border-bottom: 2px solid var(--accent-primary);[m
[31m-    display: inline-block;[m
[31m-    padding-bottom: 0.5rem;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 2.2rem;[m
[32m+[m[32m  margin-top: 4rem;[m
[32m+[m[32m  margin-bottom: 2rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  border-bottom: 2px solid var(--accent-primary);[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  padding-bottom: 0.5rem;[m
[32m+[m[32m}[m
 .section-desc {[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 3rem;[m
[31m-    max-width: 800px;[m
[31m-    font-size: 1.1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 3rem;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  font-size: 1.1rem;[m
 }[m
[31m-[m
[31m-/* Features Grid */[m
 .features-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));[m
[31m-    gap: 1.5rem;[m
[31m-    margin-bottom: 5rem;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  margin-bottom: 5rem;[m
 }[m
[31m-[m
 .feature-card {[m
[31m-    background: var(--card-bg, rgba(255, 255, 255, 0.03));[m
[31m-    border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[31m-    padding: 1.5rem;[m
[31m-    border-radius: 16px;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 1.25rem;[m
[31m-    transition: all 0.3s ease;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.03));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  padding: 1.5rem;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 1.25rem;[m
[32m+[m[32m  transition: all 0.3s ease;[m
 }[m
[31m-[m
 .feature-card:hover {[m
[31m-    transform: translateY(-5px);[m
[31m-    background: rgba(var(--accent-primary-rgb), 0.05);[m
[31m-    border-color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-5px);[m
[32m+[m[32m  background: rgba(var(--accent-primary-rgb), 0.05);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
 }[m
[31m-[m
 .feature-icon {[m
[31m-    font-size: 1.25rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    background: rgba(var(--accent-primary-rgb), 0.1);[m
[31m-    width: 40px;[m
[31m-    height: 40px;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    border-radius: 50%;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 1.25rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  background: rgba(var(--accent-primary-rgb), 0.1);[m
[32m+[m[32m  width: 40px;[m
[32m+[m[32m  height: 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m}[m
 .feature-text {[m
[31m-    font-size: 1.05rem;[m
[31m-    font-weight: 500;[m
[32m+[m[32m  font-size: 1.05rem;[m
[32m+[m[32m  font-weight: 500;[m
 }[m
[31m-[m
[31m-/* Before / After Slider */[m
 .comparison-slider-wrapper {[m
[31m-    position: relative;[m
[31m-    width: 100%;[m
[31m-    margin: 4rem 0;[m
[31m-    border-radius: 20px;[m
[31m-    overflow: hidden;[m
[31m-    box-shadow: 0 20px 40px rgba(0,0,0,0.3);[m
[31m-    aspect-ratio: 16/9;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  margin: 4rem 0;[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  box-shadow: 0 20px 40px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m  aspect-ratio: 16/9;[m
[32m+[m[32m}[m
 .comparison-slider {[m
[31m-    position: relative;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    user-select: none;[m
[31m-    cursor: ew-resize;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  cursor: ew-resize;[m
 }[m
[31m-[m
 .comparison-img {[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .comparison-img.before {[m
[31m-    z-index: 1;[m
[32m+[m[32m  z-index: 1;[m
 }[m
[31m-[m
 .comparison-img.after {[m
[31m-    z-index: 2;[m
[31m-    clip-path: inset(0 0 0 50%); /* Start at middle */[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  clip-path: inset(0 0 0 50%);[m
 }[m
[31m-[m
 .slider-handle {[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    bottom: 0;[m
[31m-    left: 50%;[m
[31m-    width: 4px;[m
[31m-    background: var(--accent-primary);[m
[31m-    z-index: 3;[m
[31m-    pointer-events: none;[m
[31m-    box-shadow: 0 0 20px var(--accent-primary);[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  width: 4px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  z-index: 3;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  box-shadow: 0 0 20px var(--accent-primary);[m
[32m+[m[32m}[m
 .slider-handle::after {[m
[31m-    content: '';[m
[31m-    position: absolute;[m
[31m-    top: 50%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    width: 48px;[m
[31m-    height: 48px;[m
[31m-    background: var(--accent-primary);[m
[31m-    border-radius: 50%;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    box-shadow: 0 5px 15px rgba(0,0,0,0.3);[m
[31m-}[m
[31m-[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  width: 48px;[m
[32m+[m[32m  height: 48px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m}[m
 .slider-handle i {[m
[31m-    position: absolute;[m
[31m-    top: 50%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    color: white;[m
[31m-    z-index: 4;[m
[31m-    font-size: 1.2rem;[m
[31m-}[m
[31m-[m
[31m-/* Challenges Grid */[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  z-index: 4;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m}[m
 .challenges-grid {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 3rem;[m
[31m-    margin-bottom: 5rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 3rem;[m
[32m+[m[32m  margin-bottom: 5rem;[m
 }[m
[31m-[m
 .challenge-pair {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: 1fr 1fr;[m
[31m-    gap: 2rem;[m
[31m-    background: var(--card-bg, rgba(255, 255, 255, 0.02));[m
[31m-    border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[31m-    border-radius: 24px;[m
[31m-    overflow: hidden;[m
[31m-}[m
[31m-[m
[31m-.challenge-side, .solution-side {[m
[31m-    padding: 2.5rem;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 1rem;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: 1fr 1fr;[m
[32m+[m[32m  gap: 2rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.02));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border-radius: 24px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.challenge-side,[m
[32m+[m[32m.solution-side {[m
[32m+[m[32m  padding: 2.5rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 1rem;[m
[32m+[m[32m}[m
 .challenge-side {[m
[31m-    background: rgba(255, 255, 255, 0.01);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.01);[m
 }[m
[31m-[m
 .solution-side {[m
[31m-    background: rgba(var(--accent-primary-rgb), 0.03);[m
[31m-    border-left: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  background: rgba(var(--accent-primary-rgb), 0.03);[m
[32m+[m[32m  border-left: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
 }[m
[31m-[m
 .side-label {[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 700;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 2px;[m
[31m-}[m
[31m-[m
[31m-.side-label.issue { color: #ff5f5f; }[m
[31m-.side-label.solution { color: var(--accent-primary); }[m
[31m-[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.side-label.issue {[m
[32m+[m[32m  color: #ff5f5f;[m
[32m+[m[32m}[m
[32m+[m[32m.side-label.solution {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
 .challenge-pair p {[m
[31m-    margin: 0;[m
[31m-    font-size: 1.1rem;[m
[31m-    line-height: 1.6;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  line-height: 1.6;[m
 }[m
[31m-[m
[31m-/* Results Section */[m
 .results-container {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 1.5rem;[m
[31m-    margin-bottom: 6rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  margin-bottom: 6rem;[m
 }[m
[31m-[m
 .result-item {[m
[31m-    display: flex;[m
[31m-    align-items: flex-start;[m
[31m-    gap: 1.5rem;[m
[31m-    background: var(--glass-bg);[m
[31m-    padding: 1.5rem 2rem;[m
[31m-    border-radius: 16px;[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  padding: 1.5rem 2rem;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
 .result-icon {[m
[31m-    font-size: 1.4rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin-top: 0.2rem;[m
[32m+[m[32m  font-size: 1.4rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-top: 0.2rem;[m
 }[m
[31m-[m
 .result-text {[m
[31m-    margin: 0;[m
[31m-    font-size: 1.15rem;[m
[31m-    font-weight: 500;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  font-weight: 500;[m
 }[m
[31m-[m
[31m-/* Responsive Adjustments */[m
 @media (max-width: 900px) {[m
[31m-    .challenge-pair {[m
[31m-        grid-template-columns: 1fr;[m
[31m-    }[m
[31m-    [m
[31m-    .solution-side {[m
[31m-        border-left: none;[m
[31m-        border-top: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[31m-    }[m
[31m-}[m
[31m-[m
[32m+[m[32m  .challenge-pair {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m  .solution-side {[m
[32m+[m[32m    border-left: none;[m
[32m+[m[32m    border-top: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 @media (max-width: 768px) {[m
[31m-    .section-title {[m
[31m-        font-size: 1.8rem;[m
[31m-    }[m
[31m-    [m
[31m-    .comparison-slider-wrapper {[m
[31m-        aspect-ratio: 4/3;[m
[31m-    }[m
[31m-    [m
[31m-    .challenge-side, .solution-side {[m
[31m-        padding: 1.5rem;[m
[31m-    }[m
[32m+[m[32m  .section-title {[m
[32m+[m[32m    font-size: 1.8rem;[m
[32m+[m[32m  }[m
[32m+[m[32m  .comparison-slider-wrapper {[m
[32m+[m[32m    aspect-ratio: 4/3;[m
[32m+[m[32m  }[m
[32m+[m[32m  .challenge-side,[m
[32m+[m[32m  .solution-side {[m
[32m+[m[32m    padding: 1.5rem;[m
[32m+[m[32m  }[m
 }[m
[1mdiff --git a/css/project.min.css b/css/project.min.css[m
[1mnew file mode 100644[m
[1mindex 0000000..a049228[m
[1m--- /dev/null[m
[1m+++ b/css/project.min.css[m
[36m@@ -0,0 +1,621 @@[m
[32m+[m[32m.project-detail-page {[m
[32m+[m[32m  background-color: var(--bg-color);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m}[m
[32m+[m[32mbody.project-detail-page {[m
[32m+[m[32m  overflow-y: auto !important;[m
[32m+[m[32m  overflow-x: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.project-container {[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 0 5%;[m
[32m+[m[32m}[m
[32m+[m[32m.scroll-progress-bar {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 0%;[m
[32m+[m[32m  height: 4px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  z-index: 10000;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-btn {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  margin-top: 2rem;[m
[32m+[m[32m  margin-bottom: 2rem;[m
[32m+[m[32m  padding: 0.75rem 1.5rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
[32m+[m[32m.back-home-btn:hover {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  transform: translateX(-5px);[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .back-home-btn:hover {[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.1);[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero {[m
[32m+[m[32m  margin-bottom: 4rem;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-radius: 30px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  box-shadow: 0 20px 50px rgba(0, 0, 0, 0.15);[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero-image-container {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 60vh;[m
[32m+[m[32m  min-height: 400px;[m
[32m+[m[32m  max-height: 700px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero-img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  object-position: center;[m
[32m+[m[32m  transition: transform 10s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero:hover .project-hero-img {[m
[32m+[m[32m  transform: scale(1.08);[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero-overlay {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  inset: 0;[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    180deg,[m
[32m+[m[32m    rgba(0, 0, 0, 0) 0,[m
[32m+[m[32m    rgba(0, 0, 0, 0.8) 100%[m
[32m+[m[32m  );[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero-title {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: 3rem;[m
[32m+[m[32m  left: 3rem;[m
[32m+[m[32m  font-size: clamp(3rem, 6vw, 5rem);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  text-shadow: 0 4px 20px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  line-height: 1.1;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.project-hero-badges {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 2rem;[m
[32m+[m[32m  right: 2rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 1rem;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.badge {[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.15);[m
[32m+[m[32m  backdrop-filter: blur(15px);[m
[32m+[m[32m  -webkit-backdrop-filter: blur(15px);[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.3);[m
[32m+[m[32m  padding: 0.5rem 1.25rem;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m}[m
[32m+[m[32m.project-meta-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(4, 1fr);[m
[32m+[m[32m  gap: 2rem;[m
[32m+[m[32m  padding: 3rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.02));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  margin-bottom: 6rem;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .project-meta-grid {[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.8);[m
[32m+[m[32m  box-shadow: 0 10px 40px rgba(0, 0, 0, 0.05);[m
[32m+[m[32m}[m
[32m+[m[32m.meta-item h4 {[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1.5px;[m
[32m+[m[32m  margin-bottom: 0.75rem;[m
[32m+[m[32m  margin-top: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.meta-item p {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.meta-links {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 0.75rem;[m
[32m+[m[32m}[m
[32m+[m[32m.project-link-btn {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 0.75rem;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  padding: 0.75rem 1.25rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m  border-radius: 8px;[m
[32m+[m[32m  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .project-link-btn {[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.03);[m
[32m+[m[32m  border: 1px solid rgba(0, 0, 0, 0.08);[m
[32m+[m[32m}[m
[32m+[m[32m.project-link-btn:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-3px);[m
[32m+[m[32m  box-shadow: 0 8px 25px rgba(0, 140, 255, 0.15);[m
[32m+[m[32m}[m
[32m+[m[32m.project-link-btn i {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m}[m
[32m+[m[32m.section-subtitle {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  margin-bottom: 1rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m}[m
[32m+[m[32m.section-padding {[m
[32m+[m[32m  padding: 5rem 0;[m
[32m+[m[32m}[m
[32m+[m[32m.large-text {[m
[32m+[m[32m  font-size: 1.35rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m}[m
[32m+[m[32m.narrative-container {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  margin: 4rem auto;[m
[32m+[m[32m  gap: 60px;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.project-sidebar {[m
[32m+[m[32m  width: 250px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  position: sticky;[m
[32m+[m[32m  top: 120px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-toc {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m}[m
[32m+[m[32m.project-toc h4 {[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-toc ul {[m
[32m+[m[32m  list-style: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 12px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-toc a {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    border-left-color 0.3s ease;[m
[32m+[m[32m  border-left: 2px solid transparent;[m
[32m+[m[32m  padding-left: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-toc a.active,[m
[32m+[m[32m.project-toc a:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  border-left-color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.trailing-line-wrapper {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: -30px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  z-index: 0;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.snake-line-svg {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  overflow: visible;[m
[32m+[m[32m}[m
[32m+[m[32m.snake-track {[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: var(--border-color, rgba(255, 255, 255, 0.06));[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
[32m+[m[32m}[m
[32m+[m[32m.snake-fill {[m
[32m+[m[32m  fill: none;[m
[32m+[m[32m  stroke: url(#snakeGradient);[m
[32m+[m[32m  stroke-width: 2;[m
[32m+[m[32m  stroke-linecap: round;[m
[32m+[m[32m  stroke-linejoin: round;[m
[32m+[m[32m  filter: drop-shadow(0 0 6px var(--accent-primary));[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .snake-track {[m
[32m+[m[32m  stroke: rgba(0, 0, 0, 0.06);[m
[32m+[m[32m}[m
[32m+[m[32m.project-tech-sidebar h4 {[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper {[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m  min-width: 0;[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  line-height: 1.8;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  opacity: 0.9;[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper h2 {[m
[32m+[m[32m  font-size: 2.2rem;[m
[32m+[m[32m  margin-top: 2.5em;[m
[32m+[m[32m  margin-bottom: 1em;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper h3 {[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  margin-top: 2em;[m
[32m+[m[32m  margin-bottom: 1em;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper p {[m
[32m+[m[32m  margin-bottom: 1.5em;[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper blockquote {[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  padding: 30px 40px;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.03));[m
[32m+[m[32m  backdrop-filter: blur(20px);[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  box-shadow: 0 15px 35px rgba(0, 0, 0, 0.1);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  border-top: 4px solid var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .project-content-wrapper blockquote {[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.7);[m
[32m+[m[32m  border: 1px solid rgba(0, 0, 0, 0.05);[m
[32m+[m[32m  border-top: 4px solid var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper blockquote p {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.project-content-wrapper img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  margin: 2em 0;[m
[32m+[m[32m  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m}[m
[32m+[m[32m.tech-pills-container {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  margin-top: 3rem;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-pill {[m
[32m+[m[32m  padding: 1rem 2rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);[m
[32m+[m[32m  cursor: default;[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .tech-pill {[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.03);[m
[32m+[m[32m  border: 1px solid rgba(0, 0, 0, 0.08);[m
[32m+[m[32m}[m
[32m+[m[32m.tech-pill:hover {[m
[32m+[m[32m  transform: translateY(-5px) scale(1.05);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 10px 20px rgba(0, 140, 255, 0.2);[m
[32m+[m[32m  background: rgba(0, 140, 255, 0.05);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.project-bottom-nav {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  border-top: 1px solid var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m  padding: 3rem 0;[m
[32m+[m[32m  margin-top: 5rem;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn {[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 0.5rem;[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn .direction-label {[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn .target-title {[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.prev-btn:hover {[m
[32m+[m[32m  transform: translateX(-10px);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.next-btn {[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-direction-btn.next-btn:hover {[m
[32m+[m[32m  transform: translateX(10px);[m
[32m+[m[32m}[m
[32m+[m[32m.project-footer {[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  padding: 2rem 0;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  border-top: 1px dashed var(--border-color, rgba(255, 255, 255, 0.1));[m
[32m+[m[32m}[m
[32m+[m[32m.section-title {[m
[32m+[m[32m  font-size: 2.2rem;[m
[32m+[m[32m  margin-top: 4rem;[m
[32m+[m[32m  margin-bottom: 2rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  border-bottom: 2px solid var(--accent-primary);[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  padding-bottom: 0.5rem;[m
[32m+[m[32m}[m
[32m+[m[32m.section-desc {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 3rem;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m}[m
[32m+[m[32m.features-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  margin-bottom: 5rem;[m
[32m+[m[32m}[m
[32m+[m[32m.feature-card {[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.03));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  padding: 1.5rem;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 1.25rem;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.feature-card:hover {[m
[32m+[m[32m  transform: translateY(-5px);[m
[32m+[m[32m  background: rgba(var(--accent-primary-rgb), 0.05);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.feature-icon {[m
[32m+[m[32m  font-size: 1.25rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  background: rgba(var(--accent-primary-rgb), 0.1);[m
[32m+[m[32m  width: 40px;[m
[32m+[m[32m  height: 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m}[m
[32m+[m[32m.feature-text {[m
[32m+[m[32m  font-size: 1.05rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
[32m+[m[32m.comparison-slider-wrapper {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  margin: 4rem 0;[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  box-shadow: 0 20px 40px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m  aspect-ratio: 16/9;[m
[32m+[m[32m}[m
[32m+[m[32m.comparison-slider {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  cursor: ew-resize;[m
[32m+[m[32m}[m
[32m+[m[32m.comparison-img {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.comparison-img.before {[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.comparison-img.after {[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  clip-path: inset(0 0 0 50%);[m
[32m+[m[32m}[m
[32m+[m[32m.slider-handle {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  width: 4px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  z-index: 3;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  box-shadow: 0 0 20px var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.slider-handle::after {[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  width: 48px;[m
[32m+[m[32m  height: 48px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m}[m
[32m+[m[32m.slider-handle i {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  z-index: 4;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m}[m
[32m+[m[32m.challenges-grid {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 3rem;[m
[32m+[m[32m  margin-bottom: 5rem;[m
[32m+[m[32m}[m
[32m+[m[32m.challenge-pair {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: 1fr 1fr;[m
[32m+[m[32m  gap: 2rem;[m
[32m+[m[32m  background: var(--card-bg, rgba(255, 255, 255, 0.02));[m
[32m+[m[32m  border: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  border-radius: 24px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.challenge-side,[m
[32m+[m[32m.solution-side {[m
[32m+[m[32m  padding: 2.5rem;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 1rem;[m
[32m+[m[32m}[m
[32m+[m[32m.challenge-side {[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.01);[m
[32m+[m[32m}[m
[32m+[m[32m.solution-side {[m
[32m+[m[32m  background: rgba(var(--accent-primary-rgb), 0.03);[m
[32m+[m[32m  border-left: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m}[m
[32m+[m[32m.side-label {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.side-label.issue {[m
[32m+[m[32m  color: #ff5f5f;[m
[32m+[m[32m}[m
[32m+[m[32m.side-label.solution {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.challenge-pair p {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m}[m
[32m+[m[32m.results-container {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  margin-bottom: 6rem;[m
[32m+[m[32m}[m
[32m+[m[32m.result-item {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  gap: 1.5rem;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  padding: 1.5rem 2rem;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.result-icon {[m
[32m+[m[32m  font-size: 1.4rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin-top: 0.2rem;[m
[32m+[m[32m}[m
[32m+[m[32m.result-text {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  font-size: 1.15rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 900px) {[m
[32m+[m[32m  .challenge-pair {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m  }[m
[32m+[m[32m  .solution-side {[m
[32m+[m[32m    border-left: none;[m
[32m+[m[32m    border-top: 1px solid var(--border-color, rgba(255, 255, 255, 0.05));[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .section-title {[m
[32m+[m[32m    font-size: 1.8rem;[m
[32m+[m[32m  }[m
[32m+[m[32m  .comparison-slider-wrapper {[m
[32m+[m[32m    aspect-ratio: 4/3;[m
[32m+[m[32m  }[m
[32m+[m[32m  .challenge-side,[m
[32m+[m[32m  .solution-side {[m
[32m+[m[32m    padding: 1.5rem;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/css/style.css b/css/style.css[m
[1mindex 54ea687..1f6bb6f 100644[m
[1m--- a/css/style.css[m
[1m+++ b/css/style.css[m
[36m@@ -1,2234 +1,1959 @@[m
[31m-/**[m
[31m- * ============================================================[m
[31m- *  Portfolio Stylesheet — style.css[m
[31m- *  Copyright (c) 2024–2026 Mosa Moleleki ("Mr-S-U-D-O" / "S.U.D.O")[m
[31m- *  All Rights Reserved.[m
[31m- *[m
[31m- *  PROPRIETARY AND CONFIDENTIAL.[m
[31m- *  Unauthorised copying, modification, or distribution of this[m
[31m- *  file, via any medium, is strictly prohibited.[m
[31m- *  See LICENSE in the project root for full terms.[m
[31m- *  Contact: Molelekishoez@gmail.com[m
[31m- * ============================================================[m
[31m- */[m
[31m-@import url('https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;700&family=Playfair+Display:ital,wght@0,400;0,600;1,400&display=swap');[m
[31m-[m
[32m+[m[32m@import url(https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;700&family=Playfair+Display:ital,wght@0,400;0,600;1,400&display=swap);[m
 :root {[m
[31m-    /* Dark Theme Palette (Easy to change later) */[m
[31m-    --bg-dark: #0a0a0a;[m
[31m-    --text-light: #ffffff;[m
[31m-    --text-muted: #a3a3a3;[m
[31m-    --accent-primary: #008cff;[m
[31m-    [m
[31m-    /* Skeleton Loader Colors */[m
[31m-    --skeleton-base: #171717;[m
[31m-    --skeleton-highlight: #262626;[m
[31m-[m
[31m-    /* Glass and Overlay Backgrounds */[m
[31m-    --glass-bg: rgba(20, 20, 20, 0.4);[m
[31m-    --glass-border: rgba(255, 255, 255, 0.05);[m
[31m-    --glass-line: rgba(255, 255, 255, 0.2);[m
[31m-    --tooltip-bg: rgba(255, 255, 255, 0.1);[m
[31m-    --tooltip-border: rgba(255, 255, 255, 0.1);[m
[31m-    --overlay-bg: rgba(10, 10, 10, 0.3);[m
[31m-    --ghost-opacity: 0.05;[m
[31m-}[m
[31m-[m
[32m+[m[32m  --bg-dark: #0a0a0a;[m
[32m+[m[32m  --text-light: #ffffff;[m
[32m+[m[32m  --text-muted: #a3a3a3;[m
[32m+[m[32m  --accent-primary: #008cff;[m
[32m+[m[32m  --skeleton-base: #171717;[m
[32m+[m[32m  --skeleton-highlight: #262626;[m
[32m+[m[32m  --glass-bg: rgba(20, 20, 20, 0.4);[m
[32m+[m[32m  --glass-border: rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  --glass-line: rgba(255, 255, 255, 0.2);[m
[32m+[m[32m  --tooltip-bg: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  --tooltip-border: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  --overlay-bg: rgba(10, 10, 10, 0.3);[m
[32m+[m[32m  --ghost-opacity: 0.05;[m
[32m+[m[32m}[m
 [data-theme="light"] {[m
[31m-    --bg-dark: #e2e8f0;  /* Soft, warm white background */[m
[31m-    --text-light: #000000; /* Charcoal for high contrast but softer than black */[m
[31m-    --text-muted: #64748b;[m
[31m-    --accent-primary: #008cff;[m
[31m-    [m
[31m-    --skeleton-base: #cbd5e1;[m
[31m-    --skeleton-highlight: #e2e8f0;[m
[31m-[m
[31m-    --glass-bg: rgba(255, 255, 255, 0.6);[m
[31m-    --glass-border: rgba(0, 0, 0, 0.05);[m
[31m-    --glass-line: rgba(0, 0, 0, 0.1);[m
[31m-    --tooltip-bg: rgba(255, 255, 255, 0.85);[m
[31m-    --tooltip-border: rgba(0, 0, 0, 0.08);[m
[31m-    --overlay-bg: rgba(255, 255, 255, 0.3);[m
[31m-    --ghost-opacity: 0.2;[m
[31m-}[m
[31m-[m
[31m-body, html {[m
[31m-    margin: 0;[m
[31m-    padding: 0;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    background-color: var(--bg-dark);[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    overflow: hidden; /* Prevent scrolling during the intro animation */[m
[31m-    transition: background-color 0.4s ease, color 0.4s ease;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Splash Screen Overlay[m
[31m-========================================= */[m
[32m+[m[32m  --bg-dark: #e2e8f0;[m
[32m+[m[32m  --text-light: #000000;[m
[32m+[m[32m  --text-muted: #64748b;[m
[32m+[m[32m  --accent-primary: #008cff;[m
[32m+[m[32m  --skeleton-base: #cbd5e1;[m
[32m+[m[32m  --skeleton-highlight: #e2e8f0;[m
[32m+[m[32m  --glass-bg: rgba(255, 255, 255, 0.6);[m
[32m+[m[32m  --glass-border: rgba(0, 0, 0, 0.05);[m
[32m+[m[32m  --glass-line: rgba(0, 0, 0, 0.1);[m
[32m+[m[32m  --tooltip-bg: rgba(255, 255, 255, 0.85);[m
[32m+[m[32m  --tooltip-border: rgba(0, 0, 0, 0.08);[m
[32m+[m[32m  --overlay-bg: rgba(255, 255, 255, 0.3);[m
[32m+[m[32m  --ghost-opacity: 0.2;[m
[32m+[m[32m}[m
[32m+[m[32mbody,[m
[32m+[m[32mhtml {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background-color 0.4s ease,[m
[32m+[m[32m    color 0.4s ease;[m
[32m+[m[32m}[m
 .splash-screen {[m
[31m-    position: fixed;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 100vw;[m
[31m-    height: 100vh;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    background-color: var(--bg-dark);[m
[31m-    z-index: 9999;[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  z-index: 9999;[m
 }[m
[31m-[m
 #laptop,[m
 #laptop-screen {[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
 }[m
[31m-[m
 .screen-content {[m
[31m-    /* Match the aspect ratio and size of the laptop screen inside the 3D model */[m
[31m-    width: 416px;[m
[31m-    height: 280px;[m
[31m-    background-color: var(--bg-dark); /* match the black background so skeleton blends in */[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    border-radius: 4px;[m
[31m-    /* Optional: hide overflow to simulate screen edges */[m
[31m-    overflow: hidden;[m
[32m+[m[32m  width: 416px;[m
[32m+[m[32m  height: 280px;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  overflow: hidden;[m
 }[m
[31m-[m
[31m-/* --- Skeleton Loader --- */[m
 .skeleton-loader {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-    gap: 15px;[m
[31m-    width: 80%;[m
[31m-    max-width: 300px;[m
[31m-    opacity: 1;[m
[31m-    transition: opacity 0.8s ease-in-out;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  width: 80%;[m
[32m+[m[32m  max-width: 300px;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transition: opacity 0.8s ease-in-out;[m
 }[m
[31m-[m
 .skeleton-bar {[m
[31m-    height: 20px;[m
[31m-    background: var(--skeleton-base);[m
[31m-    border-radius: 4px;[m
[31m-    overflow: hidden;[m
[31m-    position: relative;[m
[32m+[m[32m  height: 20px;[m
[32m+[m[32m  background: var(--skeleton-base);[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  position: relative;[m
 }[m
[31m-[m
 .skeleton-bar.short {[m
[31m-    width: 60%;[m
[32m+[m[32m  width: 60%;[m
 }[m
[31m-[m
[31m-/* Shimmer Effect */[m
 .skeleton-bar::after {[m
[31m-    content: '';[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    right: 0;[m
[31m-    bottom: 0;[m
[31m-    left: 0;[m
[31m-    transform: translateX(-100%);[m
[31m-    background-image: linear-gradient([m
[31m-        90deg,[m
[31m-        rgba(255, 255, 255, 0) 0,[m
[31m-        rgba(255, 255, 255, 0.05) 20%,[m
[31m-        rgba(255, 255, 255, 0.05) 60%,[m
[31m-        rgba(255, 255, 255, 0)[m
[31m-    );[m
[31m-}[m
[31m-[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  transform: translateX(-100%);[m
[32m+[m[32m  background-image: linear-gradient([m
[32m+[m[32m    90deg,[m
[32m+[m[32m    rgba(255, 255, 255, 0) 0,[m
[32m+[m[32m    rgba(255, 255, 255, 0.05) 20%,[m
[32m+[m[32m    rgba(255, 255, 255, 0.05) 60%,[m
[32m+[m[32m    rgba(255, 255, 255, 0)[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
 .skeleton-loader.active .skeleton-bar::after {[m
[31m-    animation: shimmer 1.5s infinite;[m
[32m+[m[32m  animation: shimmer 1.5s infinite;[m
 }[m
[31m-[m
 @keyframes shimmer {[m
[31m-    100% {[m
[31m-        transform: translateX(100%);[m
[31m-    }[m
[32m+[m[32m  100% {[m
[32m+[m[32m    transform: translateX(100%);[m
[32m+[m[32m  }[m
 }[m
[31m-[m
 .fade-out {[m
[31m-    opacity: 0 !important;[m
[31m-    pointer-events: none;[m
[32m+[m[32m  opacity: 0 !important;[m
[32m+[m[32m  pointer-events: none;[m
 }[m
[31m-[m
[31m-/* --- Quote Animation --- */[m
 .quote-container {[m
[31m-    position: absolute;[m
[31m-    width: 100vw;[m
[31m-    left: 0;[m
[31m-    box-sizing: border-box;[m
[31m-    text-align: center;[m
[31m-    opacity: 0;[m
[31m-    transform-origin: center center;[m
[31m-    transform: translateY(20px); /* Animation in: Rise up */[m
[31m-    transition: opacity 1s ease, transform 1s ease;[m
[31m-    padding: 0 100px;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  box-sizing: border-box;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform-origin: center center;[m
[32m+[m[32m  transform: translateY(20px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1s ease,[m
[32m+[m[32m    transform 1s ease;[m
[32m+[m[32m  padding: 0 100px;[m
 }[m
[31m-[m
 .quote-container.show {[m
[31m-    opacity: 1;[m
[31m-    transform: translateY(0);[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
 }[m
[31m-[m
 .quote-text {[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: clamp(2rem, 5vw, 4rem);[m
[31m-    font-weight: 300;[m
[31m-    letter-spacing: 0.5px;[m
[31m-    margin: 0 0 15px 0;[m
[31m-    color: var(--text-light);[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 4rem);[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  letter-spacing: 0.5px;[m
[32m+[m[32m  margin: 0 0 15px 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
 .quote-author {[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: clamp(0.9rem, 1.5vw, 1.2rem);[m
[31m-    font-weight: 300;[m
[31m-    letter-spacing: 4px;[m
[31m-    color: var(--text-muted);[m
[31m-    text-transform: uppercase;[m
[31m-    margin: 10px 10px 0 0;[m
[31m-    opacity: 0.8;[m
[31m-    text-align: right;[m
[31m-    width: 100%;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: clamp(0.9rem, 1.5vw, 1.2rem);[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin: 10px 10px 0 0;[m
[32m+[m[32m  opacity: 0.8;[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m  width: 100%;[m
 }[m
[31m-[m
 .quote-dash {[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
[31m-/* Animation out: Zooming INTO the quote */[m
 .quote-container.zoom-into {[m
[31m-    transform: scale(250); /* Force extreme expansion */[m
[31m-    opacity: 0;[m
[31m-    pointer-events: none;[m
[31m-    /* transition: [m
[31m-       transform: specialized expo-in-out curve for a slow start, then massive rush forward[m
[31m-       opacity: quick fade at the very end of the animation to hide clipping[m
[31m-    */[m
[31m-    transition: transform 2.5s cubic-bezier(0.9, 0, 0.1, 1), opacity 0.8s ease-in 1.4s;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Global Blur Overlay (Triggered on hover)[m
[31m-========================================= */[m
[32m+[m[32m  transform: scale(250);[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 2.5s cubic-bezier(0.9, 0, 0.1, 1),[m
[32m+[m[32m    opacity 0.8s ease-in 1.4s;[m
[32m+[m[32m}[m
 .content-overlay {[m
[31m-    position: fixed;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 100vw;[m
[31m-    height: 100vh;[m
[31m-    background: var(--overlay-bg);[m
[31m-    backdrop-filter: blur(8px);[m
[31m-    z-index: 50; /* Sits below sidebar (100) and focused elements */[m
[31m-    opacity: 0;[m
[31m-    overflow: hidden;[m
[31m-    pointer-events: none;[m
[31m-    transition: opacity 0.4s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  background: var(--overlay-bg);[m
[32m+[m[32m  backdrop-filter: blur(8px);[m
[32m+[m[32m  z-index: 50;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  transition: opacity 0.4s ease;[m
[32m+[m[32m}[m
 .content-overlay.active {[m
[31m-    opacity: 1;[m
[31m-    overflow: hidden;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  overflow: hidden;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Scroll Zoom Rig[m
[31m-========================================= */[m
 .hero-scroll-rig {[m
[31m-    position: relative;[m
[31m-    height: 150vh; /* Determines scroll distance for the zoom */[m
[31m-    width: 100%;[m
[31m-    [m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 150vh;[m
[32m+[m[32m  width: 100%;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Main Content / Hero[m
[31m-========================================= */[m
 .hero-section {[m
[31m-    position: sticky;[m
[31m-    top: 0;[m
[31m-    height: 100vh;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    visibility: hidden;[m
[31m-    overflow: hidden; /* Avoid side-scrolling edge bugs */[m
[31m-    [m
[31m-    /* Initially hidden behind splash */[m
[31m-    opacity: 0;[m
[31m-    transform: scale(0.9);[m
[31m-    transition: opacity 1.5s ease, transform 1.5s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: sticky;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  visibility: hidden;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: scale(0.9);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1.5s ease,[m
[32m+[m[32m    transform 1.5s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[32m+[m[32m}[m
 .hero-section.show {[m
[31m-    visibility: visible;[m
[31m-    overflow: hidden; /* Avoid side-scrolling edge bugs */[m
[31m-    opacity: 1;[m
[31m-    transform: none; /* Changed from scale(1) to avoid breaking position: fixed for sidebars */[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Global UI Layer[m
[31m-========================================= */[m
[32m+[m[32m  visibility: visible;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: none;[m
[32m+[m[32m}[m
 .global-ui {[m
[31m-    opacity: 0;[m
[31m-    visibility: hidden;[m
[31m-    transition: opacity 1.5s ease, visibility 1.5s;[m
[31m-    z-index: 9999;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  visibility: hidden;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1.5s ease,[m
[32m+[m[32m    visibility 1.5s;[m
[32m+[m[32m  z-index: 9999;[m
 }[m
[31m-[m
 .global-ui.show {[m
[31m-    opacity: 1;[m
[31m-    visibility: visible;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  visibility: visible;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Sidebar Navigation[m
[31m-========================================= */[m
 .sidebar-nav {[m
[31m-    position: fixed;[m
[31m-    left: 20px;[m
[31m-    top: 50%;[m
[31m-    transform: translateY(-50%);[m
[31m-    background: var(--glass-bg);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 40px;[m
[31m-    padding: 20px 15px;[m
[31m-    width: 20px; /* Initial collapsed width */[m
[31m-    overflow: hidden;[m
[31m-    transition: width 0.4s cubic-bezier(0.4, 0, 0.2, 1);[m
[31m-    z-index: 9999;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  left: 20px;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  transform: translateY(-50%);[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 40px;[m
[32m+[m[32m  padding: 20px 15px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  transition: width 0.4s cubic-bezier(0.4, 0, 0.2, 1);[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m}[m
 .sidebar-nav:hover {[m
[31m-    width: 150px; /* Expanded Width */[m
[32m+[m[32m  width: 150px;[m
 }[m
[31m-[m
 .nav-menu {[m
[31m-    list-style: none;[m
[31m-    padding: 0;[m
[31m-    margin: 0;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 30px;[m
[32m+[m[32m  list-style: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 30px;[m
 }[m
[31m-[m
 .nav-item {[m
[31m-    position: relative;[m
[32m+[m[32m  position: relative;[m
 }[m
[31m-[m
[31m-/* Connecting horizontal line between icons */[m
 .nav-item:not(:last-child)::after {[m
[31m-    content: '';[m
[31m-    position: absolute;[m
[31m-    left: 4px; /* Align slightly off edge */[m
[31m-    bottom: -15px; /* Position it exactly between the the two icons (gap is 30) */[m
[31m-    width: 20px;[m
[31m-    height: 1px; /* Horizontal line */[m
[31m-    background: var(--glass-line);[m
[31m-}[m
[31m-[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  left: 4px;[m
[32m+[m[32m  bottom: -15px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background: var(--glass-line);[m
[32m+[m[32m}[m
 .nav-link {[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    text-decoration: none;[m
[31m-    color: var(--text-muted);[m
[31m-    gap: 15px;[m
[31m-    white-space: nowrap;[m
[31m-    transition: color 0.3s ease;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  transition: color 0.3s ease;[m
 }[m
[31m-[m
 .nav-icon {[m
[31m-    font-size: 1.2rem;[m
[31m-    width: 24px;[m
[31m-    text-align: center;[m
[31m-    flex-shrink: 0;[m
[31m-    transition: color 0.3s ease, transform 0.3s ease;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  width: 24px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
 }[m
[31m-[m
 .nav-link:hover {[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .nav-link:hover .nav-icon {[m
[31m-    transform: scale(1.1);[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  transform: scale(1.1);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .nav-text {[m
[31m-    opacity: 0;[m
[31m-    font-size: 0.9rem;[m
[31m-    font-weight: 500;[m
[31m-    letter-spacing: 1px;[m
[31m-    text-transform: uppercase;[m
[31m-    transition: opacity 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  transition: opacity 0.3s ease;[m
[32m+[m[32m}[m
 .sidebar-nav:hover .nav-text {[m
[31m-    opacity: 1;[m
[31m-    transition-delay: 0.1s; /* Delay text appearance slightly */[m
[31m-}[m
[31m-[m
[31m-[m
[31m-/* =========================================[m
[31m-   Hero Section Layout[m
[31m-========================================= */[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transition-delay: 0.1s;[m
[32m+[m[32m}[m
 .hero-content-group {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    width: 100%;[m
[31m-    transform-origin: center center;[m
[31m-    will-change: transform, opacity; /* optimize zooming */[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  transform-origin: center center;[m
[32m+[m[32m  will-change: transform, opacity;[m
 }[m
[31m-[m
 .hero-layout-wrapper {[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    gap: 50px; /* Scaled down slightly */[m
[31m-    max-width: 1000px;[m
[31m-    width: 100%;[m
[31m-    padding: 0 100px; /* Space for sidebar */[m
[31m-    margin-bottom: 60px; /* Spacing before carousel */[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 50px;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 0 100px;[m
[32m+[m[32m  margin-bottom: 60px;[m
 }[m
[31m-[m
[31m-/* --- Hero Image --- */[m
 .hero-image-container {[m
[31m-    width: clamp(200px, 25vw, 250px); /* Scaled down max size */[m
[31m-    aspect-ratio: 1 / 1;[m
[31m-    border-radius: 50%;[m
[31m-    border: 4px solid var(--accent-primary); /* The red/purple circle from sketch */[m
[31m-    padding: 5px;[m
[31m-    flex-shrink: 0;[m
[31m-[m
[32m+[m[32m  width: clamp(200px, 25vw, 250px);[m
[32m+[m[32m  aspect-ratio: 1/1;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  border: 4px solid var(--accent-primary);[m
[32m+[m[32m  padding: 5px;[m
[32m+[m[32m  flex-shrink: 0;[m
 }[m
[31m-[m
 .hero-profile-img {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    border-radius: 50%;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  border-radius: 50%;[m
 }[m
[31m-[m
[31m-/* --- Hero Typography --- */[m
 .hero-text-content {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: flex-start;[m
[31m-    text-align: left;[m
[31m-    gap: 10px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  text-align: left;[m
[32m+[m[32m  gap: 10px;[m
 }[m
[31m-[m
 .hero-line {[m
[31m-    margin: 0;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
[31m-/* Lines 1, 3, 5 share this font size */[m
 .line-small {[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: clamp(0.9rem, 1.5vw, 1.2rem); /* Scaled down */[m
[31m-    font-weight: 300;[m
[31m-    color: var(--text-light);[m
[31m-    letter-spacing: 2px;[m
[31m-}[m
[31m-[m
[31m-/* Lines 2 & 4 share this massive font size */[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: clamp(0.9rem, 1.5vw, 1.2rem);[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m}[m
 .line-large {[m
[31m-    font-family: 'Playfair Display', serif;[m
[31m-    font-size: clamp(2.5rem, 4vw, 4rem); /* Scaled down */[m
[31m-    font-weight: 700;[m
[31m-    line-height: 1;[m
[31m-    letter-spacing: -1px;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-/* Specific text styling modifiers */[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2.5rem, 4vw, 4rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  line-height: 1;[m
[32m+[m[32m  letter-spacing: -1px;[m
[32m+[m[32m}[m
 .gradient-text {[m
[31m-    background: linear-gradient(135deg, var(--text-light), var(--text-muted));[m
[31m-    -webkit-background-clip: text;[m
[31m-    background-clip: text;[m
[31m-    -webkit-text-fill-color: transparent;[m
[32m+[m[32m  background: linear-gradient(135deg, var(--text-light), var(--text-muted));[m
[32m+[m[32m  -webkit-background-clip: text;[m
[32m+[m[32m  background-clip: text;[m
[32m+[m[32m  -webkit-text-fill-color: transparent;[m
 }[m
[31m-[m
 .text-primary {[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .text-muted {[m
[31m-    color: var(--text-muted);[m
[32m+[m[32m  color: var(--text-muted);[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Technology Carousel[m
[31m-========================================= */[m
 .tech-carousel-wrapper {[m
[31m-    width: 100%;[m
[31m-    max-width: 800px;[m
[31m-    position: relative;[m
[31m-    padding-top: 15px; /* Space for the text to break the line */[m
[31m-    z-index: 60; /* Needs to sit above the blur overlay when active */[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding-top: 15px;[m
[32m+[m[32m  z-index: 60;[m
 }[m
[31m-[m
 .tech-header-line {[m
[31m-    position: relative;[m
[31m-    width: 100%;[m
[31m-    height: 1px;[m
[31m-    background: var(--glass-line);[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background: var(--glass-line);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
 }[m
[31m-[m
 .tech-header-text {[m
[31m-    background-color: var(--bg-dark); /* Match page background to mask the line */[m
[31m-    padding: 0 15px;[m
[31m-    position: absolute;[m
[31m-    top: -10px; /* Pull it up onto the line */[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 0.8rem;[m
[31m-    font-weight: 300;[m
[31m-    letter-spacing: 3px;[m
[31m-    text-transform: uppercase;[m
[31m-    color: var(--text-muted);[m
[31m-}[m
[31m-[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  padding: 0 15px;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: -10px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m}[m
 .tech-scroller {[m
[31m-    overflow: hidden;[m
[31m-    /* Added huge top padding to allow the tooltip to render without clip, [m
[31m-       then pulled the track back up via negative margin to compensate */[m
[31m-    padding: 75px 0 10px 0;[m
[31m-    margin-top: -50px; [m
[31m-    mask-image: linear-gradient(to right, transparent, black 10%, black 90%, transparent);[m
[31m-    -webkit-mask-image: linear-gradient(to right, transparent, black 10%, black 90%, transparent);[m
[31m-}[m
[31m-[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  padding: 75px 0 10px 0;[m
[32m+[m[32m  margin-top: -50px;[m
[32m+[m[32m  mask-image: linear-gradient([m
[32m+[m[32m    to right,[m
[32m+[m[32m    transparent,[m
[32m+[m[32m    black 10%,[m
[32m+[m[32m    black 90%,[m
[32m+[m[32m    transparent[m
[32m+[m[32m  );[m
[32m+[m[32m  -webkit-mask-image: linear-gradient([m
[32m+[m[32m    to right,[m
[32m+[m[32m    transparent,[m
[32m+[m[32m    black 10%,[m
[32m+[m[32m    black 90%,[m
[32m+[m[32m    transparent[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
 .tech-track {[m
[31m-    display: flex;[m
[31m-    gap: 50px;[m
[31m-    width: max-content;[m
[31m-    animation: scrollSlide 15s linear infinite;[m
[31m-    transition: opacity 0.3s ease;[m
[31m-}[m
[31m-[m
[31m-/* Dim entire track when any item is hovered */[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 50px;[m
[32m+[m[32m  width: max-content;[m
[32m+[m[32m  animation: scrollSlide 15s linear infinite;[m
[32m+[m[32m  transition: opacity 0.3s ease;[m
[32m+[m[32m}[m
 .tech-track:hover .tech-item {[m
[31m-    opacity: 0.3;[m
[32m+[m[32m  opacity: 0.3;[m
 }[m
[31m-[m
 .tech-item {[m
[31m-    font-size: 2.5rem;[m
[31m-    color: var(--text-muted);[m
[31m-    position: relative;[m
[31m-    cursor: pointer;[m
[31m-    transition: all 0.3s ease;[m
[31m-}[m
[31m-[m
[31m-/* Focus on hovered item: clear blur, increase opacity */[m
[32m+[m[32m  font-size: 2.5rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m}[m
 .tech-track .tech-item:hover {[m
[31m-    opacity: 1;[m
[31m-    filter: blur(0);[m
[31m-}[m
[31m-[m
[31m-/* Brand Colors on Hover */[m
[31m-.tech-html:hover { color: #E34F26; }[m
[31m-.tech-css:hover { color: #1572B6; }[m
[31m-.tech-js:hover { color: #F7DF1E; }[m
[31m-.tech-git:hover { color: #F05032; }[m
[31m-.tech-github:hover { color: #FFFFFF; }[m
[31m-.tech-nodejs:hover { color: #339933; }[m
[31m-.tech-cloudflare:hover { color: #F48120; }[m
[31m-.tech-vercel:hover { color: #FFFFFF; }[m
[31m-.tech-gh-actions:hover { color: #2088FF; }[m
[31m-.tech-prettier:hover { color: #F7B93E; }[m
[31m-[m
[31m-/* Inline SVG icons: match font-size scaling of FA icons */[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  filter: blur(0);[m
[32m+[m[32m}[m
[32m+[m[32m.tech-html:hover {[m
[32m+[m[32m  color: #e34f26;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-css:hover {[m
[32m+[m[32m  color: #1572b6;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-js:hover {[m
[32m+[m[32m  color: #f7df1e;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-git:hover {[m
[32m+[m[32m  color: #f05032;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-github:hover {[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-nodejs:hover {[m
[32m+[m[32m  color: #393;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-cloudflare:hover {[m
[32m+[m[32m  color: #f48120;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-vercel:hover {[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-gh-actions:hover {[m
[32m+[m[32m  color: #2088ff;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-prettier:hover {[m
[32m+[m[32m  color: #f7b93e;[m
[32m+[m[32m}[m
 .tech-item svg {[m
[31m-    width: 1em;[m
[31m-    height: 1em;[m
[31m-    display: block;[m
[32m+[m[32m  width: 1em;[m
[32m+[m[32m  height: 1em;[m
[32m+[m[32m  display: block;[m
 }[m
[31m-[m
[31m-/* Hover effects are now driven by JS slowing down playbackRate, not paused css */[m
[31m-[m
[31m-/* =========================================[m
[31m-   Global Floating Tooltip[m
[31m-========================================= */[m
 .global-tooltip {[m
[31m-    position: fixed;[m
[31m-    top: -100px;[m
[31m-    left: 0;[m
[31m-    background: rgba(40, 42, 54, 0.95);[m
[31m-    color: #fff;[m
[31m-    padding: 8px 16px;[m
[31m-    border-radius: 6px;[m
[31m-    font-size: 0.9rem;[m
[31m-    font-weight: 600;[m
[31m-    pointer-events: none;[m
[31m-    z-index: 99999;[m
[31m-    opacity: 0;[m
[31m-    transition: opacity 0.2s ease, transform 0.1s ease-out;[m
[31m-    transform: translate(-50%, -100%);[m
[31m-    white-space: nowrap;[m
[31m-    box-shadow: 0 4px 15px rgba(0,0,0,0.5);[m
[31m-    border: 1px solid rgba(255,255,255,0.1);[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: -100px;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  background: rgba(40, 42, 54, 0.95);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  padding: 8px 16px;[m
[32m+[m[32m  border-radius: 6px;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  z-index: 99999;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.2s ease,[m
[32m+[m[32m    transform 0.1s ease-out;[m
[32m+[m[32m  transform: translate(-50%, -100%);[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.1);[m
[32m+[m[32m}[m
 .global-tooltip.visible {[m
[31m-    opacity: 1;[m
[32m+[m[32m  opacity: 1;[m
 }[m
[31m-[m
 .global-tooltip-arrow {[m
[31m-    position: absolute;[m
[31m-    bottom: -6px;[m
[31m-    left: 50%;[m
[31m-    transform: translateX(-50%);[m
[31m-    width: 0;[m
[31m-    height: 0;[m
[31m-    border-left: 6px solid transparent;[m
[31m-    border-right: 6px solid transparent;[m
[31m-    border-top: 6px solid rgba(40, 42, 54, 0.95);[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: -6px;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translateX(-50%);[m
[32m+[m[32m  width: 0;[m
[32m+[m[32m  height: 0;[m
[32m+[m[32m  border-left: 6px solid transparent;[m
[32m+[m[32m  border-right: 6px solid transparent;[m
[32m+[m[32m  border-top: 6px solid rgba(40, 42, 54, 0.95);[m
 }[m
[31m-[m
 @keyframes scrollSlide {[m
[31m-    0% {[m
[31m-        transform: translateX(0);[m
[31m-    }[m
[31m-    100% {[m
[31m-        transform: translateX(calc(-50% - 25px)); /* shift exactly half the width minus half gap */[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   CV Download Nav[m
[31m-========================================= */[m
[32m+[m[32m  0% {[m
[32m+[m[32m    transform: translateX(0);[m
[32m+[m[32m  }[m
[32m+[m[32m  100% {[m
[32m+[m[32m    transform: translateX(calc(-50% - 25px));[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 .cv-nav {[m
[31m-    top: auto;[m
[31m-    bottom: 30px;[m
[31m-    left: auto;[m
[31m-    right: 30px;[m
[31m-    transform: none;[m
[31m-    padding: 12px 15px;[m
[31m-    width: 130px; /* Always stay fully expanded */[m
[32m+[m[32m  top: auto;[m
[32m+[m[32m  bottom: 30px;[m
[32m+[m[32m  left: auto;[m
[32m+[m[32m  right: 30px;[m
[32m+[m[32m  transform: none;[m
[32m+[m[32m  padding: 12px 15px;[m
[32m+[m[32m  width: 130px;[m
 }[m
[31m-[m
 .cv-nav .nav-text {[m
[31m-    opacity: 1;[m
[31m-    color: var(--text-light); /* Make the text visible and adaptable to the theme */[m
[31m-    display: inline-block;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  display: inline-block;[m
 }[m
[31m-[m
 .cv-nav:hover {[m
[31m-    width: 130px;[m
[32m+[m[32m  width: 130px;[m
 }[m
[31m-[m
 .cv-link {[m
[31m-    justify-content: flex-end;[m
[32m+[m[32m  justify-content: flex-end;[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Utility Toggles (Theme & Mute)[m
[31m-========================================= */[m
 .utility-toggles {[m
[31m-    position: fixed;[m
[31m-    top: 20px;[m
[31m-    right: 30px;[m
[31m-    display: flex;[m
[31m-    gap: 15px;[m
[31m-    z-index: 10000; /* Needs to be above everything, including splash */[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  right: 30px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  z-index: 10000;[m
[32m+[m[32m}[m
[32m+[m[32m.mute-toggle,[m
[32m+[m[32m.theme-toggle {[m
[32m+[m[32m  width: 45px;[m
[32m+[m[32m  height: 45px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.mute-toggle:hover,[m
[32m+[m[32m.theme-toggle:hover {[m
[32m+[m[32m  transform: scale(1.1);[m
[32m+[m[32m  background: var(--tooltip-bg);[m
 }[m
[31m-[m
[31m-.theme-toggle,[m
[31m-.mute-toggle {[m
[31m-    width: 45px;[m
[31m-    height: 45px;[m
[31m-    border-radius: 50%;[m
[31m-    background: var(--glass-bg);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    color: var(--text-light);[m
[31m-    font-size: 1.2rem;[m
[31m-    cursor: pointer;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    transition: background 0.3s ease, transform 0.3s ease, color 0.3s ease;[m
[31m-}[m
[31m-[m
[31m-.theme-toggle:hover,[m
[31m-.mute-toggle:hover {[m
[31m-    transform: scale(1.1);[m
[31m-    background: var(--tooltip-bg);[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   About Section[m
[31m-========================================= */[m
 .about-section {[m
[31m-    position: relative;[m
[31m-    background: var(--bg-dark);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  background: var(--bg-dark);[m
 }[m
[31m-[m
[31m-/* --- About Header & Ghost Text --- */[m
 .about-section-header {[m
[31m-    text-align: center;[m
[31m-    padding: 120px 20px 80px; /* Space above and below the header */[m
[31m-    background: var(--bg-dark);[m
[31m-    position: relative;[m
[31m-    z-index: 10;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  padding: 120px 20px 80px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
 }[m
[31m-[m
 .about-subtitle {[m
[31m-    display: block;[m
[31m-    font-size: 0.9rem;[m
[31m-    color: var(--text-muted);[m
[31m-    letter-spacing: 3px;[m
[31m-    text-transform: uppercase;[m
[31m-    margin-bottom: 5px;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-weight: 600;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
 .about-title {[m
[31m-    position: relative;[m
[31m-    display: inline-block;[m
[31m-    margin: 0;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .about-main-text {[m
[31m-    position: relative;[m
[31m-    font-size: clamp(2.5rem, 6vw, 4.5rem);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    z-index: 2;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2.5rem, 6vw, 4.5rem);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
 .about-ghost-text {[m
[31m-    position: absolute;[m
[31m-    top: 50%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    font-size: clamp(4.5rem, 12vw, 9rem);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-weight: 800;[m
[31m-    color: var(--text-muted);[m
[31m-    opacity: var(--ghost-opacity);[m
[31m-    z-index: 1;[m
[31m-    white-space: nowrap;[m
[31m-    user-select: none;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Z-Snake Timeline Layout[m
[31m-========================================= */[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(4.5rem, 12vw, 9rem);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .clean-timeline-container {[m
[31m-    width: 100%;[m
[31m-    max-width: 900px;[m
[31m-    margin: 0 auto;[m
[31m-    padding: 100px 20px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 900px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 100px 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
 }[m
[31m-[m
[31m-/* Base Blocks */[m
 .st-node {[m
[31m-    position: relative;[m
[31m-    height: 250px;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 250px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
 .st-turn {[m
[31m-    position: relative;[m
[31m-    height: 120px; /* Provides vertical scrolling distance to animate the horizontal sweep */[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 120px;[m
 }[m
[31m-[m
[31m-/* Raw Tracking Lines */[m
 .st-line {[m
[31m-    position: absolute;[m
[31m-    background: var(--glass-line);[m
[31m-    z-index: 0;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  background: var(--glass-line);[m
[32m+[m[32m  z-index: 0;[m
 }[m
[31m-[m
 .st-fill {[m
[31m-    position: absolute;[m
[31m-    top: 0; left: 0; right: 0; bottom: 0;[m
[31m-    background: var(--accent-primary);[m
[31m-    box-shadow: 0 0 10px var(--accent-primary);[m
[31m-    z-index: 1;[m
[31m-}[m
[31m-[m
[31m-/* Node Vertical Track */[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 10px var(--accent-primary);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
 .st-node .st-v {[m
[31m-    top: 0; bottom: 0; width: 2px;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  width: 2px;[m
 }[m
[31m-[m
 .st-node .st-v .st-fill {[m
[31m-    transform-origin: top;[m
[31m-    transform: scaleY(0); /* Driven continuously by JS */[m
[31m-}[m
[31m-[m
[31m-/* Turn Segments */[m
[31m-.st-top-left { top: 0; left: 0; height: 50%; width: 2px; }[m
[31m-.st-bottom-right { bottom: 0; right: 0; height: 50%; width: 2px; }[m
[31m-[m
[31m-.st-top-right { top: 0; right: 0; height: 50%; width: 2px; }[m
[31m-.st-bottom-left { bottom: 0; left: 0; height: 50%; width: 2px; }[m
[31m-[m
[31m-.st-h { top: 50%; width: 100%; height: 2px; }[m
[31m-[m
[31m-.st-ltr .st-fill { transform-origin: left; transform: scaleX(0); }[m
[31m-.st-rtl .st-fill { transform-origin: right; transform: scaleX(0); }[m
[31m-.st-turn .st-v .st-fill { transform-origin: top; transform: scaleY(0); }[m
[31m-[m
[31m-/* Left vs Right Node Configurations */[m
[32m+[m[32m  transform-origin: top;[m
[32m+[m[32m  transform: scaleY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-top-left {[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-bottom-right {[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-top-right {[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-bottom-left {[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-h {[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-ltr .st-fill {[m
[32m+[m[32m  transform-origin: left;[m
[32m+[m[32m  transform: scaleX(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-rtl .st-fill {[m
[32m+[m[32m  transform-origin: right;[m
[32m+[m[32m  transform: scaleX(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-turn .st-v .st-fill {[m
[32m+[m[32m  transform-origin: top;[m
[32m+[m[32m  transform: scaleY(0);[m
[32m+[m[32m}[m
 .st-left {[m
[31m-    justify-content: flex-start;[m
[32m+[m[32m  justify-content: flex-start;[m
 }[m
 .st-left .st-v {[m
[31m-    left: 0;[m
[32m+[m[32m  left: 0;[m
 }[m
 .st-left .st-content {[m
[31m-    margin-left: 60px;[m
[31m-    text-align: left;[m
[32m+[m[32m  margin-left: 60px;[m
[32m+[m[32m  text-align: left;[m
 }[m
 .st-left .st-dot {[m
[31m-    left: -7px; /* 16px wide dot centered on 2px line exactly at 0 */[m
[32m+[m[32m  left: -7px;[m
 }[m
[31m-[m
 .st-right {[m
[31m-    justify-content: flex-end;[m
[32m+[m[32m  justify-content: flex-end;[m
 }[m
 .st-right .st-v {[m
[31m-    right: 0;[m
[32m+[m[32m  right: 0;[m
 }[m
 .st-right .st-content {[m
[31m-    margin-right: 60px;[m
[31m-    text-align: right;[m
[32m+[m[32m  margin-right: 60px;[m
[32m+[m[32m  text-align: right;[m
 }[m
 .st-right .st-dot {[m
[31m-    right: -7px;[m
[32m+[m[32m  right: -7px;[m
 }[m
[31m-[m
[31m-/* Interactivity and Content */[m
 .st-content {[m
[31m-    opacity: 0.3;[m
[31m-    transform: translateY(15px);[m
[31m-    transition: opacity 0.6s ease, transform 0.6s ease;[m
[31m-    width: 60%;[m
[32m+[m[32m  opacity: 0.3;[m
[32m+[m[32m  transform: translateY(15px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.6s ease,[m
[32m+[m[32m    transform 0.6s ease;[m
[32m+[m[32m  width: 60%;[m
 }[m
[31m-[m
 .st-content.visible {[m
[31m-    opacity: 1;[m
[31m-    transform: translateY(0);[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
 }[m
[31m-[m
 .st-dot {[m
[31m-    position: absolute;[m
[31m-    width: 16px;[m
[31m-    height: 16px;[m
[31m-    border-radius: 50%;[m
[31m-    background: var(--bg-dark);[m
[31m-    border: 3px solid var(--glass-line);[m
[31m-    top: 50%;[m
[31m-    transform: translateY(-50%);[m
[31m-    z-index: 2;[m
[31m-    transition: border-color 0.4s ease, background-color 0.4s ease, transform 0.4s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 3px solid var(--glass-line);[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  transform: translateY(-50%);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.4s ease,[m
[32m+[m[32m    background-color 0.4s ease,[m
[32m+[m[32m    transform 0.4s ease;[m
[32m+[m[32m}[m
 .st-dot.filled {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    background: var(--bg-dark);[m
[31m-    box-shadow: 0 0 15px var(--accent-primary);[m
[31m-    transform: translateY(-50%) scale(1.3);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  box-shadow: 0 0 15px var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-50%) scale(1.3);[m
 }[m
[31m-[m
[31m-/* Typography elements without cards */[m
 .st-date {[m
[31m-    color: var(--text-muted); /* Starts grey until the snake trail lands on this milestone */[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 1.4rem;[m
[31m-    font-weight: 700;[m
[31m-    margin-bottom: 5px;[m
[31m-    transition: color 0.6s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1.4rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m  transition: color 0.6s ease;[m
[32m+[m[32m}[m
 .st-content.visible .st-date {[m
[31m-    color: var(--accent-primary) !important; /* Fills with blue when landed */[m
[32m+[m[32m  color: var(--accent-primary) !important;[m
 }[m
[31m-[m
 .st-topic {[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 1.2rem;[m
[31m-    font-weight: 600;[m
[31m-    margin-bottom: 15px;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  margin-bottom: 15px;[m
 }[m
[31m-[m
 .st-desc {[m
[31m-    color: var(--text-muted);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    line-height: 1.6;[m
[31m-    font-size: 0.95rem;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Projects Section & Bento Grid[m
[31m-========================================= */[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m}[m
 .st-button-node {[m
[31m-    height: 150px;[m
[31m-    padding-top: 20px;[m
[32m+[m[32m  height: 150px;[m
[32m+[m[32m  padding-top: 20px;[m
 }[m
[31m-[m
 .st-final-v {[m
[31m-    height: 50% !important; /* Forces the vertical line to literally stop perfectly in the center of the dot */[m
[32m+[m[32m  height: 50% !important;[m
 }[m
[31m-[m
 .final-button {[m
[31m-    display: inline-block;[m
[31m-    padding: 15px 40px;[m
[31m-    font-size: 1.1rem;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-muted);[m
[31m-    background: transparent;[m
[31m-    border: 3px solid var(--glass-line);[m
[31m-    border-radius: 50px;[m
[31m-    text-decoration: none;[m
[31m-    transition: all 0.5s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  padding: 15px 40px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  background: 0 0;[m
[32m+[m[32m  border: 3px solid var(--glass-line);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.5s ease;[m
[32m+[m[32m}[m
 .st-content.visible .final-button {[m
[31m-    border-color: var(--accent-primary);[m
[31m-    color: var(--accent-primary);[m
[31m-    box-shadow: 0 0 20px rgba(0, 140, 255, 0.4);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 20px rgba(0, 140, 255, 0.4);[m
 }[m
[31m-[m
 .st-content.visible .final-button:hover {[m
[31m-    background: var(--accent-primary);[m
[31m-    color: var(--bg-dark);[m
[31m-    box-shadow: 0 0 30px var(--accent-primary);[m
[31m-    transform: scale(1.05);[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Skills Section (Added to About)[m
[31m-========================================= */[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: var(--bg-dark);[m
[32m+[m[32m  box-shadow: 0 0 30px var(--accent-primary);[m
[32m+[m[32m  transform: scale(1.05);[m
[32m+[m[32m}[m
 .skills-wrapper {[m
[31m-    max-width: 1000px;[m
[31m-    margin: 0 auto 50px auto;[m
[31m-    padding: 0 20px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 40px;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  margin: 0 auto 50px auto;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 40px;[m
 }[m
[31m-[m
 .skills-category {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 20px;[m
 }[m
[31m-[m
 .skills-subheading {[m
[31m-    font-size: 1.5rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-light);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    margin: 0;[m
[31m-    padding-left: 10px;[m
[31m-    border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  padding-left: 10px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
 }[m
[31m-[m
 .skills-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));[m
[31m-    gap: 20px;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));[m
[32m+[m[32m  gap: 20px;[m
 }[m
[31m-[m
 .nice-to-have-grid {[m
[31m-    grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));[m
 }[m
[31m-[m
 .skill-card {[m
[31m-    background: var(--glass-bg);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    backdrop-filter: blur(10px);[m
[31m-    border-radius: 12px;[m
[31m-    padding: 20px;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 15px;[m
[31m-    transition: transform 0.3s ease, box-shadow 0.3s ease, border-color 0.3s ease;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border-radius: 12px;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    border-color 0.3s ease;[m
 }[m
[31m-[m
 .skill-card:hover {[m
[31m-    transform: translateY(-5px);[m
[31m-    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[31m-    border-color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-5px);[m
[32m+[m[32m  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
 }[m
[31m-[m
 .skill-icon {[m
[31m-    font-size: 1.8rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    min-width: 35px;[m
[31m-    text-align: center;[m
[31m-    transition: transform 0.3s ease;[m
[32m+[m[32m  font-size: 1.8rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  min-width: 35px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  transition: transform 0.3s ease;[m
 }[m
[31m-[m
 .skill-card:hover .skill-icon {[m
[31m-    transform: scale(1.1);[m
[32m+[m[32m  transform: scale(1.1);[m
 }[m
[31m-[m
 .skill-text {[m
[31m-    font-size: 1rem;[m
[31m-    color: var(--text-muted);[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    line-height: 1.4;[m
[31m-    font-weight: 500;[m
[31m-    transition: color 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  line-height: 1.4;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  transition: color 0.3s ease;[m
[32m+[m[32m}[m
 .skill-card:hover .skill-text {[m
[31m-    color: var(--text-light);[m
[32m+[m[32m  color: var(--text-light);[m
 }[m
[31m-[m
[31m-/* Adding a fade-in animation trigger for skills */[m
 .fade-in-section {[m
[31m-    opacity: 0;[m
[31m-    transform: translateY(30px);[m
[31m-    transition: opacity 0.8s ease-out, transform 0.8s ease-out;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(30px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.8s ease-out,[m
[32m+[m[32m    transform 0.8s ease-out;[m
 }[m
[31m-[m
 .fade-in-section.visible {[m
[31m-    opacity: 1;[m
[31m-    transform: translateY(0);[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Projects Section & Bento Grid[m
[31m-========================================= */[m
 .projects-section {[m
[31m-    position: relative;[m
[31m-    padding: 100px 0;[m
[31m-    min-height: 100vh;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    overflow: hidden;[m
[31m-    background: var(--bg-dark);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding: 100px 0;[m
[32m+[m[32m  min-height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  background: var(--bg-dark);[m
 }[m
[31m-[m
 .projects-content-group {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    width: 100%;[m
[31m-    max-width: 1200px;[m
[31m-    padding: 20px;[m
[31m-    opacity: 0;[m
[31m-    transform: scale(0.85);[m
[31m-    transition: opacity 1s ease-out, transform 1s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: scale(0.85);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1s ease-out,[m
[32m+[m[32m    transform 1s cubic-bezier(0.2, 0.8, 0.2, 1);[m
 }[m
[31m-[m
 .projects-content-group.visible {[m
[31m-    opacity: 1;[m
[31m-    transform: scale(1);[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: scale(1);[m
 }[m
[31m-[m
 .projects-section-header {[m
[31m-    text-align: center;[m
[31m-    margin-top: 200px;[m
[31m-    margin-bottom: 200px;[m
[31m-    position: relative;[m
[31m-    z-index: 10;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-top: 200px;[m
[32m+[m[32m  margin-bottom: 200px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
 }[m
[31m-[m
 .projects-subtitle {[m
[31m-    display: block;[m
[31m-    font-size: 0.9rem;[m
[31m-    color: var(--text-muted);[m
[31m-    letter-spacing: 3px;[m
[31m-    text-transform: uppercase;[m
[31m-    margin-bottom: 5px;[m
[31m-    font-weight: 600;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
 .projects-title {[m
[31m-    position: relative;[m
[31m-    display: inline-block;[m
[31m-    margin: 0;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .projects-main-text {[m
[31m-    position: relative;[m
[31m-    font-size: clamp(2rem, 5vw, 3.5rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    z-index: 2;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
 }[m
[31m-[m
 .projects-ghost-text {[m
[31m-    position: absolute;[m
[31m-    top: 50%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    font-size: clamp(3.5rem, 10vw, 7rem);[m
[31m-    font-weight: 800;[m
[31m-    color: var(--text-muted);[m
[31m-    opacity: var(--ghost-opacity);[m
[31m-    z-index: 1;[m
[31m-    white-space: nowrap;[m
[31m-    user-select: none;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Glow Card Effect (Stripe Flashlight)[m
[31m-========================================= */[m
[31m-/* The parent wrapper of the glow cards should have .glow-container to track mouse interactions */[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3.5rem, 10vw, 7rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .glow-card {[m
[31m-    position: relative;[m
[31m-    /* Faint base border color visible when not glowing */[m
[31m-    background: var(--glass-border); [m
[31m-    border-radius: 16px; /* Can be overridden */[m
[31m-}[m
[31m-[m
[31m-/* The actual "Border" and "Inner" glow */[m
[31m-.glow-card::before,[m
[31m-.glow-card::after {[m
[31m-    content: "";[m
[31m-    position: absolute;[m
[31m-    border-radius: inherit;[m
[31m-    opacity: 0;[m
[31m-    transition: opacity 0.5s ease;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card::after,[m
 .glow-card::before {[m
[31m-    inset: 0; /* Full size to create the border glow behind content */[m
[31m-    background: radial-gradient([m
[31m-        800px circle at var(--x, 0px) var(--y, 0px),[m
[31m-        rgba(255, 255, 255, 0.25),[m
[31m-        transparent 40%[m
[31m-    );[m
[31m-    z-index: 1; /* Below content */[m
[31m-}[m
[31m-[m
[31m-/* Wait, we make glow-card transparent on mobile? Usually mouse doesn't work but we leave opacity 0 */[m
[31m-[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  border-radius: inherit;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transition: opacity 0.5s ease;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card::before {[m
[32m+[m[32m  inset: 0;[m
[32m+[m[32m  background: radial-gradient([m
[32m+[m[32m    800px circle at var(--x, 0) var(--y, 0),[m
[32m+[m[32m    rgba(255, 255, 255, 0.25),[m
[32m+[m[32m    transparent 40%[m
[32m+[m[32m  );[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
 .glow-card::after {[m
[31m-    inset: 1px; /* Matches the content */[m
[31m-    background: radial-gradient([m
[31m-        400px circle at var(--x, 0px) var(--y, 0px),[m
[31m-        rgba(255, 255, 255, 0.08),[m
[31m-        transparent 40%[m
[31m-    );[m
[31m-    z-index: 5; /* Above content for the inner surface glow */[m
[31m-}[m
[31m-[m
[31m-/* Fade in the glowing borders when the grid/mouse tracks across */[m
[31m-.glow-container:hover .glow-card::before,[m
[31m-.glow-container:hover .glow-card::after {[m
[31m-    opacity: 1;[m
[31m-}[m
[31m-/* Focus the brightness a bit more on exactly hovered cards */[m
[32m+[m[32m  inset: 1px;[m
[32m+[m[32m  background: radial-gradient([m
[32m+[m[32m    400px circle at var(--x, 0) var(--y, 0),[m
[32m+[m[32m    rgba(255, 255, 255, 0.08),[m
[32m+[m[32m    transparent 40%[m
[32m+[m[32m  );[m
[32m+[m[32m  z-index: 5;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-container:hover .glow-card::after,[m
[32m+[m[32m.glow-container:hover .glow-card::before {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m}[m
 .glow-card:hover::before {[m
[31m-    background: radial-gradient([m
[31m-        800px circle at var(--x, 0px) var(--y, 0px),[m
[31m-        rgba(255, 255, 255, 0.5),[m
[31m-        transparent 40%[m
[31m-    );[m
[31m-}[m
[31m-[m
[31m-/* Inner content wrapper */[m
[32m+[m[32m  background: radial-gradient([m
[32m+[m[32m    800px circle at var(--x, 0) var(--y, 0),[m
[32m+[m[32m    rgba(255, 255, 255, 0.5),[m
[32m+[m[32m    transparent 40%[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
 .glow-content {[m
[31m-    position: absolute;[m
[31m-    inset: 1px; /* 1px border gap */[m
[31m-    background: var(--bg-dark); /* Solid core to hide the gradient behind it */[m
[31m-    border-radius: calc(inherit - 1px);[m
[31m-    overflow: hidden;[m
[31m-    z-index: 2;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  inset: 1px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border-radius: calc(inherit - 1px);[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
 }[m
[31m-[m
[31m-/* Bento Grid */[m
 .bento-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(4, 1fr);[m
[31m-    grid-auto-rows: 200px; /* Base row height */[m
[31m-    column-gap: 30px;[m
[31m-    row-gap: 40px;[m
[31m-    width: 100%;[m
[31m-    max-width: 1100px;[m
[31m-    margin: 0 auto;[m
[31m-    justify-content: center;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(4, 1fr);[m
[32m+[m[32m  grid-auto-rows: 200px;[m
[32m+[m[32m  column-gap: 30px;[m
[32m+[m[32m  row-gap: 40px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  justify-content: center;[m
 }[m
[31m-[m
 .bento-item {[m
[31m-    border-radius: 16px;[m
[31m-    cursor: pointer;[m
[31m-    transition: transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1), box-shadow 0.3s ease, filter 0.3s ease;[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1),[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
 }[m
[31m-[m
 .bento-item .glow-content {[m
[31m-    border-radius: 15px; /* Manually specify inner radius */[m
[31m-    background: var(--glass-bg); /* Give it the original glass look */[m
[32m+[m[32m  border-radius: 15px;[m
[32m+[m[32m  background: var(--glass-bg);[m
 }[m
[31m-[m
 .bento-item:hover {[m
[31m-    transform: translateY(-5px) scale(1.02);[m
[31m-    box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);[m
[31m-    z-index: 10;[m
[32m+[m[32m  transform: translateY(-5px) scale(1.02);[m
[32m+[m[32m  box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m  z-index: 10;[m
 }[m
[31m-[m
 .bento-grid:hover .bento-item:not(:hover) {[m
[31m-    filter: brightness(0.6) blur(2px);[m
[32m+[m[32m  filter: brightness(0.6) blur(2px);[m
 }[m
[31m-[m
 .bento-img {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    transition: transform 0.5s ease;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  transition: transform 0.5s ease;[m
 }[m
[31m-[m
 .bento-item:hover .bento-img {[m
[31m-    transform: scale(1.05);[m
[32m+[m[32m  transform: scale(1.05);[m
 }[m
[31m-[m
 .bento-overlay {[m
[31m-    position: absolute;[m
[31m-    bottom: 0;[m
[31m-    left: 0;[m
[31m-    width: 100%;[m
[31m-    padding: 20px;[m
[31m-    background: linear-gradient(to top, rgba(0,0,0,0.9) 0%, rgba(0,0,0,0) 100%);[m
[31m-    color: #fff;[m
[31m-    opacity: 0;[m
[31m-    transform: translateY(10px);[m
[31m-    transition: opacity 0.3s ease, transform 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    to top,[m
[32m+[m[32m    rgba(0, 0, 0, 0.9) 0,[m
[32m+[m[32m    rgba(0, 0, 0, 0) 100%[m
[32m+[m[32m  );[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(10px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
 .bento-item:hover .bento-overlay {[m
[31m-    opacity: 1;[m
[31m-    transform: translateY(0);[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
 }[m
[31m-[m
 .bento-item-title {[m
[31m-    margin: 0 0 5px 0;[m
[31m-    font-size: 1.2rem;[m
[31m-    font-weight: 600;[m
[32m+[m[32m  margin: 0 0 5px 0;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  font-weight: 600;[m
 }[m
[31m-[m
 .bento-item-category {[m
[31m-    font-size: 0.8rem;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-    color: var(--accent-primary);[m
[31m-}[m
[31m-[m
[31m-/* Specific Grid Placements to match sketch */[m
[31m-.bento-1 { grid-column: 2 / 4; grid-row: 1 / 3; } /* Large Center */[m
[31m-.bento-2 { grid-column: 1; grid-row: 1; } /* Top Left */[m
[31m-.bento-3 { grid-column: 4; grid-row: 1; } /* Top Right */[m
[31m-.bento-4 { grid-column: 4; grid-row: 2; } /* Mid Right */[m
[31m-.bento-5 { grid-column: 1; grid-row: 2 / 4; } /* Mid/Bottom Left */[m
[31m-.bento-6 { grid-column: 2; grid-row: 3; } /* Bottom Mid-Left */[m
[31m-.bento-7 { grid-column: 3; grid-row: 3; } /* Bottom Mid-Right */[m
[31m-.bento-8 { grid-column: 4; grid-row: 3; } /* Bottom Right */[m
[31m-[m
[31m-/* Cinematic Modal */[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.bento-1 {[m
[32m+[m[32m  grid-column: 2/4;[m
[32m+[m[32m  grid-row: 1/3;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-2 {[m
[32m+[m[32m  grid-column: 1;[m
[32m+[m[32m  grid-row: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-3 {[m
[32m+[m[32m  grid-column: 4;[m
[32m+[m[32m  grid-row: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-4 {[m
[32m+[m[32m  grid-column: 4;[m
[32m+[m[32m  grid-row: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-5 {[m
[32m+[m[32m  grid-column: 1;[m
[32m+[m[32m  grid-row: 2/4;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-6 {[m
[32m+[m[32m  grid-column: 2;[m
[32m+[m[32m  grid-row: 3;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-7 {[m
[32m+[m[32m  grid-column: 3;[m
[32m+[m[32m  grid-row: 3;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-8 {[m
[32m+[m[32m  grid-column: 4;[m
[32m+[m[32m  grid-row: 3;[m
[32m+[m[32m}[m
 .project-modal {[m
[31m-    position: fixed;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 100vw;[m
[31m-    height: 100vh;[m
[31m-    z-index: 10000;[m
[31m-    display: none; /* Changed from flex to fix layout shift bug at the bottom */[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    opacity: 0;[m
[31m-    transition: opacity 0.4s ease;[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  z-index: 10000;[m
[32m+[m[32m  display: none;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transition: opacity 0.4s ease;[m
 }[m
[31m-[m
 .project-modal.active {[m
[31m-    display: flex;[m
[31m-    opacity: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  opacity: 1;[m
 }[m
[31m-[m
 .modal-backdrop {[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    background: rgba(10, 10, 10, 0.85);[m
[31m-    backdrop-filter: blur(15px);[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  background: rgba(10, 10, 10, 0.85);[m
[32m+[m[32m  backdrop-filter: blur(15px);[m
 }[m
[31m-[m
 .modal-content-wrapper {[m
[31m-    position: relative;[m
[31m-    width: 90%;[m
[31m-    max-width: 1000px;[m
[31m-    height: 70vh;[m
[31m-    background: #111;[m
[31m-    border: 1px solid rgba(255, 255, 255, 0.1);[m
[31m-    border-radius: 20px;[m
[31m-    overflow: hidden;[m
[31m-    display: flex;[m
[31m-    box-shadow: 0 25px 50px rgba(0, 0, 0, 0.5);[m
[31m-    transform: scale(0.95) translateY(20px);[m
[31m-    transition: transform 0.4s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 90%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  height: 70vh;[m
[32m+[m[32m  background: #111;[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  box-shadow: 0 25px 50px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  transform: scale(0.95) translateY(20px);[m
[32m+[m[32m  transition: transform 0.4s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[32m+[m[32m}[m
 .project-modal.active .modal-content-wrapper {[m
[31m-    transform: scale(1) translateY(0);[m
[32m+[m[32m  transform: scale(1) translateY(0);[m
 }[m
[31m-[m
 .modal-close-btn {[m
[31m-    position: absolute;[m
[31m-    top: 20px;[m
[31m-    right: 20px;[m
[31m-    background: rgba(0, 0, 0, 0.5);[m
[31m-    color: #fff;[m
[31m-    border: none;[m
[31m-    width: 40px;[m
[31m-    height: 40px;[m
[31m-    border-radius: 50%;[m
[31m-    font-size: 1.2rem;[m
[31m-    cursor: pointer;[m
[31m-    z-index: 10;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    transition: background 0.3s;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  right: 20px;[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  width: 40px;[m
[32m+[m[32m  height: 40px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  transition: background 0.3s;[m
 }[m
[31m-[m
 .modal-close-btn:hover {[m
[31m-    background: var(--accent-primary);[m
[32m+[m[32m  background: var(--accent-primary);[m
 }[m
[31m-[m
 .modal-image-container {[m
[31m-    flex: 1.5;[m
[31m-    position: relative;[m
[31m-    overflow: hidden;[m
[32m+[m[32m  flex: 1.5;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  overflow: hidden;[m
 }[m
[31m-[m
 .modal-image-container img {[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    object-fit: cover;[m
[31m-    display: block;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  display: block;[m
 }[m
[31m-[m
 .modal-image-container::after {[m
[31m-    content: '';[m
[31m-    position: absolute;[m
[31m-    top: 0;[m
[31m-    right: 0;[m
[31m-    bottom: 0;[m
[31m-    width: 30%;[m
[31m-    background: linear-gradient(to right, transparent, #111);[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  width: 30%;[m
[32m+[m[32m  background: linear-gradient(to right, transparent, #111);[m
 }[m
[31m-[m
 .modal-info {[m
[31m-    flex: 1;[m
[31m-    padding: 60px 40px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    justify-content: center;[m
[31m-    color: #fff;[m
[31m-    overflow-y: auto;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  padding: 60px 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  overflow-y: auto;[m
 }[m
[31m-[m
 .modal-category {[m
[31m-    font-size: 0.9rem;[m
[31m-    color: var(--accent-primary);[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 2px;[m
[31m-    margin-bottom: 10px;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  margin-bottom: 10px;[m
 }[m
[31m-[m
 .modal-title {[m
[31m-    font-size: 2.2rem;[m
[31m-    font-weight: 700;[m
[31m-    margin: 0 0 20px 0;[m
[31m-    line-height: 1.2;[m
[32m+[m[32m  font-size: 2.2rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  margin: 0 0 20px 0;[m
[32m+[m[32m  line-height: 1.2;[m
 }[m
[31m-[m
 .modal-description {[m
[31m-    font-size: 1rem;[m
[31m-    line-height: 1.6;[m
[31m-    color: #aaa;[m
[31m-    margin: 0 0 30px 0;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  color: #aaa;[m
[32m+[m[32m  margin: 0 0 30px 0;[m
 }[m
[31m-[m
 .modal-tech-stack {[m
[31m-    display: flex;[m
[31m-    flex-wrap: wrap;[m
[31m-    gap: 10px;[m
[31m-    margin-bottom: 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  margin-bottom: 40px;[m
 }[m
[31m-[m
 .modal-pill {[m
[31m-    padding: 6px 14px;[m
[31m-    background: rgba(255, 255, 255, 0.05);[m
[31m-    border: 1px solid rgba(255, 255, 255, 0.1);[m
[31m-    border-radius: 20px;[m
[31m-    font-size: 0.85rem;[m
[31m-    color: #ddd;[m
[31m-}[m
[31m-[m
[32m+[m[32m  padding: 6px 14px;[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: #ddd;[m
[32m+[m[32m}[m
 .modal-link-btn {[m
[31m-    display: inline-flex;[m
[31m-    align-items: center;[m
[31m-    gap: 10px;[m
[31m-    background: var(--accent-primary);[m
[31m-    color: #fff;[m
[31m-    text-decoration: none;[m
[31m-    padding: 12px 24px;[m
[31m-    border-radius: 50px;[m
[31m-    font-weight: 600;[m
[31m-    width: fit-content;[m
[31m-    transition: background 0.3s, transform 0.2s, filter 0.3s ease;[m
[31m-}[m
[31m-[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  padding: 12px 24px;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  width: fit-content;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background 0.3s,[m
[32m+[m[32m    transform 0.2s,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m}[m
 .modal-link-btn:hover {[m
[31m-    filter: brightness(0.85);[m
[31m-    transform: translateX(5px);[m
[31m-}[m
[31m-[m
[31m-[m
[31m-[m
[31m-/* =========================================[m
[31m-   Mobile Responsiveness[m
[31m-========================================= */[m
[32m+[m[32m  filter: brightness(0.85);[m
[32m+[m[32m  transform: translateX(5px);[m
[32m+[m[32m}[m
 @media (max-width: 768px) {[m
[31m-    /* --- Splash Screen --- */[m
[31m-    .quote-container {[m
[31m-        padding: 0 20px;[m
[31m-    }[m
[31m-    .quote-text {[m
[31m-        font-size: clamp(1.5rem, 6vw, 2.5rem);[m
[31m-    }[m
[31m-[m
[31m-    /* --- Top Navigation (formerly Sidebar) --- */[m
[31m-    /* Target the main sidebar specifically so we don't stretch the cv-nav */[m
[31m-    .sidebar-nav:not(.cv-nav) {[m
[31m-        top: 15px;[m
[31m-        left: 50%;[m
[31m-        transform: translateX(-50%);[m
[31m-        width: auto !important; /* Override the hover expansion script logic */[m
[31m-        padding: 10px 20px;[m
[31m-        border-radius: 30px;[m
[31m-        z-index: 10001; /* Stay above elements */[m
[31m-    }[m
[31m-    [m
[31m-    .nav-menu {[m
[31m-        flex-direction: row;[m
[31m-        gap: 20px;[m
[31m-    }[m
[31m-    [m
[31m-    .nav-text {[m
[31m-        display: none; /* Never show text on mobile nav */[m
[31m-    }[m
[31m-    [m
[31m-    .nav-item:not(:last-child)::after {[m
[31m-        left: 20px; /* Shift to middle of gap */[m
[31m-        bottom: 50%; /* Center vertically */[m
[31m-        transform: translateY(50%);[m
[31m-        width: 1px;[m
[31m-        height: 15px; /* Vertical connector line */[m
[31m-    }[m
[31m-[m
[31m-    /* --- Theme Toggle & CV Nav --- */[m
[31m-    .utility-toggles {[m
[31m-        top: 15px;[m
[31m-        left: 20px;[m
[31m-        right: 20px;[m
[31m-        width: auto;[m
[31m-        justify-content: space-between;[m
[31m-    }[m
[31m-[m
[31m-    .theme-toggle,[m
[31m-    .mute-toggle {[m
[31m-        width: 40px;[m
[31m-        height: 40px;[m
[31m-    }[m
[31m-[m
[31m-    .cv-nav {[m
[31m-        top: auto; [m
[31m-        bottom: 20px;[m
[31m-        left: auto; [m
[31m-        transform: none;[m
[31m-        right: 20px; [m
[31m-        padding: 12px;[m
[31m-        width: auto !important;[m
[31m-        border-radius: 50%;[m
[31m-    }[m
[31m-    [m
[31m-    .cv-nav .nav-text {[m
[31m-        display: none;[m
[31m-    }[m
[31m-    [m
[31m-    .cv-nav .nav-icon {[m
[31m-        margin: 0;[m
[31m-    }[m
[31m-    [m
[31m-    .cv-nav:hover {[m
[31m-        width: auto;[m
[31m-    }[m
[31m-[m
[31m-    /* --- Hero Layout Stack --- */[m
[31m-    .hero-layout-wrapper {[m
[31m-        flex-direction: column;[m
[31m-        padding: 0 20px;[m
[31m-        gap: 15px;[m
[31m-        margin-top: 50px; /* Clear top nav */[m
[31m-    }[m
[31m-[m
[31m-    .hero-text-content {[m
[31m-        align-items: center;[m
[31m-        text-align: center;[m
[31m-        gap: 5px;[m
[31m-    }[m
[31m-[m
[31m-    /* Tighten headline so "Front-End Web Developer" stays on one line on small phones */[m
[31m-    .line-large {[m
[31m-        font-size: clamp(1.6rem, 6.5vw, 2.5rem);[m
[31m-        letter-spacing: -0.5px;[m
[31m-    }[m
[31m-[m
[31m-    .hero-image-container {[m
[31m-        width: 140px;[m
[31m-    }[m
[31m-[m
[31m-    .tech-carousel-wrapper {[m
[31m-        margin-top: 10px;[m
[31m-    }[m
[31m-[m
[31m-    /* --- About Timeline Mobile Stack --- */[m
[31m-    .clean-timeline-container {[m
[31m-        padding: 40px 20px;[m
[31m-    }[m
[31m-    [m
[31m-    .st-node {[m
[31m-        height: auto;[m
[31m-        padding-bottom: 50px;[m
[31m-        align-items: flex-start;[m
[31m-        justify-content: flex-start;[m
[31m-    }[m
[31m-    [m
[31m-    /* Hide the horizontal turning tracks entirely on mobile */[m
[31m-    .st-turn {[m
[31m-        display: none;[m
[31m-    }[m
[31m-    [m
[31m-    /* Force vertical tracks entirely to the left edge */[m
[31m-    .st-v {[m
[31m-        left: 0 !important;[m
[31m-        right: auto !important;[m
[31m-    }[m
[31m-    [m
[31m-    /* Align dot over the left track */[m
[31m-    .st-dot {[m
[31m-        left: -7px !important;[m
[31m-        right: auto !important;[m
[31m-    }[m
[31m-    [m
[31m-    /* Force content text to shift right from the track */[m
[31m-    .st-content {[m
[31m-        width: 100%;[m
[31m-        margin-left: 40px !important;[m
[31m-        margin-right: 0 !important;[m
[31m-        text-align: left !important;[m
[31m-    }[m
[31m-[m
[31m-    /* --- Projects Mobile --- */[m
[31m-    .bento-grid {[m
[31m-        grid-template-columns: 1fr;[m
[31m-        grid-auto-rows: 250px;[m
[31m-    }[m
[31m-    [m
[31m-    .bento-1, .bento-2, .bento-3, .bento-4, .bento-5, .bento-6, .bento-7, .bento-8 {[m
[31m-        grid-column: 1 / -1;[m
[31m-        grid-row: auto;[m
[31m-    }[m
[31m-[m
[31m-    .projects-content-group {[m
[31m-        padding-top: 80px; /* clear nav */[m
[31m-    }[m
[31m-[m
[31m-    .modal-content-wrapper {[m
[31m-        flex-direction: column;[m
[31m-        height: 85vh;[m
[31m-        overflow-y: auto;[m
[31m-        display: block; /* remove flex so info can grow naturally */[m
[31m-    }[m
[31m-[m
[31m-    .modal-image-container {[m
[31m-        height: 250px;[m
[31m-        flex: none;[m
[31m-        width: 100%;[m
[31m-    }[m
[31m-[m
[31m-    .modal-image-container::after {[m
[31m-        background: linear-gradient(to bottom, transparent, #111);[m
[31m-        width: 100%;[m
[31m-        height: 40%;[m
[31m-        top: auto;[m
[31m-        bottom: 0;[m
[31m-        left: 0;[m
[31m-    }[m
[31m-    [m
[31m-    .modal-info {[m
[31m-        padding: 30px 20px;[m
[31m-        flex: none;[m
[31m-    }[m
[31m-    [m
[31m-    .modal-title {[m
[31m-        font-size: 1.8rem;[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Contact Section[m
[31m-========================================= */[m
[31m-.contact-section {[m
[31m-    padding: 100px 20px;[m
[31m-    background: var(--bg-dark);[m
[31m-    display: flex;[m
[32m+[m[32m  .quote-container {[m
[32m+[m[32m    padding: 0 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .quote-text {[m
[32m+[m[32m    font-size: clamp(1.5rem, 6vw, 2.5rem);[m
[32m+[m[32m  }[m
[32m+[m[32m  .sidebar-nav:not(.cv-nav) {[m
[32m+[m[32m    top: 15px;[m
[32m+[m[32m    left: 50%;[m
[32m+[m[32m    transform: translateX(-50%);[m
[32m+[m[32m    width: auto !important;[m
[32m+[m[32m    padding: 10px 20px;[m
[32m+[m[32m    border-radius: 30px;[m
[32m+[m[32m    z-index: 10001;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-menu {[m
[32m+[m[32m    flex-direction: row;[m
[32m+[m[32m    gap: 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-text {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-item:not(:last-child)::after {[m
[32m+[m[32m    left: 20px;[m
[32m+[m[32m    bottom: 50%;[m
[32m+[m[32m    transform: translateY(50%);[m
[32m+[m[32m    width: 1px;[m
[32m+[m[32m    height: 15px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .utility-toggles {[m
[32m+[m[32m    top: 15px;[m
[32m+[m[32m    left: 20px;[m
[32m+[m[32m    right: 20px;[m
[32m+[m[32m    width: auto;[m
[32m+[m[32m    justify-content: space-between;[m
[32m+[m[32m  }[m
[32m+[m[32m  .mute-toggle,[m
[32m+[m[32m  .theme-toggle {[m
[32m+[m[32m    width: 40px;[m
[32m+[m[32m    height: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav {[m
[32m+[m[32m    top: auto;[m
[32m+[m[32m    bottom: 20px;[m
[32m+[m[32m    left: auto;[m
[32m+[m[32m    transform: none;[m
[32m+[m[32m    right: 20px;[m
[32m+[m[32m    padding: 12px;[m
[32m+[m[32m    width: auto !important;[m
[32m+[m[32m    border-radius: 50%;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav .nav-text {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav .nav-icon {[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav:hover {[m
[32m+[m[32m    width: auto;[m
[32m+[m[32m  }[m
[32m+[m[32m  .hero-layout-wrapper {[m
     flex-direction: column;[m
[32m+[m[32m    padding: 0 20px;[m
[32m+[m[32m    gap: 15px;[m
[32m+[m[32m    margin-top: 50px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .hero-text-content {[m
     align-items: center;[m
     text-align: center;[m
[32m+[m[32m    gap: 5px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .line-large {[m
[32m+[m[32m    font-size: clamp(1.6rem, 6.5vw, 2.5rem);[m
[32m+[m[32m    letter-spacing: -0.5px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .hero-image-container {[m
[32m+[m[32m    width: 140px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .tech-carousel-wrapper {[m
[32m+[m[32m    margin-top: 10px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .clean-timeline-container {[m
[32m+[m[32m    padding: 40px 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-node {[m
[32m+[m[32m    height: auto;[m
[32m+[m[32m    padding-bottom: 50px;[m
[32m+[m[32m    align-items: flex-start;[m
[32m+[m[32m    justify-content: flex-start;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-turn {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-v {[m
[32m+[m[32m    left: 0 !important;[m
[32m+[m[32m    right: auto !important;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-dot {[m
[32m+[m[32m    left: -7px !important;[m
[32m+[m[32m    right: auto !important;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-content {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    margin-left: 40px !important;[m
[32m+[m[32m    margin-right: 0 !important;[m
[32m+[m[32m    text-align: left !important;[m
[32m+[m[32m  }[m
[32m+[m[32m  .bento-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    grid-auto-rows: 250px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .bento-1,[m
[32m+[m[32m  .bento-2,[m
[32m+[m[32m  .bento-3,[m
[32m+[m[32m  .bento-4,[m
[32m+[m[32m  .bento-5,[m
[32m+[m[32m  .bento-6,[m
[32m+[m[32m  .bento-7,[m
[32m+[m[32m  .bento-8 {[m
[32m+[m[32m    grid-column: 1/-1;[m
[32m+[m[32m    grid-row: auto;[m
[32m+[m[32m  }[m
[32m+[m[32m  .projects-content-group {[m
[32m+[m[32m    padding-top: 80px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-content-wrapper {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    height: 85vh;[m
[32m+[m[32m    overflow-y: auto;[m
[32m+[m[32m    display: block;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-image-container {[m
[32m+[m[32m    height: 250px;[m
[32m+[m[32m    flex: none;[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-image-container::after {[m
[32m+[m[32m    background: linear-gradient(to bottom, transparent, #111);[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    height: 40%;[m
[32m+[m[32m    top: auto;[m
[32m+[m[32m    bottom: 0;[m
[32m+[m[32m    left: 0;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-info {[m
[32m+[m[32m    padding: 30px 20px;[m
[32m+[m[32m    flex: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-title {[m
[32m+[m[32m    font-size: 1.8rem;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.contact-section {[m
[32m+[m[32m  padding: 100px 20px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  text-align: center;[m
 }[m
[31m-[m
 .contact-section-header {[m
[31m-    text-align: center;[m
[31m-    margin-bottom: 40px;[m
[31m-    position: relative;[m
[31m-    width: 100%;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-bottom: 40px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
 }[m
[31m-[m
 .contact-subtitle {[m
[31m-    display: block;[m
[31m-    font-size: 0.9rem;[m
[31m-    letter-spacing: 2px;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 10px;[m
[31m-    text-transform: uppercase;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 10px;[m
[32m+[m[32m  text-transform: uppercase;[m
 }[m
[31m-[m
 .contact-title {[m
[31m-    position: relative;[m
[31m-    display: inline-block;[m
[31m-    margin: 0;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .contact-main-text {[m
[31m-    position: relative;[m
[31m-    font-size: clamp(2rem, 5vw, 3.5rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    z-index: 2;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
 }[m
[31m-[m
 .contact-ghost-text {[m
[31m-    position: absolute;[m
[31m-    top: 30%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    font-size: clamp(3.5rem, 10vw, 7rem);[m
[31m-    font-weight: 800;[m
[31m-    color: var(--text-muted);[m
[31m-    opacity: var(--ghost-opacity);[m
[31m-    z-index: 1;[m
[31m-    white-space: nowrap;[m
[31m-    user-select: none;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 30%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3.5rem, 10vw, 7rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .contact-content-body {[m
[31m-    max-width: 800px;[m
[31m-    margin: 0 auto 60px;[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  margin: 0 auto 60px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
 .contact-description {[m
[31m-    font-size: 1.1rem;[m
[31m-    line-height: 1.7;[m
[31m-    color: var(--text-muted);[m
[31m-    margin-bottom: 40px;[m
[31m-    max-width: 600px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 40px;[m
[32m+[m[32m  max-width: 600px;[m
 }[m
[31m-[m
[31m-/* Base button styling closely resembling the mockup's solid block approach */[m
 .lets-talk-btn {[m
[31m-    background-color: var(--accent-primary);[m
[31m-    color: #ffffff;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 1rem;[m
[31m-    font-weight: 600;[m
[31m-    padding: 16px 40px;[m
[31m-    border: none;[m
[31m-    transition: background-color 0.3s ease, transform 0.2s ease, box-shadow 0.3s ease, filter 0.3s ease;[m
[31m-    border-radius: 50px;[m
[31m-}[m
[31m-[m
[31m-/* Light mode support: button remains visually distinct */[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  padding: 16px 40px;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background-color 0.3s ease,[m
[32m+[m[32m    transform 0.2s ease,[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m}[m
 [data-theme="light"] .lets-talk-btn {[m
[31m-    background-color: var(--accent-primary); /* Uses light mode accent if different */[m
[32m+[m[32m  background-color: var(--accent-primary);[m
 }[m
[31m-[m
 .lets-talk-btn:hover {[m
[31m-    filter: brightness(0.85);[m
[31m-    transform: translateY(-2px);[m
[31m-    box-shadow: 0 10px 20px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  filter: brightness(0.85);[m
[32m+[m[32m  transform: translateY(-2px);[m
[32m+[m[32m  box-shadow: 0 10px 20px rgba(0, 0, 0, 0.2);[m
 }[m
[31m-[m
 .lets-talk-btn:active {[m
[31m-    transform: translateY(0);[m
[31m-    box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m  box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);[m
 }[m
[31m-[m
 .contact-info-grid {[m
[31m-    display: grid;[m
[31m-    grid-template-columns: repeat(3, 1fr);[m
[31m-    gap: 40px;[m
[31m-    width: 100%;[m
[31m-    max-width: 900px;[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(3, 1fr);[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 900px;[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .contact-info-item {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    align-items: center;[m
[31m-    gap: 15px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
 }[m
[31m-[m
 .contact-info-label {[m
[31m-    font-size: 1.5rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .contact-info-value {[m
[31m-    font-size: 1.1rem;[m
[31m-    color: var(--text-muted);[m
[31m-    line-height: 1.6;[m
[31m-    margin: 0;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  margin: 0;[m
 }[m
[31m-[m
 .contact-info-value a {[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    transition: color 0.3s;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: color 0.3s;[m
 }[m
[31m-[m
 .contact-info-value a:hover {[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .contact-modal-wrapper {[m
[31m-    max-width: 600px;[m
[31m-    background: var(--bg-dark);[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    box-shadow: 0 20px 50px rgba(0,0,0,0.5);[m
[32m+[m[32m  max-width: 600px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  box-shadow: 0 20px 50px rgba(0, 0, 0, 0.5);[m
 }[m
[31m-[m
 .contact-close-btn {[m
[31m-    top: 20px;[m
[31m-    right: 20px;[m
[31m-    color: var(--text-muted);[m
[31m-    background: transparent;[m
[31m-    border: none;[m
[31m-    font-size: 1.5rem;[m
[31m-    cursor: pointer;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  right: 20px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  background: 0 0;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  cursor: pointer;[m
 }[m
[31m-[m
 .contact-close-btn:hover {[m
[31m-    color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
 }[m
[31m-[m
 .contact-modal-inner {[m
[31m-    padding: 60px 50px;[m
[31m-    text-align: left;[m
[32m+[m[32m  padding: 60px 50px;[m
[32m+[m[32m  text-align: left;[m
 }[m
[31m-[m
 .contact-modal-subtitle {[m
[31m-    font-size: 0.8rem;[m
[31m-    letter-spacing: 2px;[m
[31m-    color: var(--text-muted);[m
[31m-    margin: 0 0 10px 0;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0 0 10px 0;[m
 }[m
[31m-[m
 .contact-modal-title {[m
[31m-    font-size: 2.5rem;[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    margin: 0 0 40px 0;[m
[32m+[m[32m  font-size: 2.5rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin: 0 0 40px 0;[m
 }[m
[31m-[m
 .contact-form {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 25px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 25px;[m
 }[m
[31m-[m
 .form-row {[m
[31m-    display: flex;[m
[31m-    gap: 20px;[m
[31m-    width: 100%;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  width: 100%;[m
 }[m
[31m-[m
 .form-row .form-group {[m
[31m-    flex: 1;[m
[32m+[m[32m  flex: 1;[m
 }[m
[31m-[m
 .form-group {[m
[31m-    display: flex;[m
[31m-    flex-direction: column;[m
[31m-    gap: 8px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 8px;[m
 }[m
[31m-[m
 .form-group label {[m
[31m-    font-size: 0.95rem;[m
[31m-    font-weight: 600;[m
[31m-    color: var(--text-light);[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
 }[m
[31m-[m
 .form-group input,[m
 .form-group textarea {[m
[31m-    width: 100%;[m
[31m-    padding: 15px;[m
[31m-    border: 1px solid var(--glass-border);[m
[31m-    border-radius: 4px;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 1rem;[m
[31m-    color: var(--text-light);[m
[31m-    background-color: var(--skeleton-highlight);[m
[31m-    transition: border-color 0.3s ease, box-shadow 0.3s ease;[m
[31m-    box-sizing: border-box;[m
[31m-}[m
[31m-[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 15px;[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background-color: var(--skeleton-highlight);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    box-shadow 0.3s ease;[m
[32m+[m[32m  box-sizing: border-box;[m
[32m+[m[32m}[m
 .form-group input:focus,[m
 .form-group textarea:focus {[m
[31m-    outline: none;[m
[31m-    border-color: var(--accent-primary);[m
[31m-    box-shadow: 0 0 0 3px rgba(0, 140, 255, 0.2);[m
[32m+[m[32m  outline: 0;[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 0 3px rgba(0, 140, 255, 0.2);[m
 }[m
[31m-[m
 .contact-submit-btn {[m
[31m-    background-color: var(--accent-primary); [m
[31m-    color: #ffffff;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 1rem;[m
[31m-    font-weight: 600;[m
[31m-    padding: 18px;[m
[31m-    border: none;[m
[31m-    border-radius: 50px;[m
[31m-    cursor: pointer;[m
[31m-    transition: background-color 0.3s ease, transform 0.2s ease, filter 0.3s ease;[m
[31m-    margin-top: 10px;[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  padding: 18px;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background-color 0.3s ease,[m
[32m+[m[32m    transform 0.2s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m  margin-top: 10px;[m
 }[m
[31m-[m
 .contact-submit-btn:hover {[m
[31m-    filter: brightness(0.85);[m
[31m-    transform: translateY(-2px);[m
[32m+[m[32m  filter: brightness(0.85);[m
[32m+[m[32m  transform: translateY(-2px);[m
 }[m
[31m-[m
 @media (max-width: 768px) {[m
[31m-    .contact-info-grid {[m
[31m-        grid-template-columns: 1fr;[m
[31m-        gap: 40px;[m
[31m-    }[m
[31m-    .form-row {[m
[31m-        flex-direction: column;[m
[31m-        gap: 25px;[m
[31m-    }[m
[31m-    .contact-modal-inner {[m
[31m-        padding: 40px 25px;[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-/* =========================================[m
[31m-   Socials Section[m
[31m-========================================= */[m
[32m+[m[32m  .contact-info-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .form-row {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    gap: 25px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .contact-modal-inner {[m
[32m+[m[32m    padding: 40px 25px;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
 .socials-section {[m
[31m-    width: 100%;[m
[31m-    padding: 60px 20px;[m
[31m-    background-color: var(--bg-dark); /* match the current theme */[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 60px 20px;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
 .socials-container {[m
[31m-    width: 100%;[m
[31m-    max-width: 1000px;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 20px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 20px;[m
 }[m
[31m-[m
 .socials-header {[m
[31m-    position: relative;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
 .socials-title {[m
[31m-    position: relative;[m
[31m-    margin: 0;[m
[31m-    display: inline-block;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: inline-block;[m
 }[m
[31m-[m
 .socials-main-text {[m
[31m-    position: relative;[m
[31m-    font-size: clamp(1.8rem, 4vw, 2.5rem);[m
[31m-    font-weight: 700;[m
[31m-    color: var(--accent-primary);[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 2px;[m
[31m-    white-space: nowrap;[m
[31m-    z-index: 2;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(1.8rem, 4vw, 2.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
 .socials-ghost-text {[m
[31m-    position: absolute;[m
[31m-    top: 50%;[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    font-size: clamp(3rem, 8vw, 5rem);[m
[31m-    font-weight: 800;[m
[31m-    color: var(--text-muted);[m
[31m-    opacity: var(--ghost-opacity);[m
[31m-    z-index: 1;[m
[31m-    white-space: nowrap;[m
[31m-    user-select: none;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[31m-/* The Animated Line */[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3rem, 8vw, 5rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .socials-animated-line {[m
[31m-    flex-grow: 1; /* take up remaining space */[m
[31m-    height: 1px;[m
[31m-    background-color: var(--accent-primary);[m
[31m-    /* Initial state before scroll animation */[m
[31m-    transform: scaleX(0);[m
[31m-    transform-origin: center;[m
[31m-    transition: transform 1.5s cubic-bezier(0.22, 1, 0.36, 1);[m
[31m-}[m
[31m-[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m  transform: scaleX(0);[m
[32m+[m[32m  transform-origin: center;[m
[32m+[m[32m  transition: transform 1.5s cubic-bezier(0.22, 1, 0.36, 1);[m
[32m+[m[32m}[m
 .socials-animated-line.animate {[m
[31m-    transform: scaleX(1);[m
[32m+[m[32m  transform: scaleX(1);[m
 }[m
[31m-[m
 .socials-buttons {[m
[31m-    display: flex;[m
[31m-    gap: 15px;[m
[31m-    align-items: center;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  align-items: center;[m
 }[m
[31m-[m
[31m-/* Base Social Button (Replicating Tailwind) */[m
 .social-btn {[m
[31m-    position: relative;[m
[31m-    display: flex;[m
[31m-    justify-content: center;[m
[31m-    align-items: center;[m
[31m-    padding: 15px; /* Increased padding */[m
[31m-    border-radius: 8px; /* Slightly larger border radius for bigger button */[m
[31m-    border: none;[m
[31m-    color: #ffffff;[m
[31m-    font-weight: 600;[m
[31m-    cursor: pointer;[m
[31m-    box-shadow: 0 20px 25px -5px rgba(0, 0, 0, 0.1), 0 10px 10px -5px rgba(0, 0, 0, 0.04); /* drop-shadow-xl */[m
[31m-    transition: all 0.5s ease; /* transition-all duration-500 */[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  padding: 15px;[m
[32m+[m[32m  border-radius: 8px;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  box-shadow:[m
[32m+[m[32m    0 20px 25px -5px rgba(0, 0, 0, 0.1),[m
[32m+[m[32m    0 10px 10px -5px rgba(0, 0, 0, 0.04);[m
[32m+[m[32m  transition: all 0.5s ease;[m
[32m+[m[32m}[m
 .social-icon {[m
[31m-    width: 32px; /* Increased size */[m
[31m-    height: auto;[m
[32m+[m[32m  width: 32px;[m
[32m+[m[32m  height: auto;[m
 }[m
[31m-[m
[31m-/* GitHub Specific Button */[m
 .github-btn {[m
[31m-    background-color: #24292e; /* Solid GitHub brand color */[m
[32m+[m[32m  background-color: #24292e;[m
 }[m
[31m-[m
[31m-/* LinkedIn Specific Button */[m
 .linkedin-btn {[m
[31m-    background-color: #0077b5; /* Solid LinkedIn brand color */[m
[32m+[m[32m  background-color: #0077b5;[m
 }[m
[31m-[m
[31m-/* Hover States for all Social Buttons */[m
 .social-btn:hover {[m
[31m-    transform: translateY(-12px); [m
[31m-    border-radius: 50%;[m
[31m-    filter: brightness(1.2); /* Brighten instead of changing to a purple gradient */[m
[32m+[m[32m  transform: translateY(-12px);[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  filter: brightness(1.2);[m
 }[m
[31m-[m
[31m-/* Tooltip (Replicating Tailwind group-hover spans) */[m
 .social-tooltip {[m
[31m-    position: absolute;[m
[31m-    top: 50%; /* Center relative to button */[m
[31m-    left: 50%;[m
[31m-    transform: translate(-50%, -50%);[m
[31m-    opacity: 0;[m
[31m-    color: var(--text-light); /* use theme color instead of tailwind gray-700 */[m
[31m-    font-size: 0.875rem; /* text-sm */[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    pointer-events: none;[m
[31m-    transition: all 0.7s ease; /* duration-700 */[m
[31m-    white-space: nowrap;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-size: 0.875rem;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  transition: all 0.7s ease;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m}[m
 .social-btn:hover .social-tooltip {[m
[31m-    opacity: 1; /* group-hover:opacity-100 */[m
[31m-    transform: translate(-50%, calc(-50% - 50px)); /* Increased offset for larger button */[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translate(-50%, calc(-50% - 50px));[m
 }[m
[31m-[m
[31m-/* =========================================[m
[31m-   Site Footer (Merged Socials)[m
[31m-========================================= */[m
 .site-footer {[m
[31m-    width: 100%;[m
[31m-    background-color: var(--bg-dark);[m
[31m-    border-top: 1px solid var(--glass-border);[m
[31m-    padding-bottom: 60px;[m
[31m-    position: relative;[m
[31m-    z-index: 10;[m
[31m-}[m
[31m-[m
[31m-/* Adjusting existing socials section for merger */[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  padding-bottom: 60px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
 .site-footer .socials-section {[m
[31m-    background-color: transparent;[m
[31m-    padding: 80px 20px 40px;[m
[32m+[m[32m  background-color: transparent;[m
[32m+[m[32m  padding: 80px 20px 40px;[m
 }[m
[31m-[m
 .footer-separator {[m
[31m-    width: 100%;[m
[31m-    max-width: 1000px;[m
[31m-    height: 1px;[m
[31m-    background-color: var(--glass-border);[m
[31m-    margin: 0 auto;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background-color: var(--glass-border);[m
[32m+[m[32m  margin: 0 auto;[m
 }[m
[31m-[m
 .footer-content {[m
[31m-    width: 100%;[m
[31m-    max-width: 1000px;[m
[31m-    margin: 0 auto;[m
[31m-    padding: 60px 20px 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 60px 20px 0;[m
 }[m
[31m-[m
 .footer-row {[m
[31m-    display: flex;[m
[31m-    justify-content: space-between;[m
[31m-    align-items: center;[m
[31m-    gap: 30px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 30px;[m
 }[m
[31m-[m
 .footer-top {[m
[31m-    margin-bottom: 60px;[m
[32m+[m[32m  margin-bottom: 60px;[m
 }[m
[31m-[m
 .footer-bottom {[m
[31m-    padding-top: 40px;[m
[31m-    border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  padding-top: 40px;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
 }[m
[31m-[m
[31m-/* S.U.D.O. Slogan Styling (Code Inspired) */[m
 .footer-slogan {[m
[31m-    flex: 1;[m
[31m-    display: flex;[m
[31m-    align-items: baseline;[m
[31m-    gap: 15px;[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: baseline;[m
[32m+[m[32m  gap: 15px;[m
 }[m
[31m-[m
 .sudo-text {[m
[31m-    font-family: inherit;[m
[31m-    font-size: clamp(2.2rem, 5.5vw, 3.2rem);[m
[31m-    font-weight: 800;[m
[31m-    color: var(--accent-primary);[m
[31m-    letter-spacing: 1px;[m
[31m-    line-height: 1;[m
[31m-}[m
[31m-[m
[32m+[m[32m  font-family: inherit;[m
[32m+[m[32m  font-size: clamp(2.2rem, 5.5vw, 3.2rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  line-height: 1;[m
[32m+[m[32m}[m
 .sudo-expansion {[m
[31m-    font-size: clamp(0.9rem, 2.5vw, 1.2rem); /* Increased size to match better */[m
[31m-    color: var(--text-light); /* Matching main text color for harmony */[m
[31m-    letter-spacing: 1px;[m
[31m-    font-weight: 700; /* Bolder weight */[m
[31m-    text-transform: uppercase;[m
[31m-    white-space: nowrap;[m
[31m-    opacity: 0.9; /* More prominent */[m
[31m-}[m
[31m-[m
[31m-/* GitHub Star Button (Tailwind Conversion) */[m
[32m+[m[32m  font-size: clamp(0.9rem, 2.5vw, 1.2rem);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  opacity: 0.9;[m
[32m+[m[32m}[m
 .github-star-btn {[m
[31m-    position: relative;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    justify-content: center;[m
[31m-    gap: 15px;[m
[31m-    height: 44px;[m
[31m-    padding: 0 20px;[m
[31m-    background-color: #000;[m
[31m-    color: #fff;[m
[31m-    border: none;[m
[31m-    border-radius: 6px;[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 0.85rem;[m
[31m-    font-weight: 600;[m
[31m-    cursor: pointer;[m
[31m-    overflow: hidden;[m
[31m-    box-shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1), 0 2px 4px -1px rgba(0, 0, 0, 0.06);[m
[31m-    transition: all 0.3s cubic-bezier(0.4, 0, 0.2, 1);[m
[31m-}[m
[31m-[m
[31m-/* Light theme variation to maintain black/white contrast for GitHub specifically */[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  height: 44px;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m  background-color: #000;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  border-radius: 6px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  box-shadow:[m
[32m+[m[32m    0 4px 6px -1px rgba(0, 0, 0, 0.1),[m
[32m+[m[32m    0 2px 4px -1px rgba(0, 0, 0, 0.06);[m
[32m+[m[32m  transition: all 0.3s cubic-bezier(0.4, 0, 0.2, 1);[m
[32m+[m[32m}[m
 [data-theme="light"] .github-star-btn {[m
[31m-    background-color: #111;[m
[32m+[m[32m  background-color: #111;[m
 }[m
[31m-[m
 .github-star-btn:hover {[m
[31m-    outline: 2px solid #000;[m
[31m-    outline-offset: 2px;[m
[31m-    filter: brightness(1.2);[m
[31m-    transform: translateY(-2px);[m
[32m+[m[32m  outline: 2px solid #000;[m
[32m+[m[32m  outline-offset: 2px;[m
[32m+[m[32m  filter: brightness(1.2);[m
[32m+[m[32m  transform: translateY(-2px);[m
 }[m
[31m-[m
 .btn-shine {[m
[31m-    position: absolute;[m
[31m-    right: 0;[m
[31m-    margin-top: -48px;[m
[31m-    height: 128px;[m
[31m-    width: 32px;[m
[31m-    background-color: rgba(255, 255, 255, 0.15);[m
[31m-    transform: translateX(48px) rotate(12deg);[m
[31m-    transition: transform 1s ease-out;[m
[31m-    pointer-events: none;[m
[31m-}[m
[31m-[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  margin-top: -48px;[m
[32m+[m[32m  height: 128px;[m
[32m+[m[32m  width: 32px;[m
[32m+[m[32m  background-color: rgba(255, 255, 255, 0.15);[m
[32m+[m[32m  transform: translateX(48px) rotate(12deg);[m
[32m+[m[32m  transition: transform 1s ease-out;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
 .github-star-btn:hover .btn-shine {[m
[31m-    transform: translateX(-180px) rotate(12deg);[m
[32m+[m[32m  transform: translateX(-180px) rotate(12deg);[m
 }[m
[31m-[m
 .btn-content {[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 8px;[m
[31m-    color: #fff;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  color: #fff;[m
 }[m
[31m-[m
 .github-icon {[m
[31m-    width: 16px;[m
[31m-    height: 16px;[m
[31m-    fill: currentColor;[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  fill: currentColor;[m
 }[m
[31m-[m
 .btn-stats {[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-    gap: 6px;[m
[31m-    border-left: 1px solid rgba(255, 255, 255, 0.2);[m
[31m-    padding-left: 12px;[m
[31m-    color: #fff;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 6px;[m
[32m+[m[32m  border-left: 1px solid rgba(255, 255, 255, 0.2);[m
[32m+[m[32m  padding-left: 12px;[m
[32m+[m[32m  color: #fff;[m
 }[m
[31m-[m
 .star-icon {[m
[31m-    width: 16px;[m
[31m-    height: 16px;[m
[31m-    color: #9ca3af; /* Gray-400 equivalent */[m
[31m-    transition: color 0.3s ease;[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  color: #9ca3af;[m
[32m+[m[32m  transition: color 0.3s ease;[m
 }[m
[31m-[m
 .github-star-btn:hover .star-icon {[m
[31m-    color: #fde047; /* Yellow-300 equivalent */[m
[32m+[m[32m  color: #fde047;[m
 }[m
[31m-[m
 .stat-count {[m
[31m-    font-family: 'Inter', sans-serif;[m
[31m-    font-size: 0.85rem;[m
[31m-    letter-spacing: 0.5px;[m
[31m-    font-weight: 500;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  letter-spacing: 0.5px;[m
[32m+[m[32m  font-weight: 500;[m
 }[m
[31m-[m
[31m-/* Footer Bottom Row Hooks */[m
 .footer-copyright {[m
[31m-    color: var(--text-muted);[m
[31m-    font-size: 0.9rem;[m
[31m-    font-weight: 400;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 400;[m
 }[m
[31m-[m
 .stylized-name {[m
[31m-    color: var(--accent-primary);[m
[31m-    font-weight: 600;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  font-weight: 600;[m
 }[m
[31m-[m
 .footer-nav {[m
[31m-    display: flex;[m
[31m-    gap: 25px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 25px;[m
 }[m
[31m-[m
 .footer-nav-link {[m
[31m-    color: var(--text-muted);[m
[31m-    text-decoration: none;[m
[31m-    font-size: 0.85rem;[m
[31m-    font-weight: 500;[m
[31m-    transition: all 0.3s ease;[m
[31m-    text-transform: uppercase;[m
[31m-    letter-spacing: 1px;[m
[31m-}[m
[31m-[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m}[m
 .footer-nav-link:hover {[m
[31m-    color: var(--accent-primary);[m
[31m-    transform: translateY(-2px);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-2px);[m
 }[m
[31m-[m
[31m-/* Mobile Adjustments */[m
 @media (max-width: 768px) {[m
[31m-    .site-footer .socials-section {[m
[31m-        padding: 60px 20px 30px;[m
[31m-    }[m
[31m-[m
[31m-    .footer-row {[m
[31m-        flex-direction: column;[m
[31m-        text-align: center;[m
[31m-        gap: 40px;[m
[31m-    }[m
[31m-    [m
[31m-    .footer-top {[m
[31m-        margin-bottom: 40px;[m
[31m-    }[m
[31m-[m
[31m-    .footer-nav {[m
[31m-        flex-wrap: wrap;[m
[31m-        justify-content: center;[m
[31m-        gap: 15px 25px;[m
[31m-    }[m
[31m-[m
[31m-    .sudo-text {[m
[31m-        font-size: 2.2rem;[m
[31m-    }[m
[32m+[m[32m  .site-footer .socials-section {[m
[32m+[m[32m    padding: 60px 20px 30px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .footer-row {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    text-align: center;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .footer-top {[m
[32m+[m[32m    margin-bottom: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .footer-nav {[m
[32m+[m[32m    flex-wrap: wrap;[m
[32m+[m[32m    justify-content: center;[m
[32m+[m[32m    gap: 15px 25px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .sudo-text {[m
[32m+[m[32m    font-size: 2.2rem;[m
[32m+[m[32m  }[m
 }[m
[1mdiff --git a/css/style.min.css b/css/style.min.css[m
[1mnew file mode 100644[m
[1mindex 0000000..1f6bb6f[m
[1m--- /dev/null[m
[1m+++ b/css/style.min.css[m
[36m@@ -0,0 +1,1959 @@[m
[32m+[m[32m@import url(https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;700&family=Playfair+Display:ital,wght@0,400;0,600;1,400&display=swap);[m
[32m+[m[32m:root {[m
[32m+[m[32m  --bg-dark: #0a0a0a;[m
[32m+[m[32m  --text-light: #ffffff;[m
[32m+[m[32m  --text-muted: #a3a3a3;[m
[32m+[m[32m  --accent-primary: #008cff;[m
[32m+[m[32m  --skeleton-base: #171717;[m
[32m+[m[32m  --skeleton-highlight: #262626;[m
[32m+[m[32m  --glass-bg: rgba(20, 20, 20, 0.4);[m
[32m+[m[32m  --glass-border: rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  --glass-line: rgba(255, 255, 255, 0.2);[m
[32m+[m[32m  --tooltip-bg: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  --tooltip-border: rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  --overlay-bg: rgba(10, 10, 10, 0.3);[m
[32m+[m[32m  --ghost-opacity: 0.05;[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] {[m
[32m+[m[32m  --bg-dark: #e2e8f0;[m
[32m+[m[32m  --text-light: #000000;[m
[32m+[m[32m  --text-muted: #64748b;[m
[32m+[m[32m  --accent-primary: #008cff;[m
[32m+[m[32m  --skeleton-base: #cbd5e1;[m
[32m+[m[32m  --skeleton-highlight: #e2e8f0;[m
[32m+[m[32m  --glass-bg: rgba(255, 255, 255, 0.6);[m
[32m+[m[32m  --glass-border: rgba(0, 0, 0, 0.05);[m
[32m+[m[32m  --glass-line: rgba(0, 0, 0, 0.1);[m
[32m+[m[32m  --tooltip-bg: rgba(255, 255, 255, 0.85);[m
[32m+[m[32m  --tooltip-border: rgba(0, 0, 0, 0.08);[m
[32m+[m[32m  --overlay-bg: rgba(255, 255, 255, 0.3);[m
[32m+[m[32m  --ghost-opacity: 0.2;[m
[32m+[m[32m}[m
[32m+[m[32mbody,[m
[32m+[m[32mhtml {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background-color 0.4s ease,[m
[32m+[m[32m    color 0.4s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.splash-screen {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m}[m
[32m+[m[32m#laptop,[m
[32m+[m[32m#laptop-screen {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.screen-content {[m
[32m+[m[32m  width: 416px;[m
[32m+[m[32m  height: 280px;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.skeleton-loader {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  width: 80%;[m
[32m+[m[32m  max-width: 300px;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transition: opacity 0.8s ease-in-out;[m
[32m+[m[32m}[m
[32m+[m[32m.skeleton-bar {[m
[32m+[m[32m  height: 20px;[m
[32m+[m[32m  background: var(--skeleton-base);[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.skeleton-bar.short {[m
[32m+[m[32m  width: 60%;[m
[32m+[m[32m}[m
[32m+[m[32m.skeleton-bar::after {[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  transform: translateX(-100%);[m
[32m+[m[32m  background-image: linear-gradient([m
[32m+[m[32m    90deg,[m
[32m+[m[32m    rgba(255, 255, 255, 0) 0,[m
[32m+[m[32m    rgba(255, 255, 255, 0.05) 20%,[m
[32m+[m[32m    rgba(255, 255, 255, 0.05) 60%,[m
[32m+[m[32m    rgba(255, 255, 255, 0)[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
[32m+[m[32m.skeleton-loader.active .skeleton-bar::after {[m
[32m+[m[32m  animation: shimmer 1.5s infinite;[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes shimmer {[m
[32m+[m[32m  100% {[m
[32m+[m[32m    transform: translateX(100%);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.fade-out {[m
[32m+[m[32m  opacity: 0 !important;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.quote-container {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  box-sizing: border-box;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform-origin: center center;[m
[32m+[m[32m  transform: translateY(20px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1s ease,[m
[32m+[m[32m    transform 1s ease;[m
[32m+[m[32m  padding: 0 100px;[m
[32m+[m[32m}[m
[32m+[m[32m.quote-container.show {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.quote-text {[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 4rem);[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  letter-spacing: 0.5px;[m
[32m+[m[32m  margin: 0 0 15px 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.quote-author {[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: clamp(0.9rem, 1.5vw, 1.2rem);[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  letter-spacing: 4px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin: 10px 10px 0 0;[m
[32m+[m[32m  opacity: 0.8;[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.quote-dash {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.quote-container.zoom-into {[m
[32m+[m[32m  transform: scale(250);[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 2.5s cubic-bezier(0.9, 0, 0.1, 1),[m
[32m+[m[32m    opacity 0.8s ease-in 1.4s;[m
[32m+[m[32m}[m
[32m+[m[32m.content-overlay {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  background: var(--overlay-bg);[m
[32m+[m[32m  backdrop-filter: blur(8px);[m
[32m+[m[32m  z-index: 50;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  transition: opacity 0.4s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.content-overlay.active {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-scroll-rig {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 150vh;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-section {[m
[32m+[m[32m  position: sticky;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  visibility: hidden;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: scale(0.9);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1.5s ease,[m
[32m+[m[32m    transform 1.5s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[32m+[m[32m}[m
[32m+[m[32m.hero-section.show {[m
[32m+[m[32m  visibility: visible;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: none;[m
[32m+[m[32m}[m
[32m+[m[32m.global-ui {[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  visibility: hidden;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1.5s ease,[m
[32m+[m[32m    visibility 1.5s;[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m}[m
[32m+[m[32m.global-ui.show {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  visibility: visible;[m
[32m+[m[32m}[m
[32m+[m[32m.sidebar-nav {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  left: 20px;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  transform: translateY(-50%);[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 40px;[m
[32m+[m[32m  padding: 20px 15px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  transition: width 0.4s cubic-bezier(0.4, 0, 0.2, 1);[m
[32m+[m[32m  z-index: 9999;[m
[32m+[m[32m}[m
[32m+[m[32m.sidebar-nav:hover {[m
[32m+[m[32m  width: 150px;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-menu {[m
[32m+[m[32m  list-style: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 30px;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-item {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-item:not(:last-child)::after {[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  left: 4px;[m
[32m+[m[32m  bottom: -15px;[m
[32m+[m[32m  width: 20px;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background: var(--glass-line);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-link {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  transition: color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-icon {[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  width: 24px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    color 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.nav-link:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-link:hover .nav-icon {[m
[32m+[m[32m  transform: scale(1.1);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.nav-text {[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  transition: opacity 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.sidebar-nav:hover .nav-text {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transition-delay: 0.1s;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-content-group {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  transform-origin: center center;[m
[32m+[m[32m  will-change: transform, opacity;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-layout-wrapper {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 50px;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 0 100px;[m
[32m+[m[32m  margin-bottom: 60px;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-image-container {[m
[32m+[m[32m  width: clamp(200px, 25vw, 250px);[m
[32m+[m[32m  aspect-ratio: 1/1;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  border: 4px solid var(--accent-primary);[m
[32m+[m[32m  padding: 5px;[m
[32m+[m[32m  flex-shrink: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-profile-img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-text-content {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: flex-start;[m
[32m+[m[32m  text-align: left;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.hero-line {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.line-small {[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: clamp(0.9rem, 1.5vw, 1.2rem);[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.line-large {[m
[32m+[m[32m  font-family: "Playfair Display", serif;[m
[32m+[m[32m  font-size: clamp(2.5rem, 4vw, 4rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  line-height: 1;[m
[32m+[m[32m  letter-spacing: -1px;[m
[32m+[m[32m}[m
[32m+[m[32m.gradient-text {[m
[32m+[m[32m  background: linear-gradient(135deg, var(--text-light), var(--text-muted));[m
[32m+[m[32m  -webkit-background-clip: text;[m
[32m+[m[32m  background-clip: text;[m
[32m+[m[32m  -webkit-text-fill-color: transparent;[m
[32m+[m[32m}[m
[32m+[m[32m.text-primary {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.text-muted {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m}[m
[32m+[m[32m.tech-carousel-wrapper {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding-top: 15px;[m
[32m+[m[32m  z-index: 60;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-header-line {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background: var(--glass-line);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-header-text {[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  padding: 0 15px;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: -10px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  font-weight: 300;[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m}[m
[32m+[m[32m.tech-scroller {[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  padding: 75px 0 10px 0;[m
[32m+[m[32m  margin-top: -50px;[m
[32m+[m[32m  mask-image: linear-gradient([m
[32m+[m[32m    to right,[m
[32m+[m[32m    transparent,[m
[32m+[m[32m    black 10%,[m
[32m+[m[32m    black 90%,[m
[32m+[m[32m    transparent[m
[32m+[m[32m  );[m
[32m+[m[32m  -webkit-mask-image: linear-gradient([m
[32m+[m[32m    to right,[m
[32m+[m[32m    transparent,[m
[32m+[m[32m    black 10%,[m
[32m+[m[32m    black 90%,[m
[32m+[m[32m    transparent[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
[32m+[m[32m.tech-track {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 50px;[m
[32m+[m[32m  width: max-content;[m
[32m+[m[32m  animation: scrollSlide 15s linear infinite;[m
[32m+[m[32m  transition: opacity 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-track:hover .tech-item {[m
[32m+[m[32m  opacity: 0.3;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-item {[m
[32m+[m[32m  font-size: 2.5rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-track .tech-item:hover {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  filter: blur(0);[m
[32m+[m[32m}[m
[32m+[m[32m.tech-html:hover {[m
[32m+[m[32m  color: #e34f26;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-css:hover {[m
[32m+[m[32m  color: #1572b6;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-js:hover {[m
[32m+[m[32m  color: #f7df1e;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-git:hover {[m
[32m+[m[32m  color: #f05032;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-github:hover {[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-nodejs:hover {[m
[32m+[m[32m  color: #393;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-cloudflare:hover {[m
[32m+[m[32m  color: #f48120;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-vercel:hover {[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-gh-actions:hover {[m
[32m+[m[32m  color: #2088ff;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-prettier:hover {[m
[32m+[m[32m  color: #f7b93e;[m
[32m+[m[32m}[m
[32m+[m[32m.tech-item svg {[m
[32m+[m[32m  width: 1em;[m
[32m+[m[32m  height: 1em;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m}[m
[32m+[m[32m.global-tooltip {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: -100px;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  background: rgba(40, 42, 54, 0.95);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  padding: 8px 16px;[m
[32m+[m[32m  border-radius: 6px;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  z-index: 99999;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.2s ease,[m
[32m+[m[32m    transform 0.1s ease-out;[m
[32m+[m[32m  transform: translate(-50%, -100%);[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  box-shadow: 0 4px 15px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.1);[m
[32m+[m[32m}[m
[32m+[m[32m.global-tooltip.visible {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.global-tooltip-arrow {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: -6px;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translateX(-50%);[m
[32m+[m[32m  width: 0;[m
[32m+[m[32m  height: 0;[m
[32m+[m[32m  border-left: 6px solid transparent;[m
[32m+[m[32m  border-right: 6px solid transparent;[m
[32m+[m[32m  border-top: 6px solid rgba(40, 42, 54, 0.95);[m
[32m+[m[32m}[m
[32m+[m[32m@keyframes scrollSlide {[m
[32m+[m[32m  0% {[m
[32m+[m[32m    transform: translateX(0);[m
[32m+[m[32m  }[m
[32m+[m[32m  100% {[m
[32m+[m[32m    transform: translateX(calc(-50% - 25px));[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.cv-nav {[m
[32m+[m[32m  top: auto;[m
[32m+[m[32m  bottom: 30px;[m
[32m+[m[32m  left: auto;[m
[32m+[m[32m  right: 30px;[m
[32m+[m[32m  transform: none;[m
[32m+[m[32m  padding: 12px 15px;[m
[32m+[m[32m  width: 130px;[m
[32m+[m[32m}[m
[32m+[m[32m.cv-nav .nav-text {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m}[m
[32m+[m[32m.cv-nav:hover {[m
[32m+[m[32m  width: 130px;[m
[32m+[m[32m}[m
[32m+[m[32m.cv-link {[m
[32m+[m[32m  justify-content: flex-end;[m
[32m+[m[32m}[m
[32m+[m[32m.utility-toggles {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  right: 30px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  z-index: 10000;[m
[32m+[m[32m}[m
[32m+[m[32m.mute-toggle,[m
[32m+[m[32m.theme-toggle {[m
[32m+[m[32m  width: 45px;[m
[32m+[m[32m  height: 45px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.mute-toggle:hover,[m
[32m+[m[32m.theme-toggle:hover {[m
[32m+[m[32m  transform: scale(1.1);[m
[32m+[m[32m  background: var(--tooltip-bg);[m
[32m+[m[32m}[m
[32m+[m[32m.about-section {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m}[m
[32m+[m[32m.about-section-header {[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  padding: 120px 20px 80px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
[32m+[m[32m.about-subtitle {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.about-title {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.about-main-text {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2.5rem, 6vw, 4.5rem);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.about-ghost-text {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(4.5rem, 12vw, 9rem);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.clean-timeline-container {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 900px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 100px 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m}[m
[32m+[m[32m.st-node {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 250px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.st-turn {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  height: 120px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-line {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  background: var(--glass-line);[m
[32m+[m[32m  z-index: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.st-fill {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 10px var(--accent-primary);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.st-node .st-v {[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-node .st-v .st-fill {[m
[32m+[m[32m  transform-origin: top;[m
[32m+[m[32m  transform: scaleY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-top-left {[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-bottom-right {[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-top-right {[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-bottom-left {[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  height: 50%;[m
[32m+[m[32m  width: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-h {[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 2px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-ltr .st-fill {[m
[32m+[m[32m  transform-origin: left;[m
[32m+[m[32m  transform: scaleX(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-rtl .st-fill {[m
[32m+[m[32m  transform-origin: right;[m
[32m+[m[32m  transform: scaleX(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-turn .st-v .st-fill {[m
[32m+[m[32m  transform-origin: top;[m
[32m+[m[32m  transform: scaleY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-left {[m
[32m+[m[32m  justify-content: flex-start;[m
[32m+[m[32m}[m
[32m+[m[32m.st-left .st-v {[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.st-left .st-content {[m
[32m+[m[32m  margin-left: 60px;[m
[32m+[m[32m  text-align: left;[m
[32m+[m[32m}[m
[32m+[m[32m.st-left .st-dot {[m
[32m+[m[32m  left: -7px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-right {[m
[32m+[m[32m  justify-content: flex-end;[m
[32m+[m[32m}[m
[32m+[m[32m.st-right .st-v {[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.st-right .st-content {[m
[32m+[m[32m  margin-right: 60px;[m
[32m+[m[32m  text-align: right;[m
[32m+[m[32m}[m
[32m+[m[32m.st-right .st-dot {[m
[32m+[m[32m  right: -7px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-content {[m
[32m+[m[32m  opacity: 0.3;[m
[32m+[m[32m  transform: translateY(15px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.6s ease,[m
[32m+[m[32m    transform 0.6s ease;[m
[32m+[m[32m  width: 60%;[m
[32m+[m[32m}[m
[32m+[m[32m.st-content.visible {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.st-dot {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 3px solid var(--glass-line);[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  transform: translateY(-50%);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.4s ease,[m
[32m+[m[32m    background-color 0.4s ease,[m
[32m+[m[32m    transform 0.4s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.st-dot.filled {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  box-shadow: 0 0 15px var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-50%) scale(1.3);[m
[32m+[m[32m}[m
[32m+[m[32m.st-date {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1.4rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m  transition: color 0.6s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.st-content.visible .st-date {[m
[32m+[m[32m  color: var(--accent-primary) !important;[m
[32m+[m[32m}[m
[32m+[m[32m.st-topic {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  margin-bottom: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-desc {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m}[m
[32m+[m[32m.st-button-node {[m
[32m+[m[32m  height: 150px;[m
[32m+[m[32m  padding-top: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.st-final-v {[m
[32m+[m[32m  height: 50% !important;[m
[32m+[m[32m}[m
[32m+[m[32m.final-button {[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  padding: 15px 40px;[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  background: 0 0;[m
[32m+[m[32m  border: 3px solid var(--glass-line);[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: all 0.5s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.st-content.visible .final-button {[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 20px rgba(0, 140, 255, 0.4);[m
[32m+[m[32m}[m
[32m+[m[32m.st-content.visible .final-button:hover {[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: var(--bg-dark);[m
[32m+[m[32m  box-shadow: 0 0 30px var(--accent-primary);[m
[32m+[m[32m  transform: scale(1.05);[m
[32m+[m[32m}[m
[32m+[m[32m.skills-wrapper {[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  margin: 0 auto 50px auto;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.skills-category {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.skills-subheading {[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  padding-left: 10px;[m
[32m+[m[32m  border-left: 4px solid var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.skills-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.nice-to-have-grid {[m
[32m+[m[32m  grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));[m
[32m+[m[32m}[m
[32m+[m[32m.skill-card {[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  backdrop-filter: blur(10px);[m
[32m+[m[32m  border-radius: 12px;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s ease,[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    border-color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.skill-card:hover {[m
[32m+[m[32m  transform: translateY(-5px);[m
[32m+[m[32m  box-shadow: 0 10px 30px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.skill-icon {[m
[32m+[m[32m  font-size: 1.8rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  min-width: 35px;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  transition: transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.skill-card:hover .skill-icon {[m
[32m+[m[32m  transform: scale(1.1);[m
[32m+[m[32m}[m
[32m+[m[32m.skill-text {[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  line-height: 1.4;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  transition: color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.skill-card:hover .skill-text {[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.fade-in-section {[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(30px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.8s ease-out,[m
[32m+[m[32m    transform 0.8s ease-out;[m
[32m+[m[32m}[m
[32m+[m[32m.fade-in-section.visible {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.projects-section {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  padding: 100px 0;[m
[32m+[m[32m  min-height: 100vh;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m}[m
[32m+[m[32m.projects-content-group {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1200px;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: scale(0.85);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 1s ease-out,[m
[32m+[m[32m    transform 1s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[32m+[m[32m}[m
[32m+[m[32m.projects-content-group.visible {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: scale(1);[m
[32m+[m[32m}[m
[32m+[m[32m.projects-section-header {[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-top: 200px;[m
[32m+[m[32m  margin-bottom: 200px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
[32m+[m[32m.projects-subtitle {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  letter-spacing: 3px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  margin-bottom: 5px;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.projects-title {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.projects-main-text {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.projects-ghost-text {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3.5rem, 10vw, 7rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  background: var(--glass-border);[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card::after,[m
[32m+[m[32m.glow-card::before {[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  border-radius: inherit;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transition: opacity 0.5s ease;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card::before {[m
[32m+[m[32m  inset: 0;[m
[32m+[m[32m  background: radial-gradient([m
[32m+[m[32m    800px circle at var(--x, 0) var(--y, 0),[m
[32m+[m[32m    rgba(255, 255, 255, 0.25),[m
[32m+[m[32m    transparent 40%[m
[32m+[m[32m  );[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card::after {[m
[32m+[m[32m  inset: 1px;[m
[32m+[m[32m  background: radial-gradient([m
[32m+[m[32m    400px circle at var(--x, 0) var(--y, 0),[m
[32m+[m[32m    rgba(255, 255, 255, 0.08),[m
[32m+[m[32m    transparent 40%[m
[32m+[m[32m  );[m
[32m+[m[32m  z-index: 5;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-container:hover .glow-card::after,[m
[32m+[m[32m.glow-container:hover .glow-card::before {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.glow-card:hover::before {[m
[32m+[m[32m  background: radial-gradient([m
[32m+[m[32m    800px circle at var(--x, 0) var(--y, 0),[m
[32m+[m[32m    rgba(255, 255, 255, 0.5),[m
[32m+[m[32m    transparent 40%[m
[32m+[m[32m  );[m
[32m+[m[32m}[m
[32m+[m[32m.glow-content {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  inset: 1px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border-radius: calc(inherit - 1px);[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(4, 1fr);[m
[32m+[m[32m  grid-auto-rows: 200px;[m
[32m+[m[32m  column-gap: 30px;[m
[32m+[m[32m  row-gap: 40px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1100px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item {[m
[32m+[m[32m  border-radius: 16px;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    transform 0.3s cubic-bezier(0.2, 0.8, 0.2, 1),[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item .glow-content {[m
[32m+[m[32m  border-radius: 15px;[m
[32m+[m[32m  background: var(--glass-bg);[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item:hover {[m
[32m+[m[32m  transform: translateY(-5px) scale(1.02);[m
[32m+[m[32m  box-shadow: 0 15px 30px rgba(0, 0, 0, 0.3);[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-grid:hover .bento-item:not(:hover) {[m
[32m+[m[32m  filter: brightness(0.6) blur(2px);[m
[32m+[m[32m}[m
[32m+[m[32m.bento-img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  transition: transform 0.5s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item:hover .bento-img {[m
[32m+[m[32m  transform: scale(1.05);[m
[32m+[m[32m}[m
[32m+[m[32m.bento-overlay {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 20px;[m
[32m+[m[32m  background: linear-gradient([m
[32m+[m[32m    to top,[m
[32m+[m[32m    rgba(0, 0, 0, 0.9) 0,[m
[32m+[m[32m    rgba(0, 0, 0, 0) 100%[m
[32m+[m[32m  );[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transform: translateY(10px);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    opacity 0.3s ease,[m
[32m+[m[32m    transform 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item:hover .bento-overlay {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item-title {[m
[32m+[m[32m  margin: 0 0 5px 0;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-item-category {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.bento-1 {[m
[32m+[m[32m  grid-column: 2/4;[m
[32m+[m[32m  grid-row: 1/3;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-2 {[m
[32m+[m[32m  grid-column: 1;[m
[32m+[m[32m  grid-row: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-3 {[m
[32m+[m[32m  grid-column: 4;[m
[32m+[m[32m  grid-row: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-4 {[m
[32m+[m[32m  grid-column: 4;[m
[32m+[m[32m  grid-row: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-5 {[m
[32m+[m[32m  grid-column: 1;[m
[32m+[m[32m  grid-row: 2/4;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-6 {[m
[32m+[m[32m  grid-column: 2;[m
[32m+[m[32m  grid-row: 3;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-7 {[m
[32m+[m[32m  grid-column: 3;[m
[32m+[m[32m  grid-row: 3;[m
[32m+[m[32m}[m
[32m+[m[32m.bento-8 {[m
[32m+[m[32m  grid-column: 4;[m
[32m+[m[32m  grid-row: 3;[m
[32m+[m[32m}[m
[32m+[m[32m.project-modal {[m
[32m+[m[32m  position: fixed;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100vw;[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  z-index: 10000;[m
[32m+[m[32m  display: none;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  transition: opacity 0.4s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.project-modal.active {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-backdrop {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  left: 0;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  background: rgba(10, 10, 10, 0.85);[m
[32m+[m[32m  backdrop-filter: blur(15px);[m
[32m+[m[32m}[m
[32m+[m[32m.modal-content-wrapper {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 90%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  height: 70vh;[m
[32m+[m[32m  background: #111;[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  box-shadow: 0 25px 50px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  transform: scale(0.95) translateY(20px);[m
[32m+[m[32m  transition: transform 0.4s cubic-bezier(0.2, 0.8, 0.2, 1);[m
[32m+[m[32m}[m
[32m+[m[32m.project-modal.active .modal-content-wrapper {[m
[32m+[m[32m  transform: scale(1) translateY(0);[m
[32m+[m[32m}[m
[32m+[m[32m.modal-close-btn {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  right: 20px;[m
[32m+[m[32m  background: rgba(0, 0, 0, 0.5);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  width: 40px;[m
[32m+[m[32m  height: 40px;[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  font-size: 1.2rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  transition: background 0.3s;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-close-btn:hover {[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.modal-image-container {[m
[32m+[m[32m  flex: 1.5;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-image-container img {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  height: 100%;[m
[32m+[m[32m  object-fit: cover;[m
[32m+[m[32m  display: block;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-image-container::after {[m
[32m+[m[32m  content: "";[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 0;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  bottom: 0;[m
[32m+[m[32m  width: 30%;[m
[32m+[m[32m  background: linear-gradient(to right, transparent, #111);[m
[32m+[m[32m}[m
[32m+[m[32m.modal-info {[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  padding: 60px 40px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  overflow-y: auto;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-category {[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  margin-bottom: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-title {[m
[32m+[m[32m  font-size: 2.2rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  margin: 0 0 20px 0;[m
[32m+[m[32m  line-height: 1.2;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-description {[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  color: #aaa;[m
[32m+[m[32m  margin: 0 0 30px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-tech-stack {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-wrap: wrap;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  margin-bottom: 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-pill {[m
[32m+[m[32m  padding: 6px 14px;[m
[32m+[m[32m  background: rgba(255, 255, 255, 0.05);[m
[32m+[m[32m  border: 1px solid rgba(255, 255, 255, 0.1);[m
[32m+[m[32m  border-radius: 20px;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  color: #ddd;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-link-btn {[m
[32m+[m[32m  display: inline-flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 10px;[m
[32m+[m[32m  background: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  padding: 12px 24px;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  width: fit-content;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background 0.3s,[m
[32m+[m[32m    transform 0.2s,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.modal-link-btn:hover {[m
[32m+[m[32m  filter: brightness(0.85);[m
[32m+[m[32m  transform: translateX(5px);[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .quote-container {[m
[32m+[m[32m    padding: 0 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .quote-text {[m
[32m+[m[32m    font-size: clamp(1.5rem, 6vw, 2.5rem);[m
[32m+[m[32m  }[m
[32m+[m[32m  .sidebar-nav:not(.cv-nav) {[m
[32m+[m[32m    top: 15px;[m
[32m+[m[32m    left: 50%;[m
[32m+[m[32m    transform: translateX(-50%);[m
[32m+[m[32m    width: auto !important;[m
[32m+[m[32m    padding: 10px 20px;[m
[32m+[m[32m    border-radius: 30px;[m
[32m+[m[32m    z-index: 10001;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-menu {[m
[32m+[m[32m    flex-direction: row;[m
[32m+[m[32m    gap: 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-text {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .nav-item:not(:last-child)::after {[m
[32m+[m[32m    left: 20px;[m
[32m+[m[32m    bottom: 50%;[m
[32m+[m[32m    transform: translateY(50%);[m
[32m+[m[32m    width: 1px;[m
[32m+[m[32m    height: 15px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .utility-toggles {[m
[32m+[m[32m    top: 15px;[m
[32m+[m[32m    left: 20px;[m
[32m+[m[32m    right: 20px;[m
[32m+[m[32m    width: auto;[m
[32m+[m[32m    justify-content: space-between;[m
[32m+[m[32m  }[m
[32m+[m[32m  .mute-toggle,[m
[32m+[m[32m  .theme-toggle {[m
[32m+[m[32m    width: 40px;[m
[32m+[m[32m    height: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav {[m
[32m+[m[32m    top: auto;[m
[32m+[m[32m    bottom: 20px;[m
[32m+[m[32m    left: auto;[m
[32m+[m[32m    transform: none;[m
[32m+[m[32m    right: 20px;[m
[32m+[m[32m    padding: 12px;[m
[32m+[m[32m    width: auto !important;[m
[32m+[m[32m    border-radius: 50%;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav .nav-text {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav .nav-icon {[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m  }[m
[32m+[m[32m  .cv-nav:hover {[m
[32m+[m[32m    width: auto;[m
[32m+[m[32m  }[m
[32m+[m[32m  .hero-layout-wrapper {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    padding: 0 20px;[m
[32m+[m[32m    gap: 15px;[m
[32m+[m[32m    margin-top: 50px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .hero-text-content {[m
[32m+[m[32m    align-items: center;[m
[32m+[m[32m    text-align: center;[m
[32m+[m[32m    gap: 5px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .line-large {[m
[32m+[m[32m    font-size: clamp(1.6rem, 6.5vw, 2.5rem);[m
[32m+[m[32m    letter-spacing: -0.5px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .hero-image-container {[m
[32m+[m[32m    width: 140px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .tech-carousel-wrapper {[m
[32m+[m[32m    margin-top: 10px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .clean-timeline-container {[m
[32m+[m[32m    padding: 40px 20px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-node {[m
[32m+[m[32m    height: auto;[m
[32m+[m[32m    padding-bottom: 50px;[m
[32m+[m[32m    align-items: flex-start;[m
[32m+[m[32m    justify-content: flex-start;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-turn {[m
[32m+[m[32m    display: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-v {[m
[32m+[m[32m    left: 0 !important;[m
[32m+[m[32m    right: auto !important;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-dot {[m
[32m+[m[32m    left: -7px !important;[m
[32m+[m[32m    right: auto !important;[m
[32m+[m[32m  }[m
[32m+[m[32m  .st-content {[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    margin-left: 40px !important;[m
[32m+[m[32m    margin-right: 0 !important;[m
[32m+[m[32m    text-align: left !important;[m
[32m+[m[32m  }[m
[32m+[m[32m  .bento-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    grid-auto-rows: 250px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .bento-1,[m
[32m+[m[32m  .bento-2,[m
[32m+[m[32m  .bento-3,[m
[32m+[m[32m  .bento-4,[m
[32m+[m[32m  .bento-5,[m
[32m+[m[32m  .bento-6,[m
[32m+[m[32m  .bento-7,[m
[32m+[m[32m  .bento-8 {[m
[32m+[m[32m    grid-column: 1/-1;[m
[32m+[m[32m    grid-row: auto;[m
[32m+[m[32m  }[m
[32m+[m[32m  .projects-content-group {[m
[32m+[m[32m    padding-top: 80px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-content-wrapper {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    height: 85vh;[m
[32m+[m[32m    overflow-y: auto;[m
[32m+[m[32m    display: block;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-image-container {[m
[32m+[m[32m    height: 250px;[m
[32m+[m[32m    flex: none;[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-image-container::after {[m
[32m+[m[32m    background: linear-gradient(to bottom, transparent, #111);[m
[32m+[m[32m    width: 100%;[m
[32m+[m[32m    height: 40%;[m
[32m+[m[32m    top: auto;[m
[32m+[m[32m    bottom: 0;[m
[32m+[m[32m    left: 0;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-info {[m
[32m+[m[32m    padding: 30px 20px;[m
[32m+[m[32m    flex: none;[m
[32m+[m[32m  }[m
[32m+[m[32m  .modal-title {[m
[32m+[m[32m    font-size: 1.8rem;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.contact-section {[m
[32m+[m[32m  padding: 100px 20px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-section-header {[m
[32m+[m[32m  text-align: center;[m
[32m+[m[32m  margin-bottom: 40px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-subtitle {[m
[32m+[m[32m  display: block;[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 10px;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-title {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-main-text {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(2rem, 5vw, 3.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-ghost-text {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 30%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3.5rem, 10vw, 7rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-content-body {[m
[32m+[m[32m  max-width: 800px;[m
[32m+[m[32m  margin: 0 auto 60px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-description {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  line-height: 1.7;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin-bottom: 40px;[m
[32m+[m[32m  max-width: 600px;[m
[32m+[m[32m}[m
[32m+[m[32m.lets-talk-btn {[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  padding: 16px 40px;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background-color 0.3s ease,[m
[32m+[m[32m    transform 0.2s ease,[m
[32m+[m[32m    box-shadow 0.3s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .lets-talk-btn {[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.lets-talk-btn:hover {[m
[32m+[m[32m  filter: brightness(0.85);[m
[32m+[m[32m  transform: translateY(-2px);[m
[32m+[m[32m  box-shadow: 0 10px 20px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m}[m
[32m+[m[32m.lets-talk-btn:active {[m
[32m+[m[32m  transform: translateY(0);[m
[32m+[m[32m  box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);[m
[32m+[m[32m}[m
[32m+[m[32m.contact-info-grid {[m
[32m+[m[32m  display: grid;[m
[32m+[m[32m  grid-template-columns: repeat(3, 1fr);[m
[32m+[m[32m  gap: 40px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 900px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-info-item {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-info-label {[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-info-value {[m
[32m+[m[32m  font-size: 1.1rem;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  line-height: 1.6;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-info-value a {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  transition: color 0.3s;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-info-value a:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.contact-modal-wrapper {[m
[32m+[m[32m  max-width: 600px;[m
[32m+[m[32m  background: var(--bg-dark);[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  box-shadow: 0 20px 50px rgba(0, 0, 0, 0.5);[m
[32m+[m[32m}[m
[32m+[m[32m.contact-close-btn {[m
[32m+[m[32m  top: 20px;[m
[32m+[m[32m  right: 20px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  background: 0 0;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  font-size: 1.5rem;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-close-btn:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m}[m
[32m+[m[32m.contact-modal-inner {[m
[32m+[m[32m  padding: 60px 50px;[m
[32m+[m[32m  text-align: left;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-modal-subtitle {[m
[32m+[m[32m  font-size: 0.8rem;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  margin: 0 0 10px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-modal-title {[m
[32m+[m[32m  font-size: 2.5rem;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  margin: 0 0 40px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-form {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 25px;[m
[32m+[m[32m}[m
[32m+[m[32m.form-row {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m}[m
[32m+[m[32m.form-row .form-group {[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.form-group {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  flex-direction: column;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m}[m
[32m+[m[32m.form-group label {[m
[32m+[m[32m  font-size: 0.95rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m}[m
[32m+[m[32m.form-group input,[m
[32m+[m[32m.form-group textarea {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 15px;[m
[32m+[m[32m  border: 1px solid var(--glass-border);[m
[32m+[m[32m  border-radius: 4px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  background-color: var(--skeleton-highlight);[m
[32m+[m[32m  transition:[m
[32m+[m[32m    border-color 0.3s ease,[m
[32m+[m[32m    box-shadow 0.3s ease;[m
[32m+[m[32m  box-sizing: border-box;[m
[32m+[m[32m}[m
[32m+[m[32m.form-group input:focus,[m
[32m+[m[32m.form-group textarea:focus {[m
[32m+[m[32m  outline: 0;[m
[32m+[m[32m  border-color: var(--accent-primary);[m
[32m+[m[32m  box-shadow: 0 0 0 3px rgba(0, 140, 255, 0.2);[m
[32m+[m[32m}[m
[32m+[m[32m.contact-submit-btn {[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 1rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  padding: 18px;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  border-radius: 50px;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  transition:[m
[32m+[m[32m    background-color 0.3s ease,[m
[32m+[m[32m    transform 0.2s ease,[m
[32m+[m[32m    filter 0.3s ease;[m
[32m+[m[32m  margin-top: 10px;[m
[32m+[m[32m}[m
[32m+[m[32m.contact-submit-btn:hover {[m
[32m+[m[32m  filter: brightness(0.85);[m
[32m+[m[32m  transform: translateY(-2px);[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .contact-info-grid {[m
[32m+[m[32m    grid-template-columns: 1fr;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .form-row {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    gap: 25px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .contact-modal-inner {[m
[32m+[m[32m    padding: 40px 25px;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m.socials-section {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  padding: 60px 20px;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.socials-container {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 20px;[m
[32m+[m[32m}[m
[32m+[m[32m.socials-header {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.socials-title {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m}[m
[32m+[m[32m.socials-main-text {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  font-size: clamp(1.8rem, 4vw, 2.5rem);[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 2px;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  z-index: 2;[m
[32m+[m[32m}[m
[32m+[m[32m.socials-ghost-text {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  font-size: clamp(3rem, 8vw, 5rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  opacity: var(--ghost-opacity);[m
[32m+[m[32m  z-index: 1;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  user-select: none;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.socials-animated-line {[m
[32m+[m[32m  flex-grow: 1;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background-color: var(--accent-primary);[m
[32m+[m[32m  transform: scaleX(0);[m
[32m+[m[32m  transform-origin: center;[m
[32m+[m[32m  transition: transform 1.5s cubic-bezier(0.22, 1, 0.36, 1);[m
[32m+[m[32m}[m
[32m+[m[32m.socials-animated-line.animate {[m
[32m+[m[32m  transform: scaleX(1);[m
[32m+[m[32m}[m
[32m+[m[32m.socials-buttons {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m}[m
[32m+[m[32m.social-btn {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  padding: 15px;[m
[32m+[m[32m  border-radius: 8px;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  box-shadow:[m
[32m+[m[32m    0 20px 25px -5px rgba(0, 0, 0, 0.1),[m
[32m+[m[32m    0 10px 10px -5px rgba(0, 0, 0, 0.04);[m
[32m+[m[32m  transition: all 0.5s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.social-icon {[m
[32m+[m[32m  width: 32px;[m
[32m+[m[32m  height: auto;[m
[32m+[m[32m}[m
[32m+[m[32m.github-btn {[m
[32m+[m[32m  background-color: #24292e;[m
[32m+[m[32m}[m
[32m+[m[32m.linkedin-btn {[m
[32m+[m[32m  background-color: #0077b5;[m
[32m+[m[32m}[m
[32m+[m[32m.social-btn:hover {[m
[32m+[m[32m  transform: translateY(-12px);[m
[32m+[m[32m  border-radius: 50%;[m
[32m+[m[32m  filter: brightness(1.2);[m
[32m+[m[32m}[m
[32m+[m[32m.social-tooltip {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  top: 50%;[m
[32m+[m[32m  left: 50%;[m
[32m+[m[32m  transform: translate(-50%, -50%);[m
[32m+[m[32m  opacity: 0;[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  font-size: 0.875rem;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m  transition: all 0.7s ease;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m}[m
[32m+[m[32m.social-btn:hover .social-tooltip {[m
[32m+[m[32m  opacity: 1;[m
[32m+[m[32m  transform: translate(-50%, calc(-50% - 50px));[m
[32m+[m[32m}[m
[32m+[m[32m.site-footer {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  background-color: var(--bg-dark);[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m  padding-bottom: 60px;[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  z-index: 10;[m
[32m+[m[32m}[m
[32m+[m[32m.site-footer .socials-section {[m
[32m+[m[32m  background-color: transparent;[m
[32m+[m[32m  padding: 80px 20px 40px;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-separator {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  height: 1px;[m
[32m+[m[32m  background-color: var(--glass-border);[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-content {[m
[32m+[m[32m  width: 100%;[m
[32m+[m[32m  max-width: 1000px;[m
[32m+[m[32m  margin: 0 auto;[m
[32m+[m[32m  padding: 60px 20px 0;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-row {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  justify-content: space-between;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 30px;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-top {[m
[32m+[m[32m  margin-bottom: 60px;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-bottom {[m
[32m+[m[32m  padding-top: 40px;[m
[32m+[m[32m  border-top: 1px solid var(--glass-border);[m
[32m+[m[32m}[m
[32m+[m[32m.footer-slogan {[m
[32m+[m[32m  flex: 1;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: baseline;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m}[m
[32m+[m[32m.sudo-text {[m
[32m+[m[32m  font-family: inherit;[m
[32m+[m[32m  font-size: clamp(2.2rem, 5.5vw, 3.2rem);[m
[32m+[m[32m  font-weight: 800;[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  line-height: 1;[m
[32m+[m[32m}[m
[32m+[m[32m.sudo-expansion {[m
[32m+[m[32m  font-size: clamp(0.9rem, 2.5vw, 1.2rem);[m
[32m+[m[32m  color: var(--text-light);[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m  font-weight: 700;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  white-space: nowrap;[m
[32m+[m[32m  opacity: 0.9;[m
[32m+[m[32m}[m
[32m+[m[32m.github-star-btn {[m
[32m+[m[32m  position: relative;[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  justify-content: center;[m
[32m+[m[32m  gap: 15px;[m
[32m+[m[32m  height: 44px;[m
[32m+[m[32m  padding: 0 20px;[m
[32m+[m[32m  background-color: #000;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m  border: none;[m
[32m+[m[32m  border-radius: 6px;[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  cursor: pointer;[m
[32m+[m[32m  overflow: hidden;[m
[32m+[m[32m  box-shadow:[m
[32m+[m[32m    0 4px 6px -1px rgba(0, 0, 0, 0.1),[m
[32m+[m[32m    0 2px 4px -1px rgba(0, 0, 0, 0.06);[m
[32m+[m[32m  transition: all 0.3s cubic-bezier(0.4, 0, 0.2, 1);[m
[32m+[m[32m}[m
[32m+[m[32m[data-theme="light"] .github-star-btn {[m
[32m+[m[32m  background-color: #111;[m
[32m+[m[32m}[m
[32m+[m[32m.github-star-btn:hover {[m
[32m+[m[32m  outline: 2px solid #000;[m
[32m+[m[32m  outline-offset: 2px;[m
[32m+[m[32m  filter: brightness(1.2);[m
[32m+[m[32m  transform: translateY(-2px);[m
[32m+[m[32m}[m
[32m+[m[32m.btn-shine {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  right: 0;[m
[32m+[m[32m  margin-top: -48px;[m
[32m+[m[32m  height: 128px;[m
[32m+[m[32m  width: 32px;[m
[32m+[m[32m  background-color: rgba(255, 255, 255, 0.15);[m
[32m+[m[32m  transform: translateX(48px) rotate(12deg);[m
[32m+[m[32m  transition: transform 1s ease-out;[m
[32m+[m[32m  pointer-events: none;[m
[32m+[m[32m}[m
[32m+[m[32m.github-star-btn:hover .btn-shine {[m
[32m+[m[32m  transform: translateX(-180px) rotate(12deg);[m
[32m+[m[32m}[m
[32m+[m[32m.btn-content {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 8px;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.github-icon {[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  fill: currentColor;[m
[32m+[m[32m}[m
[32m+[m[32m.btn-stats {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  align-items: center;[m
[32m+[m[32m  gap: 6px;[m
[32m+[m[32m  border-left: 1px solid rgba(255, 255, 255, 0.2);[m
[32m+[m[32m  padding-left: 12px;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m[32m.star-icon {[m
[32m+[m[32m  width: 16px;[m
[32m+[m[32m  height: 16px;[m
[32m+[m[32m  color: #9ca3af;[m
[32m+[m[32m  transition: color 0.3s ease;[m
[32m+[m[32m}[m
[32m+[m[32m.github-star-btn:hover .star-icon {[m
[32m+[m[32m  color: #fde047;[m
[32m+[m[32m}[m
[32m+[m[32m.stat-count {[m
[32m+[m[32m  font-family: Inter, sans-serif;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  letter-spacing: 0.5px;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-copyright {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  font-size: 0.9rem;[m
[32m+[m[32m  font-weight: 400;[m
[32m+[m[32m}[m
[32m+[m[32m.stylized-name {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-nav {[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  gap: 25px;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-nav-link {[m
[32m+[m[32m  color: var(--text-muted);[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  font-size: 0.85rem;[m
[32m+[m[32m  font-weight: 500;[m
[32m+[m[32m  transition: all 0.3s ease;[m
[32m+[m[32m  text-transform: uppercase;[m
[32m+[m[32m  letter-spacing: 1px;[m
[32m+[m[32m}[m
[32m+[m[32m.footer-nav-link:hover {[m
[32m+[m[32m  color: var(--accent-primary);[m
[32m+[m[32m  transform: translateY(-2px);[m
[32m+[m[32m}[m
[32m+[m[32m@media (max-width: 768px) {[m
[32m+[m[32m  .site-footer .socials-section {[m
[32m+[m[32m    padding: 60px 20px 30px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .footer-row {[m
[32m+[m[32m    flex-direction: column;[m
[32m+[m[32m    text-align: center;[m
[32m+[m[32m    gap: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .footer-top {[m
[32m+[m[32m    margin-bottom: 40px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .footer-nav {[m
[32m+[m[32m    flex-wrap: wrap;[m
[32m+[m[32m    justify-content: center;[m
[32m+[m[32m    gap: 15px 25px;[m
[32m+[m[32m  }[m
[32m+[m[32m  .sudo-text {[m
[32m+[m[32m    font-size: 2.2rem;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/index.html b/index.html[m
[1mindex f41e496..faa9ea8 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -68,11 +68,11 @@[m
     }[m
     </script>[m
     <!-- ===================================================== -->[m
[31m-    <link rel="stylesheet" href="css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/style.min.css">[m
     <link rel="stylesheet" href="css/all.min.css">[m
[31m-    <link rel="stylesheet" href="css/blog.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/blog.min.css">[m
     <!-- Universal Theme System (non-deferred — applies theme before first paint) -->[m
[31m-    <script src="js/theme.js"></script>[m
[32m+[m[32m    <script src="js/theme.min.js"></script>[m
     <!-- ===================== EmailJS ===================== -->[m
     <script type="text/javascript" src="https://cdn.jsdelivr.net/npm/@emailjs/browser@4/dist/email.min.js"></script>[m
     <script type="text/javascript">[m
[36m@@ -216,7 +216,7 @@[m
                         <div class="tech-item tech-js" data-tooltip="JavaScript"><i class="fa-brands fa-js"></i></div>[m
                         <div class="tech-item tech-git" data-tooltip="Git"><i class="fa-brands fa-git-alt"></i></div>[m
                         <div class="tech-item tech-github" data-tooltip="GitHub"><i class="fa-brands fa-github"></i></div>[m
[31m-                        <div class="tech-item tech-nodejs" data-tooltip="Node.js"><i class="fa-brands fa-node-js"></i></div>[m
[32m+[m[32m                        <div class="tech-item tech-nodejs" data-tooltip="Node.min.js"><i class="fa-brands fa-node-js"></i></div>[m
                         <div class="tech-item tech-cloudflare" data-tooltip="Cloudflare">[m
                             <svg viewBox="0 0 128 128" fill="currentColor" width="1em" height="1em" xmlns="http://www.w3.org/2000/svg"><path d="M116.3 64.8c-.3-.9-1-1.5-1.9-1.7l-1.8-.3c.7-1.8 1.1-3.7 1.1-5.6 0-8.5-7-15.3-15.7-15.3-1.4 0-2.7.2-4 .5C92.2 37 87 33.5 81 33.5c-8.4 0-15.3 6.4-15.9 14.6-.8-.1-1.5-.2-2.3-.2-7.3 0-13.2 5.8-13.2 13s5.9 13 13.2 13h51.6c1 0 1.9-.6 2.2-1.6l-.3.5z"/><path d="M85.3 72.7c.5-.5.7-1.2.5-1.9-.2-.7-.8-1.2-1.5-1.3l-2-.3c1.1-2.5 1.7-5.2 1.7-7.9 0-11.2-9.2-20.3-20.7-20.3-9.9 0-18.3 7-20.2 16.3-1.3-.5-2.7-.8-4.1-.8-6.5 0-11.8 5.2-11.8 11.6S32.5 80 39 80h44c.8 0 1.5-.4 2-.9l.3-.4z"/></svg>[m
                         </div>[m
[36m@@ -236,7 +236,7 @@[m
                         <div class="tech-item tech-js" data-tooltip="JavaScript"><i class="fa-brands fa-js"></i></div>[m
                         <div class="tech-item tech-git" data-tooltip="Git"><i class="fa-brands fa-git-alt"></i></div>[m
                         <div class="tech-item tech-github" data-tooltip="GitHub"><i class="fa-brands fa-github"></i></div>[m
[31m-                        <div class="tech-item tech-nodejs" data-tooltip="Node.js"><i class="fa-brands fa-node-js"></i></div>[m
[32m+[m[32m                        <div class="tech-item tech-nodejs" data-tooltip="Node.min.js"><i class="fa-brands fa-node-js"></i></div>[m
                         <div class="tech-item tech-cloudflare" data-tooltip="Cloudflare">[m
                             <svg viewBox="0 0 128 128" fill="currentColor" width="1em" height="1em" xmlns="http://www.w3.org/2000/svg"><path d="M116.3 64.8c-.3-.9-1-1.5-1.9-1.7l-1.8-.3c.7-1.8 1.1-3.7 1.1-5.6 0-8.5-7-15.3-15.7-15.3-1.4 0-2.7.2-4 .5C92.2 37 87 33.5 81 33.5c-8.4 0-15.3 6.4-15.9 14.6-.8-.1-1.5-.2-2.3-.2-7.3 0-13.2 5.8-13.2 13s5.9 13 13.2 13h51.6c1 0 1.9-.6 2.2-1.6l-.3.5z"/><path d="M85.3 72.7c.5-.5.7-1.2.5-1.9-.2-.7-.8-1.2-1.5-1.3l-2-.3c1.1-2.5 1.7-5.2 1.7-7.9 0-11.2-9.2-20.3-20.7-20.3-9.9 0-18.3 7-20.2 16.3-1.3-.5-2.7-.8-4.1-.8-6.5 0-11.8 5.2-11.8 11.6S32.5 80 39 80h44c.8 0 1.5-.4 2-.9l.3-.4z"/></svg>[m
                         </div>[m
[36m@@ -712,7 +712,7 @@[m
             }[m
         }[m
     </script>[m
[31m-    <script src="js/index.js" type="module"></script>[m
[32m+[m[32m    <script src="js/index.min.js" type="module"></script>[m
 [m
     <!-- Favicon + Theme Toggle wired via universal ThemeSystem (theme.js loaded in <head>) -->[m
     <script>[m
[1mdiff --git a/js/about.js b/js/about.js[m
[1mindex 34d233c..7487f42 100644[m
[1m--- a/js/about.js[m
[1m+++ b/js/about.js[m
[36m@@ -1,124 +1 @@[m
[31m-/**[m
[31m- * ============================================================[m
[31m- *  Portfolio Script — about.js[m
[31m- *  Copyright (c) 2024–2026 Mosa Moleleki ("Mr-Shoez" / "S.U.D.O")[m
[31m- *  All Rights Reserved. Proprietary & Confidential.[m
[31m- *  See LICENSE in the project root for full terms.[m
[31m- *  Contact: Molelekishoez@gmail.com[m
[31m- * ============================================================[m
[31m- */[m
[31m-[m
[31m-// ─── DevTools Copyright Notice ───────────────────────────────────────────────[m
[31m-console.log([m
[31m-  '%c⚠ STOP!',[m
[31m-  'color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;'[m
[31m-);[m
[31m-console.log([m
[31m-  '%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-Shoez/personalPortfolioProject/blob/main/LICENSE',[m
[31m-  'color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;'[m
[31m-);[m
[31m-// ─────────────────────────────────────────────────────────────────────────────[m
[31m-[m
[31m-document.addEventListener('DOMContentLoaded', function () {[m
[31m-[m
[31m-    // =========================================[m
[31m-    // Theme System — delegate to theme.js[m
[31m-    // =========================================[m
[31m-    if (window.ThemeSystem) {[m
[31m-        window.ThemeSystem.init();[m
[31m-[m
[31m-        // Sync profile photo whenever theme changes[m
[31m-        function syncPhoto(theme) {[m
[31m-            var heroPhoto = document.querySelector('.about-hero-photo');[m
[31m-            if (heroPhoto) {[m
[31m-                heroPhoto.src = theme === 'light'[m
[31m-                    ? 'my pictures/light mode.webp'[m
[31m-                    : 'my pictures/dark mode.webp';[m
[31m-            }[m
[31m-        }[m
[31m-        // Apply immediately on load[m
[31m-        syncPhoto(window.ThemeSystem.get());[m
[31m-        // Re-apply on every toggle[m
[31m-        document.addEventListener('themechange', function (e) {[m
[31m-            syncPhoto(e.detail.theme);[m
[31m-        });[m
[31m-    }[m
[31m-[m
[31m-    // =========================================[m
[31m-    // Scroll Animations — Fade Up[m
[31m-    // =========================================[m
[31m-    var fadeEls = document.querySelectorAll('.ap-fade');[m
[31m-    if (fadeEls.length > 0) {[m
[31m-        var fadeObserver = new IntersectionObserver(function (entries) {[m
[31m-            entries.forEach(function (entry) {[m
[31m-                if (entry.isIntersecting) {[m
[31m-                    entry.target.classList.add('visible');[m
[31m-                    fadeObserver.unobserve(entry.target);[m
[31m-                }[m
[31m-            });[m
[31m-        }, { threshold: 0.1 });[m
[31m-[m
[31m-        fadeEls.forEach(function (el) { fadeObserver.observe(el); });[m
[31m-    }[m
[31m-[m
[31m-    // =========================================[m
[31m-    // Back To Top Button[m
[31m-    // =========================================[m
[31m-    var backToTopBtn = document.getElementById('backToTop');[m
[31m-    if (backToTopBtn) {[m
[31m-        window.addEventListener('scroll', function () {[m
[31m-            if (window.scrollY > 400) {[m
[31m-                backToTopBtn.classList.add('visible');[m
[31m-            } else {[m
[31m-                backToTopBtn.classList.remove('visible');[m
[31m-            }[m
[31m-        });[m
[31m-[m
[31m-        backToTopBtn.addEventListener('click', function () {[m
[31m-            window.scrollTo({ top: 0, behavior: 'smooth' });[m
[31m-        });[m
[31m-    }[m
[31m-[m
[31m-    // =========================================[m
[31m-    // Animate edu dots when card scrolls in[m
[31m-    // =========================================[m
[31m-    var eduEntries = document.querySelectorAll('.about-edu-entry');[m
[31m-    if (eduEntries.length > 0) {[m
[31m-        var eduObserver = new IntersectionObserver(function (entries) {[m
[31m-            entries.forEach(function (entry, i) {[m
[31m-                if (entry.isIntersecting) {[m
[31m-                    setTimeout(function () {[m
[31m-                        var dot = entry.target.querySelector('.about-edu-dot');[m
[31m-                        if (dot) dot.classList.add('filled');[m
[31m-                    }, i * 150);[m
[31m-                    eduObserver.unobserve(entry.target);[m
[31m-                }[m
[31m-            });[m
[31m-        }, { threshold: 0.5 });[m
[31m-[m
[31m-        eduEntries.forEach(function (el) { eduObserver.observe(el); });[m
[31m-    }[m
[31m-[m
[31m-    // =========================================[m
[31m-    // Stagger skill cards[m
[31m-    // =========================================[m
[31m-    var skillCards = document.querySelectorAll('.skill-card');[m
[31m-    if (skillCards.length > 0) {[m
[31m-        var cardObserver = new IntersectionObserver(function (entries) {[m
[31m-            entries.forEach(function (entry) {[m
[31m-                if (entry.isIntersecting) {[m
[31m-                    entry.target.style.transitionDelay = entry.target.dataset.delay || '0s';[m
[31m-                    entry.target.classList.add('visible');[m
[31m-                    cardObserver.unobserve(entry.target);[m
[31m-                }[m
[31m-            });[m
[31m-        }, { threshold: 0.15 });[m
[31m-[m
[31m-        skillCards.forEach(function (card, i) {[m
[31m-            card.dataset.delay = (i * 0.06) + 's';[m
[31m-            card.classList.add('ap-fade');[m
[31m-            cardObserver.observe(card);[m
[31m-        });[m
[31m-    }[m
[31m-[m
[31m-}); // end DOMContentLoaded[m
[32m+[m[32mconsole.log("%c⚠ STOP!","color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;"),console.log("%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-Shoez/personalPortfolioProject/blob/main/LICENSE","color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;"),document.addEventListener("DOMContentLoaded",function(){if(window.ThemeSystem){function e(e){var t=document.querySelector(".about-hero-photo");t&&(t.src="light"===e?"my pictures/light mode.webp":"my pictures/dark mode.webp")}window.ThemeSystem.init(),e(window.ThemeSystem.get()),document.addEventListener("themechange",function(t){e(t.detail.theme)})}var t=document.querySelectorAll(".ap-fade");if(t.length>0){var o=new IntersectionObserver(function(e){e.forEach(function(e){e.isIntersecting&&(e.target.classList.add("visible"),o.unobserve(e.target))})},{threshold:.1});t.forEach(function(e){o.observe(e)})}var n=document.getElementById("backToTop");n&&(window.addEventListener("scroll",function(){window.scrollY>400?n.classList.add("visible"):n.classList.remove("visible")}),n.addEventListener("click",function(){window.scrollTo({top:0,behavior:"smooth"})}));var r=document.querySelectorAll(".about-edu-entry");if(r.length>0){var i=new IntersectionObserver(function(e){e.forEach(function(e,t){e.isIntersecting&&(setTimeout(function(){var t=e.target.querySelector(".about-edu-dot");t&&t.classList.add("filled")},150*t),i.unobserve(e.target))})},{threshold:.5});r.forEach(function(e){i.observe(e)})}var s=document.querySelectorAll(".skill-card");if(s.length>0){var a=new IntersectionObserver(function(e){e.forEach(function(e){e.isIntersecting&&(e.target.style.transitionDelay=e.target.dataset.delay||"0s",e.target.classList.add("visible"),a.unobserve(e.target))})},{threshold:.15});s.forEach(function(e,t){e.dataset.delay=.06*t+"s",e.classList.add("ap-fade"),a.observe(e)})}});[m
\ No newline at end of file[m
[1mdiff --git a/js/about.min.js b/js/about.min.js[m
[1mnew file mode 100644[m
[1mindex 0000000..7487f42[m
[1m--- /dev/null[m
[1m+++ b/js/about.min.js[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mconsole.log("%c⚠ STOP!","color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;"),console.log("%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-Shoez/personalPortfolioProject/blob/main/LICENSE","color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;"),document.addEventListener("DOMContentLoaded",function(){if(window.ThemeSystem){function e(e){var t=document.querySelector(".about-hero-photo");t&&(t.src="light"===e?"my pictures/light mode.webp":"my pictures/dark mode.webp")}window.ThemeSystem.init(),e(window.ThemeSystem.get()),document.addEventListener("themechange",function(t){e(t.detail.theme)})}var t=document.querySelectorAll(".ap-fade");if(t.length>0){var o=new IntersectionObserver(function(e){e.forEach(function(e){e.isIntersecting&&(e.target.classList.add("visible"),o.unobserve(e.target))})},{threshold:.1});t.forEach(function(e){o.observe(e)})}var n=document.getElementById("backToTop");n&&(window.addEventListener("scroll",function(){window.scrollY>400?n.classList.add("visible"):n.classList.remove("visible")}),n.addEventListener("click",function(){window.scrollTo({top:0,behavior:"smooth"})}));var r=document.querySelectorAll(".about-edu-entry");if(r.length>0){var i=new IntersectionObserver(function(e){e.forEach(function(e,t){e.isIntersecting&&(setTimeout(function(){var t=e.target.querySelector(".about-edu-dot");t&&t.classList.add("filled")},150*t),i.unobserve(e.target))})},{threshold:.5});r.forEach(function(e){i.observe(e)})}var s=document.querySelectorAll(".skill-card");if(s.length>0){var a=new IntersectionObserver(function(e){e.forEach(function(e){e.isIntersecting&&(e.target.style.transitionDelay=e.target.dataset.delay||"0s",e.target.classList.add("visible"),a.unobserve(e.target))})},{threshold:.15});s.forEach(function(e,t){e.dataset.delay=.06*t+"s",e.classList.add("ap-fade"),a.observe(e)})}});[m
\ No newline at end of file[m
[1mdiff --git a/js/index.js b/js/index.js[m
[1mindex 3c1a133..e4e1992 100644[m
[1m--- a/js/index.js[m
[1m+++ b/js/index.js[m
[36m@@ -1,1123 +1 @@[m
[31m-/**[m
[31m- * ============================================================[m
[31m- *  Portfolio Script — index.js[m
[31m- *  Copyright (c) 2024–2026 Mosa Moleleki ("Mr-S-U-D-O" / "S.U.D.O")[m
[31m- *  All Rights Reserved. Proprietary & Confidential.[m
[31m- *  Unauthorised copying, modification, or distribution is prohibited.[m
[31m- *  See LICENSE in the project root for full terms.[m
[31m- *  Contact: Molelekishoez@gmail.com[m
[31m- * ============================================================[m
[31m- */[m
[31m-[m
[31m-// ─── DevTools Copyright Notice ──────────────────────────────────────────────[m
[31m-console.log([m
[31m-  '%c⚠ STOP!',[m
[31m-  'color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;'[m
[31m-);[m
[31m-console.log([m
[31m-  '%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-S-U-D-O/personalPortfolioProject/blob/main/LICENSE',[m
[31m-  'color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;'[m
[31m-);[m
[31m-// ────────────────────────────────────────────────────────────────────────────[m
[31m-[m
[31m-import * as THREE from "three";[m
[31m-import { DRACOLoader } from "three-draco-loader";[m
[31m-import { GLTFLoader } from "three-gltf-loader";[m
[31m-import { CSS3DRenderer, CSS3DObject } from "three-css-3d-renderer";[m
[31m-[m
[31m-const splashScreen = document.getElementById("splashScreen");[m
[31m-const skeletonLoader = document.getElementById("skeletonLoader");[m
[31m-const quoteContainer = document.getElementById("quoteContainer");[m
[31m-const heroSection = document.getElementById("heroSection");[m
[31m-const laptopContainer = document.getElementById("laptop");[m
[31m-const laptopScreen = document.getElementById("laptop-screen");[m
[31m-const laptopScreenContainer = document.getElementById("screen-content");[m
[31m-[m
[31m-// =========================================[m
[31m-// Constants & Config[m
[31m-// =========================================[m
[31m-const DRACO_DECODER_URL = "https://www.gstatic.com/draco/versioned/decoders/1.5.6/";[m
[31m-const LAPTOP_SCENE_CAMERA_INIT_Z_POSITION = window.innerWidth < 768 ? 1100 : 750;[m
[31m-[m
[31m-const DEVICE_CONFIG = {[m
[31m-    laptop: {[m
[31m-        file: "./models/laptop.glb",[m
[31m-        init: {[m
[31m-            position: { x: 0, y: -400, z: 0 }, [m
[31m-            rotation: { x: Math.PI / 20, y: 0, z: 0 },[m
[31m-            scale: { x: 50, y: 50, z: 50 },[m
[31m-            targetY: -70[m
[31m-        },[m
[31m-        lidClosedRotationX: Math.PI / 2,[m
[31m-        lidOpenRotationX: 0,[m
[31m-        hasLid: true,[m
[31m-        screenCSSOffset: { x: 0, y: 0, z: 0 }[m
[31m-    },[m
[31m-    iphone: {[m
[31m-        file: "./models/iphone.glb",[m
[31m-        init: {[m
[31m-            position: { x: 0, y: -350, z: 0 }, [m
[31m-            rotation: { x: 0, y: Math.PI, z: 0 }, // Rotate 180deg to face forwards[m
[31m-            scale: { x: 250, y: 250, z: 250 }, [m
[31m-            targetY: 45[m
[31m-        },[m
[31m-        hasLid: false,[m
[31m-        screenCSSOffset: { x: 0, y: -45, z: 0 } // Pull it down to center visually in the bezels[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-// Sequence timing variables (in milliseconds)[m
[31m-// The skeleton runs inside the screen. We animate the Macbook first.[m
[31m-const ANIMATION_START_DELAY = 500;[m
[31m-const ANIMATION_DURATION = 6000;[m
[31m-const SKELETON_VISIBLE_TIME = 2000; [m
[31m-[m
[31m-// =========================================[m
[31m-// Three.js State[m
[31m-// =========================================[m
[31m-const laptopScene = {[m
[31m-    deviceType: 'laptop', // Determined at runtime[m
[31m-    geometryFile: null,[m
[31m-    container: null,[m
[31m-    mesh: null, // { base, lid, screen }[m
[31m-    scene: null,[m
[31m-    renderer: null,[m
[31m-    camera: null,[m
[31m-};[m
[31m-const laptopScreenScene = {[m
[31m-    container: null,[m
[31m-    mesh: null,[m
[31m-    scene: null,[m
[31m-    renderer: null,[m
[31m-};[m
[31m-[m
[31m-let animationStartTime = null;[m
[31m-[m
[31m-// --- Audio Setup ---[m
[31m-const startupAudio = new Audio('./audio sounds/startup sound.mp3');[m
[31m-const quoteAudio = new Audio('./audio sounds/initial quote appearance sound.mp3');[m
[31m-const menuAudio = new Audio('./audio sounds/menu open.mp3');[m
[31m-const hoverAudio = new Audio('./audio sounds/button hover.mp3');[m
[31m-[m
[31m-// Group audio and lower volume[m
[31m-const allAudio = [startupAudio, quoteAudio, menuAudio, hoverAudio];[m
[31m-allAudio.forEach(a => {[m
[31m-    a.volume = 0; // Muted by default[m
[31m-    a.load();[m
[31m-});[m
[31m-[m
[31m-// --- Mute Toggle Logic ---[m
[31m-const muteToggleBtn = document.getElementById("muteToggle");[m
[31m-// Load initial state from localStorage, default to true (muted)[m
[31m-const savedMuteState = localStorage.getItem('isMuted');[m
[31m-let isMuted = savedMuteState !== null ? savedMuteState === 'true' : true;[m
[31m-[m
[31m-// Helper to update volumes and icons[m
[31m-const updateMuteState = () => {[m
[31m-    allAudio.forEach(a => {[m
[31m-        a.volume = isMuted ? 0 : 0.2;[m
[31m-    });[m
[31m-    [m
[31m-    if (muteToggleBtn) {[m
[31m-        const icon = muteToggleBtn.querySelector("i");[m
[31m-        if (icon) {[m
[31m-            icon.className = isMuted ? "fa-solid fa-volume-xmark" : "fa-solid fa-volume-high";[m
[31m-        }[m
[31m-    }[m
[31m-    [m
[31m-    localStorage.setItem('isMuted', isMuted);[m
[31m-[m
[31m-    // If unmuting during the intro sequence, trigger the relevant audios if they are currently relevant[m
[31m-    if (!isMuted) {[m
[31m-        // If the quote is visible but audio was muted, try playing it now[m
[31m-        if (quoteContainer.classList.contains("show") && quoteAudio.paused) {[m
[31m-            quoteAudio.play().catch(e => console.log('Audio playback resumed:', e));[m
[31m-        }[m
[31m-        // If splash is still up, try playing startup audio[m
[31m-        if (splashScreen.style.display !== 'none' && startupAudio.paused) {[m
[31m-             startupAudio.play().catch(e => console.log('Audio playback resumed:', e));[m
[31m-        }[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-// Initial Sync[m
[31m-updateMuteState();[m
[31m-[m
[31m-if (muteToggleBtn) {[m
[31m-    muteToggleBtn.addEventListener("click", () => {[m
[31m-        isMuted = !isMuted;[m
[31m-        updateMuteState();[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-// Playback handlers[m
[31m-const playHoverSound = () => {[m
[31m-    hoverAudio.currentTime = 0;[m
[31m-    hoverAudio.play().catch(e => console.log('Audio playback prevented:', e));[m
[31m-};[m
[31m-[m
[31m-const playMenuSound = () => {[m
[31m-    menuAudio.currentTime = 0;[m
[31m-    menuAudio.play().catch(e => console.log('Audio playback prevented:', e));[m
[31m-};[m
[31m-[m
[31m-// --- GitHub Stars Logic ---[m
[31m-const updateGithubStars = async () => {[m
[31m-    const starCountElement = document.getElementById("github-star-count");[m
[31m-    if (!starCountElement) return;[m
[31m-[m
[31m-    try {[m
[31m-        const response = await fetch('https://api.github.com/repos/Mr-Shoez/personalPortfolioProject');[m
[31m-        if (!response.ok) throw new Error('GitHub API response not ok');[m
[31m-        [m
[31m-        const data = await response.json();[m
[31m-        if (data && typeof data.stargazers_count === 'number') {[m
[31m-            starCountElement.textContent = data.stargazers_count;[m
[31m-        }[m
[31m-    } catch (error) {[m
[31m-        console.error('Error fetching GitHub stars:', error);[m
[31m-        // Fallback or keep the hardcoded number[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-// Initial calls[m
[31m-updateGithubStars();[m
[31m-[m
[31m-// =========================================[m
[31m-// Three.js Setup Functions[m
[31m-// =========================================[m
[31m-[m
[31m-const getWindowSize = () => ({[m
[31m-    height: window.innerHeight,[m
[31m-    width: window.innerWidth,[m
[31m-});[m
[31m-[m
[31m-/**[m
[31m- * Asynchronously loads the required GLTF/GLB models using standard and DRACO loaders.[m
[31m- * Resolves the device type based on window width and stores the geometry in state.[m
[31m- */[m
[31m-const load3DModels = async () => {[m
[31m-    const gltfLoader = new GLTFLoader();[m
[31m-    const dracoLoader = new DRACOLoader();[m
[31m-[m
[31m-    dracoLoader.setDecoderPath(DRACO_DECODER_URL);[m
[31m-    gltfLoader.setDRACOLoader(dracoLoader);[m
[31m-    [m
[31m-    laptopScene.deviceType = window.innerWidth < 768 ? "iphone" : "laptop";[m
[31m-    const config = DEVICE_CONFIG[laptopScene.deviceType];[m
[31m-[m
[31m-    laptopScene.geometryFile = await gltfLoader.loadAsync(config.file);[m
[31m-};[m
[31m-[m
[31m-/**[m
[31m- * Recursively applies custom MeshPhongMaterials to specific parts of the loaded laptop 3D model.[m
[31m- * [m
[31m- * @param {THREE.Object3D} mesh - The root or child mesh to apply materials to.[m
[31m- */[m
[31m-const setLaptopMeshMaterials = (mesh) => {[m
[31m-    if (mesh.name === "Cube008_2") {[m
[31m-        mesh.material.side = THREE.FrontSide;[m
[31m-    } else if (mesh.name === "keyboard") {[m
[31m-        mesh.material = new THREE.MeshPhongMaterial({[m
[31m-            color: 0x1a1a1a,[m
[31m-            emissive: 0x000000,[m
[31m-            specular: 0x111111,[m
[31m-            shininess: 100,[m
[31m-            side: THREE.FrontSide,[m
[31m-        });[m
[31m-    }[m
[31m-[m
[31m-    (mesh.children || []).forEach((child) => setLaptopMeshMaterials(child));[m
[31m-};[m
[31m-[m
[31m-/**[m
[31m- * Configures the loaded 3D geometry into a usable mesh structure (base, lid, screen).[m
[31m- * Applies initial position, rotation, and scale transformations defined in configuration.[m
[31m- * [m
[31m- * @param {Object} geometryFile - The loaded GLTF object containing the scene.[m
[31m- * @returns {Object} An object containing references to the base, lid (if applicable), and screen meshes.[m
[31m- */[m
[31m-const createLaptopMesh = (geometryFile) => {[m
[31m-    const base = geometryFile.scene;[m
[31m-    const config = DEVICE_CONFIG[laptopScene.deviceType];[m
[31m-[m
[31m-    base.position.set(config.init.position.x, config.init.position.y, config.init.position.z);[m
[31m-    base.rotation.set(config.init.rotation.x, config.init.rotation.y, config.init.rotation.z);[m
[31m-    base.scale.set(config.init.scale.x, config.init.scale.y, config.init.scale.z);[m
[31m-    [m
[31m-    let lid = null;[m
[31m-    let screen = null;[m
[31m-[m
[31m-    if (config.hasLid) {[m
[31m-        setLaptopMeshMaterials(base);[m
[31m-        lid = base.children[0];[m
[31m-        screen = lid.children[0].children[2];[m
[31m-        lid.rotation.set(config.lidClosedRotationX, 0, 0); // Start with closed lid[m
[31m-    } else {[m
[31m-        // iPhone specific setup[m
[31m-        screen = base.getObjectByName("Screen");[m
[31m-        [m
[31m-        // If the screen node isn't found exactly by name, fallback to children[m
[31m-        if (!screen && base.children.length > 0) {[m
[31m-            screen = base.children[0];[m
[31m-        }[m
[31m-    }[m
[31m-[m
[31m-    return { base, lid, screen };[m
[31m-};[m
[31m-[m
[31m-/**[m
[31m- * Clones a DOM element (screen content) and attaches it as a CSS3DObject to a 3D mesh.[m
[31m- * This links the interactive DOM elements to the 3D space of the laptop/phone screen.[m
[31m- * Dimensions are automatically calculated based on the bounding box of the target mesh.[m
[31m- * [m
[31m- * @param {HTMLElement} container - The HTML DOM element to render in 3D space.[m
[31m- * @param {THREE.Object3D} obj - The 3D target mesh that will hold the CSS3DObject.[m
[31m- */[m
[31m-const addCss3dToObject = (container, obj) => {[m
[31m-    const containerClone = container.cloneNode(true);[m
[31m-    container.remove();[m
[31m-[m
[31m-    const css3dObject = new CSS3DObject(containerClone);[m
[31m-    obj.css3dObject = css3dObject;[m
[31m-    obj.add(css3dObject);[m
[31m-[m
[31m-    // Calculate exact physical dimensions of the screen face for CSS scaling[m
[31m-    const boundingBox = new THREE.Box3().setFromObject(obj);[m
[31m-    const size = new THREE.Vector3();[m
[31m-    boundingBox.getSize(size);[m
[31m-    [m
[31m-    // Dynamically set CSS container scale based on the 3D model bounds[m
[31m-    // We multiply by the mesh scale since the bounds are local[m
[31m-    const baseScale = DEVICE_CONFIG[laptopScene.deviceType].init.scale.x;[m
[31m-    [m
[31m-    // Width is always X. Height is usually Y, but for the laptop lid it's Z since it was rotated.[m
[31m-    const physicalWidth = size.x * baseScale;[m
[31m-    const physicalHeight = (size.y > size.z ? size.y : size.z) * baseScale;[m
[31m-    [m
[31m-    containerClone.style.width = `${Math.floor(physicalWidth)}px`;[m
[31m-    containerClone.style.height = `${Math.floor(physicalHeight)}px`;[m
[31m-[m
[31m-    // Invisible plane to block WebGL behind the screen[m
[31m-    obj.material = new THREE.MeshPhongMaterial({[m
[31m-        opacity: 0.15,[m
[31m-        color: new THREE.Color(0x111111),[m
[31m-        blending: THREE.NoBlending,[m
[31m-    });[m
[31m-[m
[31m-    const { max, min } = obj.geometry.boundingBox;[m
[31m-    obj.geometry = new THREE.BoxGeometry([m
[31m-        max.x - min.x,[m
[31m-        max.y - min.y,[m
[31m-        max.z - min.z + 0.2[m
[31m-    );[m
[31m-    [m
[31m-    // update references inside the clone since we removed the original[m
[31m-    const skeletonClone = containerClone.querySelector(".skeleton-loader");[m
[31m-    if (skeletonClone) {[m
[31m-        skeletonClone.id = "skeletonLoaderClone";[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-/**[m
[31m- * Initializes the WebGL and CSS3D scenes, sets up the camera, lighting, and appends[m
[31m- * the renderers to the DOM. Starts the initial placement of all meshes.[m
[31m- */[m
[31m-const initAllScenes = () => {[m
[31m-    const { height, width } = getWindowSize();[m
[31m-    [m
[31m-    // Laptop WebGL Scene[m
[31m-    laptopScene.container = laptopContainer;[m
[31m-    laptopScene.mesh = createLaptopMesh(laptopScene.geometryFile);[m
[31m-    addCss3dToObject(laptopScreenContainer, laptopScene.mesh.screen);[m
[31m-[m
[31m-    laptopScene.scene = new THREE.Scene();[m
[31m-    [m
[31m-    laptopScene.renderer = new THREE.WebGLRenderer({ alpha: true, antialias: true });[m
[31m-    laptopScene.renderer.setPixelRatio(window.devicePixelRatio);[m
[31m-    laptopScene.renderer.setSize(width, height);[m
[31m-    laptopContainer.appendChild(laptopScene.renderer.domElement);[m
[31m-[m
[31m-    laptopScene.camera = new THREE.PerspectiveCamera(70, width / height, 1, 1000);[m
[31m-    // Dynamically adjust Z to prevent clipping on mobile screens[m
[31m-    laptopScene.camera.position.set(0, 0, width < 768 ? 1100 : 750);[m
[31m-[m
[31m-    const pointLight1 = new THREE.PointLight(0xffffff, 3.5, 0, 0);[m
[31m-    pointLight1.position.set(0, 700, 750);[m
[31m-    const pointLight2 = new THREE.PointLight(0xffffff, 0.05, 0, 0);[m
[31m-    pointLight2.position.set(-300, 100, 100);[m
[31m-[m
[31m-    laptopScene.scene.add(pointLight1, pointLight2, laptopScene.mesh.base);[m
[31m-[m
[31m-    // Laptop CSS3D Screen Scene[m
[31m-    laptopScreenScene.container = laptopScreen;[m
[31m-    laptopScreenScene.mesh = laptopScene.mesh.screen.css3dObject;[m
[31m-    [m
[31m-    laptopScreenScene.scene = new THREE.Scene();[m
[31m-    laptopScreenScene.renderer = new CSS3DRenderer();[m
[31m-    laptopScreenScene.renderer.setSize(width, height);[m
[31m-    laptopScreenScene.renderer.domElement.style.position = 'absolute';[m
[31m-    laptopScreenScene.renderer.domElement.style.top = 0;[m
[31m-    laptopScreen.appendChild(laptopScreenScene.renderer.domElement);[m
[31m-[m
[31m-    laptopScreenScene.scene.add(laptopScreenScene.mesh);[m
[31m-};[m
[31m-[m
[31m-/**[m
[31m- * Synchronizes the position, rotation, and transforms of the CSS3D object [m
[31m- * with the WebGL screen mesh, ensuring the DOM element stays perfectly aligned [m
[31m- * within the 3D device frame.[m
[31m- */[m
[31m-const syncLaptopScreen = () => {[m
[31m-    const position = new THREE.Vector3();[m
[31m-    const quaternion = new THREE.Quaternion();[m
[31m-    laptopScene.mesh.screen.matrixWorld.decompose(position, quaternion, new THREE.Vector3());[m
[31m-[m
[31m-    laptopScreenScene.mesh.position.copy(position);[m
[31m-    laptopScreenScene.mesh.quaternion.copy(quaternion);[m
[31m-    [m
[31m-    const config = DEVICE_CONFIG[laptopScene.deviceType];[m
[31m-[m
[31m-    // The laptop screen explicitly needs a -PI/2 rotation due to its local mesh space[m
[31m-    if (config.hasLid) {[m
[31m-        laptopScreenScene.mesh.rotateOnAxis(new THREE.Vector3(1, 0, 0), (Math.PI / 2) * -1);[m
[31m-    }[m
[31m-    [m
[31m-    // Apply optional alignment offsets[m
[31m-    if (config.screenCSSOffset) {[m
[31m-        laptopScreenScene.mesh.translateX(config.screenCSSOffset.x);[m
[31m-        laptopScreenScene.mesh.translateY(config.screenCSSOffset.y);[m
[31m-        laptopScreenScene.mesh.translateZ(config.screenCSSOffset.z);[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-[m
[31m-// =========================================[m
[31m-// Animation Timeline Logic[m
[31m-// =========================================[m
[31m-[m
[31m-// Ease Out Cubic function[m
[31m-const easeOutCubic = (x) => 1 - Math.pow(1 - x, 3);[m
[31m-// Ease In Expo function[m
[31m-const easeInExpo = (x) => x === 0 ? 0 : Math.pow(2, 10 * x - 10);[m
[31m-// Ease In Out Quad function[m
[31m-const easeInOutQuad = (x) => x < 0.5 ? 2 * x * x : 1 - Math.pow(-2 * x + 2, 2) / 2;[m
[31m-[m
[31m-/**[m
[31m- * The core animation loop for the cinematic intro sequence.[m
[31m- * Uses requestAnimationFrame to calculate progressed states based on timestamps.[m
[31m- * Handles the raising of the laptop, the lid opening, and the camera zooming past the screen.[m
[31m- * [m
[31m- * @param {DOMHighResTimeStamp} timestamp - High resolution time provided by requestAnimationFrame.[m
[31m- */[m
[31m-const updateAnimation = (timestamp) => {[m
[31m-    if (!animationStartTime) animationStartTime = timestamp;[m
[31m-    [m
[31m-    const elapsed = timestamp - animationStartTime;[m
[31m-    // Don't start animating until initial delay finishes[m
[31m-    const animationElapsed = Math.max(0, elapsed - ANIMATION_START_DELAY); [m
[31m-    const progress = Math.min(1, animationElapsed / ANIMATION_DURATION);[m
[31m-    [m
[31m-    // We have different phases inside our animation.[m
[31m-    [m
[31m-    // Phase 1: MacBook rises into view (0 -> 15%)[m
[31m-    const riseProgress = Math.min(1, progress / 0.15);[m
[31m-    const riseEased = easeOutCubic(riseProgress);[m
[31m-    const startY = DEVICE_CONFIG[laptopScene.deviceType].init.position.y;[m
[31m-    const targetY = DEVICE_CONFIG[laptopScene.deviceType].init.targetY; // Center position[m
[31m-    laptopScene.mesh.base.position.y = startY + ((targetY - startY) * riseEased);[m
[31m-[m
[31m-    // Phase 2: Lid Opens (15% -> 35%)[m
[31m-    let lidProgress = 0;[m
[31m-    if (progress > 0.15) {[m
[31m-        lidProgress = Math.max(0, Math.min(1, (progress - 0.15) / 0.20));[m
[31m-    }[m
[31m-    const lidEased = easeInOutQuad(lidProgress);[m
[31m-    [m
[31m-    const config = DEVICE_CONFIG[laptopScene.deviceType];[m
[31m-    if (config.hasLid && laptopScene.mesh.lid) {[m
[31m-        laptopScene.mesh.lid.rotation.x = config.lidClosedRotationX - ((config.lidClosedRotationX - config.lidOpenRotationX) * lidEased);[m
[31m-    }[m
[31m-    [m
[31m-    // Phase 3: Huge zoom past the layout (60% -> 100%)[m
[31m-    let zoomProgress = 0;[m
[31m-    if (progress > 0.60) {[m
[31m-        zoomProgress = Math.max(0, Math.min(1, (progress - 0.60) / 0.40));[m
[31m-    }[m
[31m-    const zoomEased = easeInExpo(zoomProgress); // slow to start, incredibly fast at the end[m
[31m-    [m
[31m-    // Start at initial Z (normal view), push well past into negatives to pass through face[m
[31m-    const initialZ = window.innerWidth < 768 ? 1100 : 750;[m
[31m-    const currentZ = initialZ - ( initialZ * zoomEased );[m
[31m-    laptopScene.camera.position.z = currentZ;[m
[31m-[m
[31m-    // Render loop calls[m
[31m-    laptopScene.renderer.render(laptopScene.scene, laptopScene.camera);[m
[31m-    laptopScreenScene.renderer.render(laptopScreenScene.scene, laptopScene.camera);[m
[31m-    syncLaptopScreen();[m
[31m-[m
[31m-    // End condition[m
[31m-    if (progress < 1) {[m
[31m-        requestAnimationFrame(updateAnimation);[m
[31m-    } else {[m
[31m-        // Zoom finished. Camera is resting tightly inside the screen perimeter.[m
[31m-        [m
[31m-        // 1. Start the skeleton loader[m
[31m-        const skeletonClone = document.getElementById("skeletonLoaderClone");[m
[31m-        if (skeletonClone) {[m
[31m-            skeletonClone.classList.add("active");[m
[31m-        }[m
[31m-        [m
[31m-        // 2. Wait for it to 'load'[m
[31m-        setTimeout(() => {[m
[31m-            if (skeletonClone) {[m
[31m-                skeletonClone.classList.add("fade-out");[m
[31m-            }[m
[31m-            [m
[31m-            // 3. Wait for it to fade out (800ms defined in CSS)[m
[31m-            setTimeout(() => {[m
[31m-                // Now hide laptop scenes and show quote[m
[31m-                laptopContainer.style.display = 'none';[m
[31m-                laptopScreen.style.display = 'none';[m
[31m-                [m
[31m-                quoteContainer.classList.add("show");[m
[31m-                quoteAudio.play().catch(e => console.log('Audio playback prevented:', e));[m
[31m-                [m
[31m-                // Let quote sit for 3.5 seconds, then zoom through it[m
[31m-                setTimeout(() => {[m
[31m-                    quoteContainer.classList.add("zoom-into");[m
[31m-                    [m
[31m-                    // Wait for quote zoom out, then bring in hero[m
[31m-                    setTimeout(() => {[m
[31m-                        heroSection.classList.add("show");[m
[31m-                        document.getElementById('globalUi')?.classList.add("show");[m
[31m-                        document.documentElement.style.overflowY = "auto";[m
[31m-                        document.documentElement.style.overflowX = "hidden";[m
[31m-                        document.body.style.overflowY = "auto";[m
[31m-                        document.body.style.overflowX = "hidden";[m
[31m-                        document.documentElement.style.height = "auto";[m
[31m-                        document.body.style.height = "auto";[m
[31m-                        [m
[31m-                        setTimeout(() => {[m
[31m-                            splashScreen.style.display = 'none'; [m
[31m-                        }, 1500); [m
[31m-                    }, 1700);[m
[31m-                    [m
[31m-                }, 3500);[m
[31m-            }, 800); [m
[31m-        }, SKELETON_VISIBLE_TIME); [m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-[m
[31m-// --- Initialize ---[m
[31m-[m
[31m-const skipIntroSequence = () => {[m
[31m-    // Hide all splash elements instantly[m
[31m-    laptopContainer.style.display = 'none';[m
[31m-    laptopScreen.style.display = 'none';[m
[31m-    quoteContainer.style.display = 'none';[m
[31m-    splashScreen.style.display = 'none';[m
[31m-    [m
[31m-    // Show main content immediately[m
[31m-    heroSection.classList.add("show");[m
[31m-    document.getElementById('globalUi')?.classList.add("show");[m
[31m-    [m
[31m-    // Enable scrolling[m
[31m-    document.documentElement.style.overflowY = "auto";[m
[31m-    document.documentElement.style.overflowX = "hidden";[m
[31m-    document.body.style.overflowY = "auto";[m
[31m-    document.body.style.overflowX = "hidden";[m
[31m-    document.documentElement.style.height = "auto";[m
[31m-    document.body.style.height = "auto";[m
[31m-    [m
[31m-    // Handle anchor target scroll[m
[31m-    if (window.location.hash) {[m
[31m-        setTimeout(() => {[m
[31m-            const el = document.querySelector(window.location.hash);[m
[31m-            if (el) el.scrollIntoView();[m
[31m-        }, 100);[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-const shouldSkipIntro = () => {[m
[31m-    const navEntries = performance.getEntriesByType("navigation");[m
[31m-    const isReload = navEntries.length > 0 && navEntries[0].type === "reload";[m
[31m-    [m
[31m-    const hasSeenIntro = localStorage.getItem('introPlayed') === 'true';[m
[31m-    const comingFromProject = window.location.hash === '#projects' && document.referrer.includes('/projects/');[m
[31m-    const comingFromBlog = window.location.hash === '#blog' && (document.referrer.includes('/posts/') || document.referrer.includes('articles.html'));[m
[31m-    const isHashNavigationOnly = window.location.hash && !isReload;[m
[31m-[m
[31m-    return (!isReload && hasSeenIntro) || (!isReload && (comingFromProject || comingFromBlog || isHashNavigationOnly));[m
[31m-};[m
[31m-[m
[31m-let appInitialized = false;[m
[31m-const initApp = () => {[m
[31m-    if (appInitialized) return;[m
[31m-    appInitialized = true;[m
[31m-    [m
[31m-    if (shouldSkipIntro()) {[m
[31m-        skipIntroSequence();[m
[31m-    } else {[m
[31m-        localStorage.setItem('introPlayed', 'true');[m
[31m-        setTimeout(() => {[m
[31m-            load3DModels().then(() => {[m
[31m-                initAllScenes();[m
[31m-                startupAudio.play().catch(e => console.log('Audio playback prevented:', e));[m
[31m-                requestAnimationFrame(updateAnimation);[m
[31m-            });[m
[31m-        }, 500); // give the page half a second after being ready.[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-const onReadyStateChange = (event) => {[m
[31m-    if (event.target.readyState === "complete") {[m
[31m-        initApp();[m
[31m-    }[m
[31m-};[m
[31m-[m
[31m-document.addEventListener("readystatechange", onReadyStateChange);[m
[31m-// fallback just in case readystatechange misses it[m
[31m-if (document.readyState === "complete") {[m
[31m-    initApp();[m
[31m-}[m
[31m-[m
[31m-// Window resize handler[m
[31m-window.addEventListener("resize", () => {[m
[31m-    if (laptopScene.renderer) {[m
[31m-        const { height, width } = getWindowSize();[m
[31m-        [m
[31m-        laptopScene.camera.aspect = width / height;[m
[31m-        // Dynamically adjust initial Z if resized past breakpoint before zoom starts[m
[31m-        if (!heroSection.classList.contains("show")) {[m
[31m-            laptopScene.camera.position.setZ(width < 768 ? 1100 : 750);[m
[31m-        }[m
[31m-        laptopScene.camera.updateProjectionMatrix();[m
[31m-        laptopScene.renderer.setSize(width, height);[m
[31m-        [m
[31m-        laptopScreenScene.renderer.setSize(width, height);[m
[31m-    }[m
[31m-});[m
[31m-[m
[31m-[m
[31m-// --- Dynamic Greeting Logic ---[m
[31m-function updateGreeting() {[m
[31m-    const greetingElement = document.getElementById("dynamicGreeting");[m
[31m-    if (!greetingElement) return;[m
[31m-[m
[31m-    const currentHour = new Date().getHours();[m
[31m-    let greetingText = "Good evening";[m
[31m-[m
[31m-    if (currentHour >= 5 && currentHour < 12) {[m
[31m-        greetingText = "Good morning";[m
[31m-    } else if (currentHour >= 12 && currentHour < 18) {[m
[31m-        greetingText = "Good afternoon";[m
[31m-    }[m
[31m-[m
[31m-    greetingElement.textContent = greetingText;[m
[31m-}[m
[31m-[m
[31m-updateGreeting();[m
[31m-[m
[31m-// --- Blur Overlay Logic & Menu Audio ---[m
[31m-const blurOverlay = document.getElementById("blurOverlay");[m
[31m-const sidebarNav = document.querySelector(".sidebar-nav");[m
[31m-const techWrapper = document.querySelector(".tech-carousel-wrapper");[m
[31m-[m
[31m-function activateBlur() {[m
[31m-    if (blurOverlay) blurOverlay.classList.add("active");[m
[31m-    playMenuSound();[m
[31m-}[m
[31m-[m
[31m-function deactivateBlur() {[m
[31m-    if (blurOverlay) blurOverlay.classList.remove("active");[m
[31m-}[m
[31m-[m
[31m-if (sidebarNav) {[m
[31m-    sidebarNav.addEventListener("mouseenter", activateBlur);[m
[31m-    sidebarNav.addEventListener("mouseleave", deactivateBlur);[m
[31m-}[m
[31m-[m
[31m-if (techWrapper) {[m
[31m-    // Blur listeners removed per user request, keeping hover tooltips and slowdown intact[m
[31m-}[m
[31m-[m
[31m-// --- Tech Carousel Hover Slowdown & Tooltips ---[m
[31m-const techTrack = document.querySelector('.tech-track');[m
[31m-if (techTrack) {[m
[31m-    techTrack.addEventListener('mouseenter', () => {[m
[31m-        techTrack.getAnimations().forEach(anim => anim.playbackRate = 0.2);[m
[31m-    });[m
[31m-    techTrack.addEventListener('mouseleave', () => {[m
[31m-        techTrack.getAnimations().forEach(anim => anim.playbackRate = 1);[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-// --- Global Floating Tooltip Logic ---[m
[31m-const globalTooltip = document.getElementById('globalTooltip');[m
[31m-const globalTooltipText = document.getElementById('globalTooltipText');[m
[31m-const techItems = document.querySelectorAll('.tech-item');[m
[31m-[m
[31m-if (globalTooltip && techItems.length > 0) {[m
[31m-    techItems.forEach(item => {[m
[31m-        item.addEventListener('mouseenter', () => {[m
[31m-            const tooltipContent = item.getAttribute('data-tooltip');[m
[31m-            if (tooltipContent) {[m
[31m-                globalTooltipText.textContent = tooltipContent;[m
[31m-                globalTooltip.classList.add('visible');[m
[31m-                [m
[31m-                // Position it explicitly above the hovered item[m
[31m-                const rect = item.getBoundingClientRect();[m
[31m-                globalTooltip.style.top = (rect.top - 10) + 'px';[m
[31m-                globalTooltip.style.left = (rect.left + rect.width / 2) + 'px';[m
[31m-            }[m
[31m-        });[m
[31m-        item.addEventListener('mouseleave', () => {[m
[31m-            globalTooltip.classList.remove('visible');[m
[31m-        });[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-const cvNav = document.querySelector(".cv-nav");[m
[31m-if (cvNav) {[m
[31m-    cvNav.addEventListener("mouseenter", activateBlur);[m
[31m-    cvNav.addEventListener("mouseleave", deactivateBlur);[m
[31m-}[m
[31m-[m
[31m-// Global delegated hover audio for all interactive elements[m
[31m-document.addEventListener('mouseenter', (e) => {[m
[31m-    const target = e.target;[m
[31m-    if (target.matches?.('button, a, .tech-item, .bento-item, .nav-link')) {[m
[31m-        playHoverSound();[m
[31m-    }[m
[31m-}, true); // Use capture phase to catch hover on elements that don't bubble mouseenter effectively[m
[31m-[m
[31m-// --- Theme Integration (Hero Image Sync) ---[m
[31m-document.addEventListener('themechange', (e) => {[m
[31m-    const themeName = e.detail.theme;[m
[31m-    const heroImg = document.querySelector('.hero-profile-img');[m
[31m-    if (heroImg) {[m
[31m-        heroImg.src = themeName === 'light' ? 'my pictures/light mode.webp' : 'my pictures/dark mode.webp';[m
[31m-    }[m
[31m-});[m
[31m-[m
[31m-// Sync hero image on initial load[m
[31m-const currentTheme = document.documentElement.getAttribute('data-theme') || 'dark';[m
[31m-const heroImg = document.querySelector('.hero-profile-img');[m
[31m-if (heroImg) {[m
[31m-    heroImg.src = currentTheme === 'light' ? 'my pictures/light mode.webp' : 'my pictures/dark mode.webp';[m
[31m-}[m
[31m-[m
[31m-// --- Scroll Zoom Logic & Timeline Animation ---[m
[31m-const heroScrollRig = document.getElementById("heroScrollRig");[m
[31m-const heroContentGroup = document.getElementById("heroContentGroup");[m
[31m-[m
[31m-window.addEventListener("scroll", () => {[m
[31m-    // 1. Zoom Logic for Hero[m
[31m-    if (heroScrollRig && heroContentGroup) {[m
[31m-        const rigRect = heroScrollRig.getBoundingClientRect();[m
[31m-        const scrollDistance = heroScrollRig.offsetHeight - window.innerHeight;[m
[31m-        [m
[31m-        let scrollProgress = 0;[m
[31m-        if (scrollDistance > 0) {[m
[31m-            scrollProgress = Math.max(0, Math.min(1, -rigRect.top / scrollDistance));[m
[31m-        }[m
[31m-[m
[31m-        // By making the scale an exponent of scrollProgress, the perceived zoom velocity remains constant[m
[31m-        // giving the user perfect 1:1 control over the movement without an explosive finish.[m
[31m-        const scaleFactor = Math.pow(81, scrollProgress); [m
[31m-        [m
[31m-        let opacityProgress = 1;[m
[31m-        // Fade out slightly later (60% to 90%) to keep content visible during the controlled zoom[m
[31m-        if (scrollProgress > 0.6) {[m
[31m-            opacityProgress = 1 - ((scrollProgress - 0.6) / 0.3);[m
[31m-            opacityProgress = Math.max(0, Math.min(1, opacityProgress));[m
[31m-        }[m
[31m-[m
[31m-        heroContentGroup.style.transform = `scale(${scaleFactor})`;[m
[31m-        heroContentGroup.style.opacity = opacityProgress;[m
[31m-        [m
[31m-        const techWrapper = document.querySelector('.tech-carousel-wrapper');[m
[31m-        if (techWrapper) {[m
[31m-            let techOpacity = 1 - (scrollProgress * 2.5);[m
[31m-            techWrapper.style.opacity = Math.max(0, techOpacity);[m
[31m-        }[m
[31m-    }[m
[31m-[m
[31m-    // 2. Continuous Z-Snake Timeline Fill Logic[m
[31m-    const stElements = document.querySelectorAll('.st-node, .st-turn');[m
[31m-    const midScreen = window.innerHeight / 2;[m
[31m-    const triggerOffset = 50; [m
[31m-    [m
[31m-    stElements.forEach(el => {[m
[31m-        const rect = el.getBoundingClientRect();[m
[31m-        // Progress down the element[m
[31m-        const progress = (midScreen + triggerOffset - rect.top) / rect.height;[m
[31m-        const clamped = Math.max(0, Math.min(1, progress));[m
[31m-[m
[31m-        if (el.classList.contains('st-node')) {[m
[31m-            // Fill vertical line smoothly[m
[31m-            const fill = el.querySelector('.st-v .st-fill');[m
[31m-            if (fill) fill.style.transform = `scaleY(${clamped})`;[m
[31m-            [m
[31m-            // Dot and text activation check (triggers halfway down the node)[m
[31m-            const dot = el.querySelector('.st-dot');[m
[31m-            const content = el.querySelector('.st-content');[m
[31m-            if (progress >= 0.5) {[m
[31m-                if (dot) dot.classList.add('filled');[m
[31m-                if (content) content.classList.add('visible');[m
[31m-            } else {[m
[31m-                if (dot) dot.classList.remove('filled');[m
[31m-                if (content) content.classList.remove('visible');[m
[31m-            }[m
[31m-        } else if (el.classList.contains('st-turn')) {[m
[31m-            // Sequence the corner turns: 20% drop, 60% sweep, 20% drop[m
[31m-            const topFill = el.querySelector('.st-top-left .st-fill') || el.querySelector('.st-top-right .st-fill');[m
[31m-            const hFill = el.querySelector('.st-h .st-fill');[m
[31m-            const botFill = el.querySelector('.st-bottom-right .st-fill') || el.querySelector('.st-bottom-left .st-fill');[m
[31m-            [m
[31m-            let pTop = clamped / 0.2;[m
[31m-            let pH = (clamped - 0.2) / 0.6;[m
[31m-            let pBot = (clamped - 0.8) / 0.2;[m
[31m-            [m
[31m-            if (topFill) topFill.style.transform = `scaleY(${Math.max(0, Math.min(1, pTop))})`;[m
[31m-            if (hFill) hFill.style.transform = `scaleX(${Math.max(0, Math.min(1, pH))})`;[m
[31m-            if (botFill) botFill.style.transform = `scaleY(${Math.max(0, Math.min(1, pBot))})`;[m
[31m-        }[m
[31m-    });[m
[31m-});[m
[31m-[m
[31m-// 3. Zoom Logic for Section Content Groups[m
[31m-const contentGroups = document.querySelectorAll('.projects-content-group');[m
[31m-if (contentGroups.length > 0) {[m
[31m-    const observer = new IntersectionObserver((entries) => {[m
[31m-        entries.forEach(entry => {[m
[31m-            if (entry.isIntersecting) {[m
[31m-                entry.target.classList.add('visible');[m
[31m-            } else {[m
[31m-                entry.target.classList.remove('visible'); [m
[31m-            }[m
[31m-        });[m
[31m-    }, {[m
[31m-        threshold: 0.1 // Triggers when 10% of the element is visible[m
[31m-    });[m
[31m-    [m
[31m-    contentGroups.forEach(group => observer.observe(group));[m
[31m-}[m
[31m-[m
[31m-// 3b. Fade-In for Skills Section[m
[31m-const fadeInSections = document.querySelectorAll('.fade-in-section');[m
[31m-if (fadeInSections.length > 0) {[m
[31m-    const fadeInObserver = new IntersectionObserver((entries) => {[m
[31m-        entries.forEach(entry => {[m
[31m-            if (entry.isIntersecting) {[m
[31m-                entry.target.classList.add('visible');[m
[31m-                fadeInObserver.unobserve(entry.target); // Only animate once[m
[31m-            }[m
[31m-        });[m
[31m-    }, {[m
[31m-        threshold: 0.1[m
[31m-    });[m
[31m-[m
[31m-    fadeInSections.forEach(el => fadeInObserver.observe(el));[m
[31m-}[m
[31m-[m
[31m-[m
[31m-// 4. Scroll Fade-Up Animation for Blog Cards[m
[31m-const blogItems = document.querySelectorAll('.blog-gallery-item');[m
[31m-if (blogItems.length > 0) {[m
[31m-    const blogObserver = new IntersectionObserver((entries) => {[m
[31m-        entries.forEach(entry => {[m
[31m-            if (entry.isIntersecting) {[m
[31m-                entry.target.classList.add('visible');[m
[31m-                // Optional: Stop observing once faded in, or keep it to reverse when scrolling away[m
[31m-                blogObserver.unobserve(entry.target);[m
[31m-            }[m
[31m-        });[m
[31m-    }, {[m
[31m-        threshold: 0.15,[m
[31m-        rootMargin: "0px 0px -50px 0px"[m
[31m-    });[m
[31m-    [m
[31m-    blogItems.forEach(item => blogObserver.observe(item));[m
[31m-}[m
[31m-[m
[31m-// --- Projects Bento Grid Logic ---[m
[31m-const bentoGrid = document.getElementById('bentoGrid');[m
[31m-const projectModal = document.getElementById('projectModal');[m
[31m-const modalCloseBtn = document.getElementById('modalCloseBtn');[m
[31m-let projectsData = [];[m
[31m-[m
[31m-/**[m
[31m- * Fetches the projects configuration from the local JSON file.[m
[31m- * Automatically triggers the rendering of the Bento Grid upon success.[m
[31m- */[m
[31m-async function loadProjects() {[m
[31m-    try {[m
[31m-        const response = await fetch('./data/projects.json');[m
[31m-        if (!response.ok) throw new Error('Failed to load projects data');[m
[31m-        [m
[31m-        projectsData = await response.json();[m
[31m-        renderBentoGrid(projectsData);[m
[31m-    } catch (error) {[m
[31m-        console.error("Error loading projects:", error);[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-/**[m
[31m- * Iterates through the provided project data and dynamically builds the [m
[31m- * Bento Grid UI structure, injecting it into the DOM.[m
[31m- * [m
[31m- * @param {Array<Object>} projects - Array of project data objects loaded from JSON.[m
[31m- */[m
[31m-function renderBentoGrid(projects) {[m
[31m-    if (!bentoGrid) return;[m
[31m-    bentoGrid.innerHTML = ''; // Clear skeleton/empty state if any[m
[31m-    [m
[31m-    // Add the glow-container class to the parent grid so hover states activate[m
[31m-    bentoGrid.classList.add('glow-container');[m
[31m-[m
[31m-    projects.forEach((project, index) => {[m
[31m-        // Create Item Wrapper (now acts as the glow card exterior)[m
[31m-        const bentoItem = document.createElement('div');[m
[31m-        bentoItem.className = `bento-item glow-card bento-${index + 1}`;[m
[31m-        bentoItem.setAttribute('data-index', index);[m
[31m-        [m
[31m-        // Inner Content Wrapper that contains everything inside the border[m
[31m-        const bentoContent = document.createElement('div');[m
[31m-        bentoContent.className = 'glow-content';[m
[31m-[m
[31m-        // Create Image[m
[31m-        const img = document.createElement('img');[m
[31m-        img.src = project.thumbnail;[m
[31m-        img.alt = project.title;[m
[31m-        img.className = 'bento-img';[m
[31m-        img.loading = 'lazy';[m
[31m-        [m
[31m-        // Create Overlay content[m
[31m-        const overlay = document.createElement('div');[m
[31m-        overlay.className = 'bento-overlay';[m
[31m-        [m
[31m-        const title = document.createElement('h3');[m
[31m-        title.className = 'bento-item-title';[m
[31m-        title.textContent = project.title;[m
[31m-        [m
[31m-        const category = document.createElement('span');[m
[31m-        category.className = 'bento-item-category';[m
[31m-        category.textContent = project.category;[m
[31m-        [m
[31m-        overlay.appendChild(title);[m
[31m-        overlay.appendChild(category);[m
[31m-        [m
[31m-        // Assemble Content[m
[31m-        bentoContent.appendChild(img);[m
[31m-        bentoContent.appendChild(overlay);[m
[31m-        [m
[31m-        // Assemble Card[m
[31m-        bentoItem.appendChild(bentoContent);[m
[31m-        [m
[31m-        // Add Click Event to open Modal[m
[31m-        bentoItem.addEventListener('click', () => openProjectModal(index));[m
[31m-        [m
[31m-        bentoGrid.appendChild(bentoItem);[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-/**[m
[31m- * Populates and displays the cinematic project modal with details [m
[31m- * from the selected project index.[m
[31m- * [m
[31m- * @param {number} index - Index of the selected project in the loaded projectsData array.[m
[31m- */[m
[31m-function openProjectModal(index) {[m
[31m-    if (!projectsData[index]) return;[m
[31m-    const project = projectsData[index];[m
[31m-    [m
[31m-    // Inject Data[m
[31m-    document.getElementById('modalImage').src = project.fullImage;[m
[31m-    document.getElementById('modalImage').alt = project.title;[m
[31m-    document.getElementById('modalCategory').textContent = project.category;[m
[31m-    document.getElementById('modalTitle').textContent = project.title;[m
[31m-    document.getElementById('modalDescription').textContent = project.description;[m
[31m-    [m
[31m-    if (project.link) {[m
[31m-        document.getElementById('modalLink').href = project.link;[m
[31m-        document.getElementById('modalLink').style.display = 'inline-flex';[m
[31m-    } else {[m
[31m-        document.getElementById('modalLink').style.display = 'none';[m
[31m-    }[m
[31m-    [m
[31m-    // Inject Tech Stack Pills[m
[31m-    const techStackContainer = document.getElementById('modalTechStack');[m
[31m-    techStackContainer.innerHTML = '';[m
[31m-    [m
[31m-    if (project.technologies && project.technologies.length > 0) {[m
[31m-        project.technologies.forEach(tech => {[m
[31m-            const pill = document.createElement('span');[m
[31m-            pill.className = 'modal-pill';[m
[31m-            pill.textContent = tech;[m
[31m-            techStackContainer.appendChild(pill);[m
[31m-        });[m
[31m-    }[m
[31m-    [m
[31m-    // Show Modal[m
[31m-    projectModal.classList.add('active');[m
[31m-    playHoverSound(); // Optionally play the nice UI sound[m
[31m-}[m
[31m-[m
[31m-/**[m
[31m- * Closes the cinematic project modal and resets its state.[m
[31m- */[m
[31m-function closeProjectModal() {[m
[31m-    projectModal.classList.remove('active');[m
[31m-}[m
[31m-[m
[31m-if (modalCloseBtn) {[m
[31m-    modalCloseBtn.addEventListener('click', closeProjectModal);[m
[31m-}[m
[31m-[m
[31m-// Cinematic intuitive close via hovering completely off the content modal[m
[31m-// So if they mouse leave the wrapper entirely it falls back[m
[31m-const modalContentWrapper = document.querySelector('.modal-content-wrapper');[m
[31m-if (modalContentWrapper) {[m
[31m-    modalContentWrapper.addEventListener('mouseleave', () => {[m
[31m-        // Adding a slight delay makes it feel less aggressive when accidentally swiping off[m
[31m-        setTimeout(() => {[m
[31m-            // only close if the mouse isn't back on top of it.[m
[31m-            // A simple implementation of cinematic close[m
[31m-            if(projectModal.matches(':hover')) {[m
[31m-                // If the user's mouse is over the backdrop (the modal wrapper), let it close.[m
[31m-                // Wait, if it leaves the content block entirely, close it.[m
[31m-                closeProjectModal();[m
[31m-            }[m
[31m-        }, 300);[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-// Also close if clicking the backdrop directly[m
[31m-if (projectModal) {[m
[31m-    projectModal.addEventListener('click', (e) => {[m
[31m-        if (e.target === projectModal || e.target.classList.contains('modal-backdrop')) {[m
[31m-            closeProjectModal();[m
[31m-        }[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-// Initialize[m
[31m-loadProjects();[m
[31m-[m
[31m-// =========================================[m
[31m-// Global Glow Card Tracking (Stripe Effect)[m
[31m-// =========================================[m
[31m-document.addEventListener('pointermove', (ev) => {[m
[31m-    const container = ev.target.closest('.glow-container');[m
[31m-    if (container) {[m
[31m-        const glowCards = container.querySelectorAll('.glow-card');[m
[31m-        glowCards.forEach((card) => {[m
[31m-            const rect = card.getBoundingClientRect();[m
[31m-            // Assign localized x/y coordinates to the CSS variables[m
[31m-            card.style.setProperty("--x", `${ev.clientX - rect.left}px`);[m
[31m-            card.style.setProperty("--y", `${ev.clientY - rect.top}px`);[m
[31m-        });[m
[31m-    }[m
[31m-});[m
[31m-[m
[31m-// =========================================[m
[31m-// Contact Modal Logic[m
[31m-// =========================================[m
[31m-const contactModal = document.getElementById('contactModal');[m
[31m-const openContactBtn = document.getElementById('openContactBtn');[m
[31m-const contactModalCloseBtn = document.getElementById('contactModalCloseBtn');[m
[31m-[m
[31m-function openContactModal() {[m
[31m-    if (contactModal) {[m
[31m-        contactModal.classList.add('active');[m
[31m-        playHoverSound();[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-function closeContactModal() {[m
[31m-    if (contactModal) {[m
[31m-        contactModal.classList.remove('active');[m
[31m-    }[m
[31m-}[m
[31m-[m
[31m-if (openContactBtn) {[m
[31m-    openContactBtn.addEventListener('click', openContactModal);[m
[31m-}[m
[31m-[m
[31m-if (contactModalCloseBtn) {[m
[31m-    contactModalCloseBtn.addEventListener('click', closeContactModal);[m
[31m-}[m
[31m-[m
[31m-if (contactModal) {[m
[31m-    contactModal.addEventListener('click', (e) => {[m
[31m-        if (e.target === contactModal || e.target.classList.contains('modal-backdrop')) {[m
[31m-            closeContactModal();[m
[31m-        }[m
[31m-    });[m
[31m-}[m
[31m-[m
[31m-// =========================================[m
[31m-// Socials Line Animation Observer[m
[31m-// =========================================[m
[31m-const socialsSection = document.getElementById('socials');[m
[31m-const socialsLine = document.getElementById('socialsLine');[m
[31m-[m
[31m-if (socialsSection && socialsLine) {[m
[31m-    const socialsObserver = new IntersectionObserver((entries) => {[m
[31m-        entries.forEach(entry => {[m
[31m-            if (entry.isIntersecting) {[m
[31m-                // Add class to trigger CSS scaleX(1)[m
[31m-                socialsLine.classList.add('animate');[m
[31m-                // Optional: Stop observing after it animates once[m
[31m-                socialsObserver.unobserve(entry.target);[m
[31m-            }[m
[31m-        });[m
[31m-    }, {[m
[31m-        threshold: 0.5 // Trigger when 50% of the section is visible[m
[31m-    });[m
[31m-[m
[31m-    socialsObserver.observe(socialsSection);[m
[31m-}[m
[31m-[m
[31m-// =========================================[m
[31m-// Contact Form EmailJS Integration[m
[31m-// =========================================[m
[31m-const contactForm = document.getElementById("contactForm");[m
[31m-const contactSubmitBtn = contactForm ? contactForm.querySelector(".contact-submit-btn") : null;[m
[31m-[m
[31m-if (contactForm && contactSubmitBtn) {[m
[31m-    contactForm.addEventListener("submit", function (e) {[m
[31m-        e.preventDefault();[m
[31m-[m
[31m-        // Change button state to loading[m
[31m-        const originalText = contactSubmitBtn.textContent;[m
[31m-        contactSubmitBtn.textContent = "Sending...";[m
[31m-        contactSubmitBtn.disabled = true;[m
[31m-[m
[31m-        const serviceID = "service_fklvlrs";[m
[31m-        const templateID = "template_zjkrkz8";[m
[31m-[m
[31m-        // Send the form data using EmailJS[m
[31m-        emailjs.sendForm(serviceID, templateID, this)[m
[31m-            .then(() => {[m
[31m-                // Success: reset form, show message, close modal[m
[31m-                alert("Message sent successfully! I will get back to you soon.");[m
[31m-                contactForm.reset();[m
[31m-                contactSubmitBtn.textContent = originalText;[m
[31m-                contactSubmitBtn.disabled = false;[m
[31m-                [m
[31m-                const closeBtn = document.getElementById('contactModalCloseBtn');[m
[31m-                if (closeBtn) closeBtn.click();[m
[31m-            })[m
[31m-            .catch((error) => {[m
[31m-                // Error: show error, reset button[m
[31m-                console.error("EmailJS Error:", error);[m
[31m-                alert("Failed to send message. Please try again later or email me directly.");[m
[31m-                contactSubmitBtn.textContent = originalText;[m
[31m-                contactSubmitBtn.disabled = false;[m
[31m-            });[m
[31m-    });[m
[31m-}[m
[32m+[m[32mconsole.log("%c⚠ STOP!","color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;"),console.log("%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-S-U-D-O/personalPortfolioProject/blob/main/LICENSE","color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;");import*as e from"three";import{DRACOLoader as t}from"three-draco-loader";import{GLTFLoader as o}from"three-gltf-loader";import{CSS3DRenderer as n,CSS3DObject as s}from"three-css-3d-renderer";const i=document.getElementById("splashScreen"),a=(document.getElementById("skeletonLoader"),document.getElementById("quoteContainer")),l=document.getElementById("heroSection"),r=document.getElementById("laptop"),c=document.getElementById("laptop-screen"),d=document.getElementById("screen-content"),m=(window.innerWidth,{laptop:{file:"./models/laptop.glb",init:{position:{x:0,y:-400,z:0},rotation:{x:Math.PI/20,y:0,z:0},scale:{x:50,y:50,z:50},targetY:-70},lidClosedRotationX:Math.PI/2,lidOpenRotationX:0,hasLid:!0,screenCSSOffset:{x:0,y:0,z:0}},iphone:{file:"./models/iphone.glb",init:{position:{x:0,y:-350,z:0},rotation:{x:0,y:Math.PI,z:0},scale:{x:250,y:250,z:250},targetY:45},hasLid:!1,screenCSSOffset:{x:0,y:-45,z:0}}}),u={deviceType:"laptop",geometryFile:null,container:null,mesh:null,scene:null,renderer:null,camera:null},h={container:null,mesh:null,scene:null,renderer:null};let y=null;const p=new Audio("./audio sounds/startup sound.mp3"),g=new Audio("./audio sounds/initial quote appearance sound.mp3"),f=new Audio("./audio sounds/menu open.mp3"),w=new Audio("./audio sounds/button hover.mp3"),v=[p,g,f,w];v.forEach(e=>{e.volume=0,e.load()});const E=document.getElementById("muteToggle"),b=localStorage.getItem("isMuted");let L=null===b||"true"===b;const x=()=>{if(v.forEach(e=>{e.volume=L?0:.2}),E){const e=E.querySelector("i");e&&(e.className=L?"fa-solid fa-volume-xmark":"fa-solid fa-volume-high")}localStorage.setItem("isMuted",L),L||(a.classList.contains("show")&&g.paused&&g.play().catch(e=>console.log("Audio playback resumed:",e)),"none"!==i.style.display&&p.paused&&p.play().catch(e=>console.log("Audio playback resumed:",e)))};x(),E&&E.addEventListener("click",()=>{L=!L,x()});const S=()=>{w.currentTime=0,w.play().catch(e=>console.log("Audio playback prevented:",e))};(async()=>{const e=document.getElementById("github-star-count");if(e)try{const t=await fetch("https://api.github.com/repos/Mr-Shoez/personalPortfolioProject");if(!t.ok)throw new Error("GitHub API response not ok");const o=await t.json();o&&"number"==typeof o.stargazers_count&&(e.textContent=o.stargazers_count)}catch(e){console.error("Error fetching GitHub stars:",e)}})();const I=()=>({height:window.innerHeight,width:window.innerWidth}),B=t=>{"Cube008_2"===t.name?t.material.side=e.FrontSide:"keyboard"===t.name&&(t.material=new e.MeshPhongMaterial({color:1710618,emissive:0,specular:1118481,shininess:100,side:e.FrontSide})),(t.children||[]).forEach(e=>B(e))},C=()=>{const{height:t,width:o}=I();u.container=r,u.mesh=(e=>{const t=e.scene,o=m[u.deviceType];t.position.set(o.init.position.x,o.init.position.y,o.init.position.z),t.rotation.set(o.init.rotation.x,o.init.rotation.y,o.init.rotation.z),t.scale.set(o.init.scale.x,o.init.scale.y,o.init.scale.z);let n=null,s=null;return o.hasLid?(B(t),n=t.children[0],s=n.children[0].children[2],n.rotation.set(o.lidClosedRotationX,0,0)):(s=t.getObjectByName("Screen"),!s&&t.children.length>0&&(s=t.children[0])),{base:t,lid:n,screen:s}})(u.geometryFile),((t,o)=>{const n=t.cloneNode(!0);t.remove();const i=new s(n);o.css3dObject=i,o.add(i);const a=(new e.Box3).setFromObject(o),l=new e.Vector3;a.getSize(l);const r=m[u.deviceType].init.scale.x,c=l.x*r,d=(l.y>l.z?l.y:l.z)*r;n.style.width=`${Math.floor(c)}px`,n.style.height=`${Math.floor(d)}px`,o.material=new e.MeshPhongMaterial({opacity:.15,color:new e.Color(1118481),blending:e.NoBlending});const{max:h,min:y}=o.geometry.boundingBox;o.geometry=new e.BoxGeometry(h.x-y.x,h.y-y.y,h.z-y.z+.2);const p=n.querySelector(".skeleton-loader");p&&(p.id="skeletonLoaderClone")})(d,u.mesh.screen),u.scene=new e.Scene,u.renderer=new e.WebGLRenderer({alpha:!0,antialias:!0}),u.renderer.setPixelRatio(window.devicePixelRatio),u.renderer.setSize(o,t),r.appendChild(u.renderer.domElement),u.camera=new e.PerspectiveCamera(70,o/t,1,1e3),u.camera.position.set(0,0,o<768?1100:750);const i=new e.PointLight(16777215,3.5,0,0);i.position.set(0,700,750);const a=new e.PointLight(16777215,.05,0,0);a.position.set(-300,100,100),u.scene.add(i,a,u.mesh.base),h.container=c,h.mesh=u.mesh.screen.css3dObject,h.scene=new e.Scene,h.renderer=new n,h.renderer.setSize(o,t),h.renderer.domElement.style.position="absolute",h.renderer.domElement.style.top=0,c.appendChild(h.renderer.domElement),h.scene.add(h.mesh)},M=t=>{y||(y=t);const o=t-y,n=Math.max(0,o-500),s=Math.min(1,n/6e3),d=Math.min(1,s/.15),p=(f=d,1-Math.pow(1-f,3));var f;const w=m[u.deviceType].init.position.y,v=m[u.deviceType].init.targetY;u.mesh.base.position.y=w+(v-w)*p;let E=0;s>.15&&(E=Math.max(0,Math.min(1,(s-.15)/.2)));const b=(e=>e<.5?2*e*e:1-Math.pow(-2*e+2,2)/2)(E),L=m[u.deviceType];L.hasLid&&u.mesh.lid&&(u.mesh.lid.rotation.x=L.lidClosedRotationX-(L.lidClosedRotationX-L.lidOpenRotationX)*b);let x=0;s>.6&&(x=Math.max(0,Math.min(1,(s-.6)/.4)));const S=(e=>0===e?0:Math.pow(2,10*e-10))(x),I=window.innerWidth<768?1100:750,B=I-I*S;if(u.camera.position.z=B,u.renderer.render(u.scene,u.camera),h.renderer.render(h.scene,u.camera),(()=>{const t=new e.Vector3,o=new e.Quaternion;u.mesh.screen.matrixWorld.decompose(t,o,new e.Vector3),h.mesh.position.copy(t),h.mesh.quaternion.copy(o);const n=m[u.deviceType];n.hasLid&&h.mesh.rotateOnAxis(new e.Vector3(1,0,0),Math.PI/2*-1),n.screenCSSOffset&&(h.mesh.translateX(n.screenCSSOffset.x),h.mesh.translateY(n.screenCSSOffset.y),h.mesh.translateZ(n.screenCSSOffset.z))})(),s<1)requestAnimationFrame(M);else{const e=document.getElementById("skeletonLoaderClone");e&&e.classList.add("active"),setTimeout(()=>{e&&e.classList.add("fade-out"),setTimeout(()=>{r.style.display="none",c.style.display="none",a.classList.add("show"),g.play().catch(e=>console.log("Audio playback prevented:",e)),setTimeout(()=>{a.classList.add("zoom-into"),setTimeout(()=>{l.classList.add("show"),document.getElementById("globalUi")?.classList.add("show"),document.documentElement.style.overflowY="auto",document.documentElement.style.overflowX="hidden",document.body.style.overflowY="auto",document.body.style.overflowX="hidden",document.documentElement.style.height="auto",document.body.style.height="auto",setTimeout(()=>{i.style.display="none"},1500)},1700)},3500)},800)},2e3)}};let k=!1;const z=()=>{k||(k=!0,(()=>{const e=performance.getEntriesByType("navigation"),t=e.length>0&&"reload"===e[0].type,o="true"===localStorage.getItem("introPlayed"),n="#projects"===window.location.hash&&document.referrer.includes("/projects/"),s="#blog"===window.location.hash&&(document.referrer.includes("/posts/")||document.referrer.includes("articles.html")),i=window.location.hash&&!t;return!t&&o||!t&&(n||s||i)})()?(r.style.display="none",c.style.display="none",a.style.display="none",i.style.display="none",l.classList.add("show"),document.getElementById("globalUi")?.classList.add("show"),document.documentElement.style.overflowY="auto",document.documentElement.style.overflowX="hidden",document.body.style.overflowY="auto",document.body.style.overflowX="hidden",document.documentElement.style.height="auto",document.body.style.height="auto",window.location.hash&&setTimeout(()=>{const e=document.querySelector(window.location.hash);e&&e.scrollIntoView()},100)):(localStorage.setItem("introPlayed","true"),setTimeout(()=>{(async()=>{const e=new o,n=new t;n.setDecoderPath("https://www.gstatic.com/draco/versioned/decoders/1.5.6/"),e.setDRACOLoader(n),u.deviceType=window.innerWidth<768?"iphone":"laptop";const s=m[u.deviceType];u.geometryFile=await e.loadAsync(s.file)})().then(()=>{C(),p.play().catch(e=>console.log("Audio playback prevented:",e)),requestAnimationFrame(M)})},500)))};document.addEventListener("readystatechange",e=>{"complete"===e.target.readyState&&z()}),"complete"===document.readyState&&z(),window.addEventListener("resize",()=>{if(u.renderer){const{height:e,width:t}=I();u.camera.aspect=t/e,l.classList.contains("show")||u.camera.position.setZ(t<768?1100:750),u.camera.updateProjectionMatrix(),u.renderer.setSize(t,e),h.renderer.setSize(t,e)}}),function(){const e=document.getElementById("dynamicGreeting");if(!e)return;const t=(new Date).getHours();let o="Good evening";t>=5&&t<12?o="Good morning":t>=12&&t<18&&(o="Good afternoon"),e.textContent=o}();const q=document.getElementById("blurOverlay"),T=document.querySelector(".sidebar-nav");document.querySelector(".tech-carousel-wrapper");function A(){q&&q.classList.add("active"),f.currentTime=0,f.play().catch(e=>console.log("Audio playback prevented:",e))}function P(){q&&q.classList.remove("active")}T&&(T.addEventListener("mouseenter",A),T.addEventListener("mouseleave",P));const O=document.querySelector(".tech-track");O&&(O.addEventListener("mouseenter",()=>{O.getAnimations().forEach(e=>e.playbackRate=.2)}),O.addEventListener("mouseleave",()=>{O.getAnimations().forEach(e=>e.playbackRate=1)}));const j=document.getElementById("globalTooltip"),R=document.getElementById("globalTooltipText"),X=document.querySelectorAll(".tech-item");j&&X.length>0&&X.forEach(e=>{e.addEventListener("mouseenter",()=>{const t=e.getAttribute("data-tooltip");if(t){R.textContent=t,j.classList.add("visible");const o=e.getBoundingClientRect();j.style.top=o.top-10+"px",j.style.left=o.left+o.width/2+"px"}}),e.addEventListener("mouseleave",()=>{j.classList.remove("visible")})});const F=document.querySelector(".cv-nav");F&&(F.addEventListener("mouseenter",A),F.addEventListener("mouseleave",P)),document.addEventListener("mouseenter",e=>{const t=e.target;t.matches?.("button, a, .tech-item, .bento-item, .nav-link")&&S()},!0),document.addEventListener("themechange",e=>{const t=e.detail.theme,o=document.querySelector(".hero-profile-img");o&&(o.src="light"===t?"my pictures/light mode.webp":"my pictures/dark mode.webp")});const N=document.documentElement.getAttribute("data-theme")||"dark",Y=document.querySelector(".hero-profile-img");Y&&(Y.src="light"===N?"my pictures/light mode.webp":"my pictures/dark mode.webp");const G=document.getElementById("heroScrollRig"),H=document.getElementById("heroContentGroup");window.addEventListener("scroll",()=>{if(G&&H){const e=G.getBoundingClientRect(),t=G.offsetHeight-window.innerHeight;let o=0;t>0&&(o=Math.max(0,Math.min(1,-e.top/t)));const n=Math.pow(81,o);let s=1;o>.6&&(s=1-(o-.6)/.3,s=Math.max(0,Math.min(1,s))),H.style.transform=`scale(${n})`,H.style.opacity=s;const i=document.querySelector(".tech-carousel-wrapper");if(i){let e=1-2.5*o;i.style.opacity=Math.max(0,e)}}const e=document.querySelectorAll(".st-node, .st-turn"),t=window.innerHeight/2;e.forEach(e=>{const o=e.getBoundingClientRect(),n=(t+50-o.top)/o.height,s=Math.max(0,Math.min(1,n));if(e.classList.contains("st-node")){const t=e.querySelector(".st-v .st-fill");t&&(t.style.transform=`scaleY(${s})`);const o=e.querySelector(".st-dot"),i=e.querySelector(".st-content");n>=.5?(o&&o.classList.add("filled"),i&&i.classList.add("visible")):(o&&o.classList.remove("filled"),i&&i.classList.remove("visible"))}else if(e.classList.contains("st-turn")){const t=e.querySelector(".st-top-left .st-fill")||e.querySelector(".st-top-right .st-fill"),o=e.querySelector(".st-h .st-fill"),n=e.querySelector(".st-bottom-right .st-fill")||e.querySelector(".st-bottom-left .st-fill");let i=s/.2,a=(s-.2)/.6,l=(s-.8)/.2;t&&(t.style.transform=`scaleY(${Math.max(0,Math.min(1,i))})`),o&&(o.style.transform=`scaleX(${Math.max(0,Math.min(1,a))})`),n&&(n.style.transform=`scaleY(${Math.max(0,Math.min(1,l))})`)}})});const $=document.querySelectorAll(".projects-content-group");if($.length>0){const e=new IntersectionObserver(e=>{e.forEach(e=>{e.isIntersecting?e.target.classList.add("visible"):e.target.classList.remove("visible")})},{threshold:.1});$.forEach(t=>e.observe(t))}const D=document.querySelectorAll(".fade-in-section");if(D.length>0){const e=new IntersectionObserver(t=>{t.forEach(t=>{t.isIntersecting&&(t.target.classList.add("visible"),e.unobserve(t.target))})},{threshold:.1});D.forEach(t=>e.observe(t))}const W=document.querySelectorAll(".blog-gallery-item");if(W.length>0){const e=new IntersectionObserver(t=>{t.forEach(t=>{t.isIntersecting&&(t.target.classList.add("visible"),e.unobserve(t.target))})},{threshold:.15,rootMargin:"0px 0px -50px 0px"});W.forEach(t=>e.observe(t))}const V=document.getElementById("bentoGrid"),_=document.getElementById("projectModal"),U=document.getElementById("modalCloseBtn");let Z=[];function J(){_.classList.remove("active")}U&&U.addEventListener("click",J);const Q=document.querySelector(".modal-content-wrapper");Q&&Q.addEventListener("mouseleave",()=>{setTimeout(()=>{_.matches(":hover")&&J()},300)}),_&&_.addEventListener("click",e=>{(e.target===_||e.target.classList.contains("modal-backdrop"))&&J()}),async function(){try{const e=await fetch("./data/projects.json");if(!e.ok)throw new Error("Failed to load projects data");Z=await e.json(),function(e){if(!V)return;V.innerHTML="",V.classList.add("glow-container"),e.forEach((e,t)=>{const o=document.createElement("div");o.className=`bento-item glow-card bento-${t+1}`,o.setAttribute("data-index",t);const n=document.createElement("div");n.className="glow-content";const s=document.createElement("img");s.src=e.thumbnail,s.alt=e.title,s.className="bento-img",s.loading="lazy";const i=document.createElement("div");i.className="bento-overlay";const a=document.createElement("h3");a.className="bento-item-title",a.textContent=e.title;const l=document.createElement("span");l.className="bento-item-category",l.textContent=e.category,i.appendChild(a),i.appendChild(l),n.appendChild(s),n.appendChild(i),o.appendChild(n),o.addEventListener("click",()=>function(e){if(!Z[e])return;const t=Z[e];document.getElementById("modalImage").src=t.fullImage,document.getElementById("modalImage").alt=t.title,document.getElementById("modalCategory").textContent=t.category,document.getElementById("modalTitle").textContent=t.title,document.getElementById("modalDescription").textContent=t.description,t.link?(document.getElementById("modalLink").href=t.link,document.getElementById("modalLink").style.display="inline-flex"):document.getElementById("modalLink").style.display="none";const o=document.getElementById("modalTechStack");o.innerHTML="",t.technologies&&t.technologies.length>0&&t.technologies.forEach(e=>{const t=document.createElement("span");t.className="modal-pill",t.textContent=e,o.appendChild(t)});_.classList.add("active"),S()}(t)),V.appendChild(o)})}(Z)}catch(e){console.error("Error loading projects:",e)}}(),document.addEventListener("pointermove",e=>{const t=e.target.closest(".glow-container");if(t){t.querySelectorAll(".glow-card").forEach(t=>{const o=t.getBoundingClientRect();t.style.setProperty("--x",e.clientX-o.left+"px"),t.style.setProperty("--y",e.clientY-o.top+"px")})}});const K=document.getElementById("contactModal"),ee=document.getElementById("openContactBtn"),te=document.getElementById("contactModalCloseBtn");function oe(){K&&K.classList.remove("active")}ee&&ee.addEventListener("click",function(){K&&(K.classList.add("active"),S())}),te&&te.addEventListener("click",oe),K&&K.addEventListener("click",e=>{(e.target===K||e.target.classList.contains("modal-backdrop"))&&oe()});const ne=document.getElementById("socials"),se=document.getElementById("socialsLine");if(ne&&se){const e=new IntersectionObserver(t=>{t.forEach(t=>{t.isIntersecting&&(se.classList.add("animate"),e.unobserve(t.target))})},{threshold:.5});e.observe(ne)}const ie=document.getElementById("contactForm"),ae=ie?ie.querySelector(".contact-submit-btn"):null;ie&&ae&&ie.addEventListener("submit",function(e){e.preventDefault();const t=ae.textContent;ae.textContent="Sending...",ae.disabled=!0;emailjs.sendForm("service_fklvlrs","template_zjkrkz8",this).then(()=>{alert("Message sent successfully! I will get back to you soon."),ie.reset(),ae.textContent=t,ae.disabled=!1;const e=document.getElementById("contactModalCloseBtn");e&&e.click()}).catch(e=>{console.error("EmailJS Error:",e),alert("Failed to send message. Please try again later or email me directly."),ae.textContent=t,ae.disabled=!1})});[m
\ No newline at end of file[m
[1mdiff --git a/js/index.min.js b/js/index.min.js[m
[1mnew file mode 100644[m
[1mindex 0000000..085bd17[m
[1m--- /dev/null[m
[1m+++ b/js/index.min.js[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mconsole.log("%c⚠ STOP!","color: #ff4444; font-size: 2rem; font-weight: 900; text-shadow: 0 0 8px #ff4444;"),console.log("%cThis is a proprietary, privately-owned portfolio.\n\nAll source code, design, and assets are copyright © 2024–2026 Mosa Moleleki.\nUnauthorised copying, cloning, or reproduction is strictly prohibited.\n\nTo request permission: Molelekishoez@gmail.com\nLicense: https://github.com/Mr-S-U-D-O/personalPortfolioProject/blob/main/LICENSE","color: #ffffff; font-size: 0.9rem; line-height: 1.8; background: #111; padding: 12px 16px; border-left: 4px solid #ff4444; border-radius: 4px;");import*as e from"three";import{DRACOLoader as t}from"three-draco-loader";import{GLTFLoader as o}from"three-gltf-loader";import{CSS3DRenderer as n,CSS3DObject as s}from"three-css-3d-renderer";const i=document.getElementById("splashScreen"),a=(document.getElementById("skeletonLoader"),document.getElementById("quoteContainer")),l=document.getElementById("heroSection"),r=document.getElementById("laptop"),c=document.getElementById("laptop-screen"),d=document.getElementById("screen-content"),m=(window.innerWidth,{laptop:{file:"./models/laptop.glb",init:{position:{x:0,y:-400,z:0},rotation:{x:Math.PI/20,y:0,z:0},scale:{x:50,y:50,z:50},targetY:-70},lidClosedRotationX:Math.PI/2,lidOpenRotationX:0,hasLid:!0,screenCSSOffset:{x:0,y:0,z:0}},iphone:{file:"./models/iphone.glb",init:{position:{x:0,y:-350,z:0},rotation:{x:0,y:Math.PI,z:0},scale:{x:250,y:250,z:250},targetY:45},hasLid:!1,screenCSSOffset:{x:0,y:-45,z:0}}}),u={deviceType:"laptop",geometryFile:null,container:null,mesh:null,scene:null,renderer:null,camera:null},h={container:null,mesh:null,scene:null,renderer:null};let y=null;const p=new Audio("./audio sounds/startup sound.mp3"),g=new Audio("./audio sounds/initial quote appearance sound.mp3"),f=new Audio("./audio sounds/menu open.mp3"),w=new Audio("./audio sounds/button hover.mp3"),v=[p,g,f,w];v.forEach(e=>{e.volume=0,e.load()});const E=document.getElementById("muteToggle"),b=localStorage.getItem("isMuted");let L=null===b||"true"===b;const x=()=>{if(v.forEach(e=>{e.volume=L?0:.2}),E){const e=E.querySelector("i");e&&(e.className=L?"fa-solid fa-volume-xmark":"fa-solid fa-volume-high")}localStorage.setItem("isMuted",L),L||(a.classList.contains("show")&&g.paused&&g.play().catch(e=>console.log("Audio playback resumed:",e)),"none"!==i.style.display&&p.paused&&p.play().catch(e=>console.log("Audio playback resumed:",e)))};x(),E&&E.addEventListener("click",()=>{L=!L,x()});const S=()=>{w.currentTime=0,w.play().catch(e=>console.log("Audio playback prevented:",e))};(async()=>{const e=document.getElementById("github-star-count");if(e)try{const t=await fetch("https://api.github.com/repos/Mr-Shoez/personalPortfolioProject");if(!t.ok)throw new Error("GitHub API response not ok");const o=await t.json();o&&"number"==typeof o.stargazers_count&&(e.textContent=o.stargazers_count)}catch(e){console.error("Error fetching GitHub stars:",e)}})();const I=()=>({height:window.innerHeight,width:window.innerWidth}),C=t=>{"Cube008_2"===t.name?t.material.side=e.FrontSide:"keyboard"===t.name&&(t.material=new e.MeshPhongMaterial({color:1710618,emissive:0,specular:1118481,shininess:100,side:e.FrontSide})),(t.children||[]).forEach(e=>C(e))},B=t=>{y||(y=t);const o=t-y,n=Math.max(0,o-500),s=Math.min(1,n/6e3),d=(p=Math.min(1,s/.15),1-Math.pow(1-p,3));var p;const f=m[u.deviceType].init.position.y,w=m[u.deviceType].init.targetY;u.mesh.base.position.y=f+(w-f)*d;let v=0;s>.15&&(v=Math.max(0,Math.min(1,(s-.15)/.2)));const E=(e=>e<.5?2*e*e:1-Math.pow(-2*e+2,2)/2)(v),b=m[u.deviceType];b.hasLid&&u.mesh.lid&&(u.mesh.lid.rotation.x=b.lidClosedRotationX-(b.lidClosedRotationX-b.lidOpenRotationX)*E);let L=0;s>.6&&(L=Math.max(0,Math.min(1,(s-.6)/.4)));const x=(e=>0===e?0:Math.pow(2,10*e-10))(L),S=window.innerWidth<768?1100:750,I=S-S*x;if(u.camera.position.z=I,u.renderer.render(u.scene,u.camera),h.renderer.render(h.scene,u.camera),(()=>{const t=new e.Vector3,o=new e.Quaternion;u.mesh.screen.matrixWorld.decompose(t,o,new e.Vector3),h.mesh.position.copy(t),h.mesh.quaternion.copy(o);const n=m[u.deviceType];n.hasLid&&h.mesh.rotateOnAxis(new e.Vector3(1,0,0),Math.PI/2*-1),n.screenCSSOffset&&(h.mesh.translateX(n.screenCSSOffset.x),h.mesh.translateY(n.screenCSSOffset.y),h.mesh.translateZ(n.screenCSSOffset.z))})(),s<1)requestAnimationFrame(B);else{const e=document.getElementById("skeletonLoaderClone");e&&e.classList.add("active"),setTimeout(()=>{e&&e.classList.add("fade-out"),setTimeout(()=>{r.style.display="none",c.style.display="none",a.classList.add("show"),g.play().catch(e=>console.log("Audio playback prevented:",e)),setTimeout(()=>{a.classList.add("zoom-into"),setTimeout(()=>{l.classList.add("show"),document.getElementById("globalUi")?.classList.add("show"),document.documentElement.style.overflowY="auto",document.documentElement.style.overflowX="hidden",document.body.style.overflowY="auto",document.body.style.overflowX="hidden",document.documentElement.style.height="auto",document.body.style.height="auto",setTimeout(()=>{i.style.display="none"},1500)},1700)},3500)},800)},2e3)}};let M=!1;const k=()=>{M||(M=!0,(()=>{const e=performance.getEntriesByType("navigation"),t=e.length>0&&"reload"===e[0].type,o="true"===localStorage.getItem("introPlayed"),n="#projects"===window.location.hash&&document.referrer.includes("/projects/"),s="#blog"===window.location.hash&&(document.referrer.includes("/posts/")||document.referrer.includes("articles.html")),i=window.location.hash&&!t;return!t&&o||!t&&(n||s||i)})()?(r.style.display="none",c.style.display="none",a.style.display="none",i.style.display="none",l.classList.add("show"),document.getElementById("globalUi")?.classList.add("show"),document.documentElement.style.overflowY="auto",document.documentElement.style.overflowX="hidden",document.body.style.overflowY="auto",document.body.style.overflowX="hidden",document.documentElement.style.height="auto",document.body.style.height="auto",window.location.hash&&setTimeout(()=>{const e=document.querySelector(window.location.hash);e&&e.scrollIntoView()},100)):(localStorage.setItem("introPlayed","true"),setTimeout(()=>{(async()=>{const e=new o,n=new t;n.setDecoderPath("https://www.gstatic.com/draco/versioned/decoders/1.5.6/"),e.setDRACOLoader(n),u.deviceType=window.innerWidth<768?"iphone":"laptop";const s=m[u.deviceType];u.geometryFile=await e.loadAsync(s.file)})().then(()=>{(()=>{const{height:t,width:o}=I();u.container=r,u.mesh=(()=>{const e=u.geometryFile.scene,t=m[u.deviceType];e.position.set(t.init.position.x,t.init.position.y,t.init.position.z),e.rotation.set(t.init.rotation.x,t.init.rotation.y,t.init.rotation.z),e.scale.set(t.init.scale.x,t.init.scale.y,t.init.scale.z);let o=null,n=null;return t.hasLid?(C(e),o=e.children[0],n=o.children[0].children[2],o.rotation.set(t.lidClosedRotationX,0,0)):(n=e.getObjectByName("Screen"),!n&&e.children.length>0&&(n=e.children[0])),{base:e,lid:o,screen:n}})(),((t,o)=>{const n=t.cloneNode(!0);t.remove();const i=new s(n);o.css3dObject=i,o.add(i);const a=(new e.Box3).setFromObject(o),l=new e.Vector3;a.getSize(l);const r=m[u.deviceType].init.scale.x,c=l.x*r,d=(l.y>l.z?l.y:l.z)*r;n.style.width=`${Math.floor(c)}px`,n.style.height=`${Math.floor(d)}px`,o.material=new e.MeshPhongMaterial({opacity:.15,color:new e.Color(1118481),blending:e.NoBlending});const{max:h,min:y}=o.geometry.boundingBox;o.geometry=new e.BoxGeometry(h.x-y.x,h.y-y.y,h.z-y.z+.2);const p=n.querySelector(".skeleton-loader");p&&(p.id="skeletonLoaderClone")})(d,u.mesh.screen),u.scene=new e.Scene,u.renderer=new e.WebGLRenderer({alpha:!0,antialias:!0}),u.renderer.setPixelRatio(window.devicePixelRatio),u.renderer.setSize(o,t),r.appendChild(u.renderer.domElement),u.camera=new e.PerspectiveCamera(70,o/t,1,1e3),u.camera.position.set(0,0,o<768?1100:750);const i=new e.PointLight(16777215,3.5,0,0);i.position.set(0,700,750);const a=new e.PointLight(16777215,.05,0,0);a.position.set(-300,100,100),u.scene.add(i,a,u.mesh.base),h.container=c,h.mesh=u.mesh.screen.css3dObject,h.scene=new e.Scene,h.renderer=new n,h.renderer.setSize(o,t),h.renderer.domElement.style.position="absolute",h.renderer.domElement.style.top=0,c.appendChild(h.renderer.domElement),h.scene.add(h.mesh)})(),p.play().catch(e=>console.log("Audio playback prevented:",e)),requestAnimationFrame(B)})},500)))};document.addEventListener("readystatechange",e=>{"complete"===e.target.readyState&&k()}),"complete"===document.readyState&&k(),window.addEventListener("resize",()=>{if(u.renderer){const{height:e,width:t}=I();u.camera.aspect=t/e,l.classList.contains("show")||u.camera.position.setZ(t<768?1100:750),u.camera.updateProjectionMatrix(),u.renderer.setSize(t,e),h.renderer.setSize(t,e)}}),function(){const e=document.getElementById("dynamicGreeting");if(!e)return;const t=(new Date).getHours();let o="Good evening";t>=5&&t<12?o="Good morning":t>=12&&t<18&&(o="Good afternoon"),e.textContent=o}();const z=document.getElementById("blurOverlay"),q=document.querySelector(".sidebar-nav");function T(){z&&z.classList.add("active"),f.currentTime=0,f.play().catch(e=>console.log("Audio playback prevented:",e))}function A(){z&&z.classList.remove("active")}document.querySelector(".tech-carousel-wrapper"),q&&(q.addEventListener("mouseenter",T),q.addEventListener("mouseleave",A));const P=document.querySelector(".tech-track");P&&(P.addEventListener("mouseenter",()=>{P.getAnimations().forEach(e=>e.playbackRate=.2)}),P.addEventListener("mouseleave",()=>{P.getAnimations().forEach(e=>e.playbackRate=1)}));const O=document.getElementById("globalTooltip"),j=document.getElementById("globalTooltipText"),R=document.querySelectorAll(".tech-item");O&&R.length>0&&R.forEach(e=>{e.addEventListener("mouseenter",()=>{const t=e.getAttribute("data-tooltip");if(t){j.textContent=t,O.classList.add("visible");const o=e.getBoundingClientRect();O.style.top=o.top-10+"px",O.style.left=o.left+o.width/2+"px"}}),e.addEventListener("mouseleave",()=>{O.classList.remove("visible")})});const F=document.querySelector(".cv-nav");F&&(F.addEventListener("mouseenter",T),F.addEventListener("mouseleave",A)),document.addEventListener("mouseenter",e=>{const t=e.target;t.matches?.("button, a, .tech-item, .bento-item, .nav-link")&&S()},!0),document.addEventListener("themechange",e=>{const t=e.detail.theme,o=document.querySelector(".hero-profile-img");o&&(o.src="light"===t?"my pictures/light mode.webp":"my pictures/dark mode.webp")});const X=document.documentElement.getAttribute("data-theme")||"dark",N=document.querySelector(".hero-profile-img");N&&(N.src="light"===X?"my pictures/light mode.webp":"my pictures/dark mode.webp");const Y=document.getElementById("heroScrollRig"),G=document.getElementById("heroContentGroup");window.addEventListener("scroll",()=>{if(Y&&G){const e=Y.getBoundingClientRect(),t=Y.offsetHeight-window.innerHeight;let o=0;t>0&&(o=Math.max(0,Math.min(1,-e.top/t)));const n=Math.pow(81,o);let s=1;o>.6&&(s=1-(o-.6)/.3,s=Math.max(0,Math.min(1,s))),G.style.transform=`scale(${n})`,G.style.opacity=s;const i=document.querySelector(".tech-carousel-wrapper");if(i){let e=1-2.5*o;i.style.opacity=Math.max(0,e)}}const e=document.querySelectorAll(".st-node, .st-turn"),t=window.innerHeight/2;e.forEach(e=>{const o=e.getBoundingClientRect(),n=(t+50-o.top)/o.height,s=Math.max(0,Math.min(1,n));if(e.classList.contains("st-node")){const t=e.querySelector(".st-v .st-fill");t&&(t.style.transform=`scaleY(${s})`);const o=e.querySelector(".st-dot"),i=e.querySelector(".st-content");n>=.5?(o&&o.classList.add("filled"),i&&i.classList.add("visible")):(o&&o.classList.remove("filled"),i&&i.classList.remove("visible"))}else if(e.classList.contains("st-turn")){const t=e.querySelector(".st-top-left .st-fill")||e.querySelector(".st-top-right .st-fill"),o=e.querySelector(".st-h .st-fill"),n=e.querySelector(".st-bottom-right .st-fill")||e.querySelector(".st-bottom-left .st-fill");let i=s/.2,a=(s-.2)/.6,l=(s-.8)/.2;t&&(t.style.transform=`scaleY(${Math.max(0,Math.min(1,i))})`),o&&(o.style.transform=`scaleX(${Math.max(0,Math.min(1,a))})`),n&&(n.style.transform=`scaleY(${Math.max(0,Math.min(1,l))})`)}})});const D=document.querySelectorAll(".projects-content-group");if(D.length>0){const e=new IntersectionObserver(e=>{e.forEach(e=>{e.isIntersecting?e.target.classList.add("visible"):e.target.classList.remove("visible")})},{threshold:.1});D.forEach(t=>e.observe(t))}const H=document.querySelectorAll(".fade-in-section");if(H.length>0){const e=new IntersectionObserver(t=>{t.forEach(t=>{t.isIntersecting&&(t.target.classList.add("visible"),e.unobserve(t.target))})},{threshold:.1});H.forEach(t=>e.observe(t))}const $=document.querySelectorAll(".blog-gallery-item");if($.length>0){const e=new IntersectionObserver(t=>{t.forEach(t=>{t.isIntersecting&&(t.target.classList.add("visible"),e.unobserve(t.target))})},{threshold:.15,rootMargin:"0px 0px -50px 0px"});$.forEach(t=>e.observe(t))}const W=document.getElementById("bentoGrid"),V=document.getElementById("projectModal"),_=document.getElementById("modalCloseBtn");let U=[];function Z(){V.classList.remove("active")}_&&_.addEventListener("click",Z);const J=document.querySelector(".modal-content-wrapper");J&&J.addEventListener("mouseleave",()=>{setTimeout(()=>{V.matches(":hover")&&Z()},300)}),V&&V.addEventListener("click",e=>{(e.target===V||e.target.classList.contains("modal-backdrop"))&&Z()}),async function(){try{const e=await fetch("./data/projects.json");if(!e.ok)throw new Error("Failed to load projects data");U=await e.json(),function(e){W&&(W.innerHTML="",W.classList.add("glow-container"),e.forEach((e,t)=>{const o=document.createElement("div");o.className=`bento-item glow-card bento-${t+1}`,o.setAttribute("data-index",t);const n=document.createElement("div");n.className="glow-content";const s=document.createElement("img");s.src=e.thumbnail,s.alt=e.title,s.className="bento-img",s.loading="lazy";const i=document.createElement("div");i.className="bento-overlay";const a=document.createElement("h3");a.className="bento-item-title",a.textContent=e.title;const l=document.createElement("span");l.className="bento-item-category",l.textContent=e.category,i.appendChild(a),i.appendChild(l),n.appendChild(s),n.appendChild(i),o.appendChild(n),o.addEventListener("click",()=>function(e){if(!U[e])return;const t=U[e];document.getElementById("modalImage").src=t.fullImage,document.getElementById("modalImage").alt=t.title,document.getElementById("modalCategory").textContent=t.category,document.getElementById("modalTitle").textContent=t.title,document.getElementById("modalDescription").textContent=t.description,t.link?(document.getElementById("modalLink").href=t.link,document.getElementById("modalLink").style.display="inline-flex"):document.getElementById("modalLink").style.display="none";const o=document.getElementById("modalTechStack");o.innerHTML="",t.technologies&&t.technologies.length>0&&t.technologies.forEach(e=>{const t=document.createElement("span");t.className="modal-pill",t.textContent=e,o.appendChild(t)}),V.classList.add("active"),S()}(t)),W.appendChild(o)}))}(U)}catch(e){console.error("Error loading projects:",e)}}(),document.addEventListener("pointermove",e=>{const t=e.target.closest(".glow-container");t&&t.querySelectorAll(".glow-card").forEach(t=>{const o=t.getBoundingClientRect();t.style.setProperty("--x",e.clientX-o.left+"px"),t.style.setProperty("--y",e.clientY-o.top+"px")})});const Q=document.getElementById("contactModal"),K=document.getElementById("openContactBtn"),ee=document.getElementById("contactModalCloseBtn");function te(){Q&&Q.classList.remove("active")}K&&K.addEventListener("click",function(){Q&&(Q.classList.add("active"),S())}),ee&&ee.addEventListener("click",te),Q&&Q.addEventListener("click",e=>{(e.target===Q||e.target.classList.contains("modal-backdrop"))&&te()});const oe=document.getElementById("socials"),ne=document.getElementById("socialsLine");if(oe&&ne){const e=new IntersectionObserver(t=>{t.forEach(t=>{t.isIntersecting&&(ne.classList.add("animate"),e.unobserve(t.target))})},{threshold:.5});e.observe(oe)}const se=document.getElementById("contactForm"),ie=se?se.querySelector(".contact-submit-btn"):null;se&&ie&&se.addEventListener("submit",function(e){e.preventDefault();const t=ie.textContent;ie.textContent="Sending...",ie.disabled=!0,emailjs.sendForm("service_fklvlrs","template_zjkrkz8",this).then(()=>{alert("Message sent successfully! I will get back to you soon."),se.reset(),ie.textContent=t,ie.disabled=!1;const e=document.getElementById("contactModalCloseBtn");e&&e.click()}).catch(e=>{console.error("EmailJS Error:",e),alert("Failed to send message. Please try again later or email me directly."),ie.textContent=t,ie.disabled=!1})});[m
\ No newline at end of file[m
[1mdiff --git a/js/theme.js b/js/theme.js[m
[1mindex 570d1e2..043d75a 100644[m
[1m--- a/js/theme.js[m
[1m+++ b/js/theme.js[m
[36m@@ -1,112 +1 @@[m
[31m-/**[m
[31m- * theme.js — Universal Theme System[m
[31m- * ============================================================[m
[31m- * Must be loaded as a regular (non-deferred) <script> in <head>[m
[31m- * so that [data-theme] is applied before first paint (no flash).[m
[31m- *[m
[31m- * localStorage key: 'theme'  ('light' | 'dark')[m
[31m- * ============================================================[m
[31m- */[m
[31m-(function () {[m
[31m-    const STORAGE_KEY = 'theme';[m
[31m-[m
[31m-    // Read saved preference, fall back to OS preference[m
[31m-    function resolveTheme() {[m
[31m-        const saved = localStorage.getItem(STORAGE_KEY);[m
[31m-        if (saved === 'light' || saved === 'dark') return saved;[m
[31m-        return window.matchMedia('(prefers-color-scheme: light)').matches ? 'light' : 'dark';[m
[31m-    }[m
[31m-[m
[31m-    // Apply on documentElement so [data-theme="light"] CSS vars fire instantly[m
[31m-    document.documentElement.setAttribute('data-theme', resolveTheme());[m
[31m-[m
[31m-    // ── detect the path depth so favicon paths resolve correctly ──────────────[m
[31m-    // e.g. root pages: prefix = ''[m
[31m-    //      pages one level in (projects/, posts/): prefix = '../'[m
[31m-    function getFaviconBase(theme) {[m
[31m-        var depth = (window.location.pathname.match(/\//g) || []).length - 1;[m
[31m-        var prefix = depth > 1 ? '../' : '';[m
[31m-        var folder = theme === 'dark' ? 'dark mode favicon' : 'light mode favicon';[m
[31m-        return prefix + 'asserts/' + folder + '/';[m
[31m-    }[m
[31m-[m
[31m-    var _faviconWired = false;[m
[31m-[m
[31m-    function syncFaviconsNow(theme) {[m
[31m-        var base = getFaviconBase(theme);[m
[31m-        var faviconMap = [[m
[31m-            { id: 'favicon-32',    file: 'favicon-32x32.png'    },[m
[31m-            { id: 'favicon-16',    file: 'favicon-16x16.png'    },[m
[31m-            { id: 'favicon-ico',   file: 'favicon.ico'          },[m
[31m-            { id: 'favicon-apple', file: 'apple-touch-icon.png' },[m
[31m-        ];[m
[31m-        faviconMap.forEach(function (f) {[m
[31m-            var el = document.getElementById(f.id);[m
[31m-            if (el) el.href = base + f.file;[m
[31m-        });[m
[31m-    }[m
[31m-[m
[31m-    // Expose a global helper for every page's toggle button[m
[31m-    window.ThemeSystem = {[m
[31m-        KEY: STORAGE_KEY,[m
[31m-[m
[31m-        get: resolveTheme,[m
[31m-[m
[31m-        set: function (themeName) {[m
[31m-            document.documentElement.setAttribute('data-theme', themeName);[m
[31m-            localStorage.setItem(STORAGE_KEY, themeName);[m
[31m-            // Update any theme-toggle button icons on the page[m
[31m-            document.querySelectorAll('[data-theme-toggle]').forEach(function (btn) {[m
[31m-                var icon = btn.querySelector('i');[m
[31m-                if (icon) {[m
[31m-                    icon.className = themeName === 'light' ? 'fa-solid fa-sun' : 'fa-solid fa-moon';[m
[31m-                }[m
[31m-            });[m
[31m-            syncFaviconsNow(themeName);[m
[31m-            // Fire a custom event so any page can react[m
[31m-            document.dispatchEvent(new CustomEvent('themechange', { detail: { theme: themeName } }));[m
[31m-        },[m
[31m-[m
[31m-        toggle: function () {[m
[31m-            var current = document.documentElement.getAttribute('data-theme') || 'dark';[m
[31m-            window.ThemeSystem.set(current === 'dark' ? 'light' : 'dark');[m
[31m-        },[m
[31m-[m
[31m-        // Call once per page (or rely on the auto-init below)[m
[31m-        init: function () {[m
[31m-            var theme = document.documentElement.getAttribute('data-theme') || 'dark';[m
[31m-[m
[31m-            // Wire every toggle button — guard against double-binding[m
[31m-            document.querySelectorAll('[data-theme-toggle], .theme-toggle').forEach(function (btn) {[m
[31m-                // Ensure the attribute is present so set() can find the icon later[m
[31m-                btn.setAttribute('data-theme-toggle', '');[m
[31m-                // Update icon to match current theme[m
[31m-                var icon = btn.querySelector('i');[m
[31m-                if (icon) {[m
[31m-                    icon.className = theme === 'light' ? 'fa-solid fa-sun' : 'fa-solid fa-moon';[m
[31m-                }[m
[31m-                // Guard: don't bind twice[m
[31m-                if (btn.dataset.themeWired) return;[m
[31m-                btn.dataset.themeWired = 'true';[m
[31m-                btn.addEventListener('click', function () {[m
[31m-                    window.ThemeSystem.toggle();[m
[31m-                });[m
[31m-            });[m
[31m-[m
[31m-            // Favicon sync (only register the listener once per page load)[m
[31m-            syncFaviconsNow(theme);[m
[31m-            if (!_faviconWired) {[m
[31m-                _faviconWired = true;[m
[31m-                document.addEventListener('themechange', function (e) {[m
[31m-                    syncFaviconsNow(e.detail.theme);[m
[31m-                });[m
[31m-            }[m
[31m-        }[m
[31m-    };[m
[31m-[m
[31m-    // Auto-init when DOM is ready — covers every page without needing manual init() calls[m
[31m-    document.addEventListener('DOMContentLoaded', function () {[m
[31m-        window.ThemeSystem.init();[m
[31m-    });[m
[31m-[m
[31m-})();[m
[32m+[m[32m!function(){const e="theme";function t(){const t=localStorage.getItem(e);return"light"===t||"dark"===t?t:window.matchMedia("(prefers-color-scheme: light)").matches?"light":"dark"}document.documentElement.setAttribute("data-theme",t());var n=!1;function o(e){var t=function(e){return((window.location.pathname.match(/\//g)||[]).length-1>1?"../":"")+"asserts/"+("dark"===e?"dark mode favicon":"light mode favicon")+"/"}(e);[{id:"favicon-32",file:"favicon-32x32.png"},{id:"favicon-16",file:"favicon-16x16.png"},{id:"favicon-ico",file:"favicon.ico"},{id:"favicon-apple",file:"apple-touch-icon.png"}].forEach(function(e){var n=document.getElementById(e.id);n&&(n.href=t+e.file)})}window.ThemeSystem={KEY:e,get:t,set:function(t){document.documentElement.setAttribute("data-theme",t),localStorage.setItem(e,t),document.querySelectorAll("[data-theme-toggle]").forEach(function(e){var n=e.querySelector("i");n&&(n.className="light"===t?"fa-solid fa-sun":"fa-solid fa-moon")}),o(t),document.dispatchEvent(new CustomEvent("themechange",{detail:{theme:t}}))},toggle:function(){var e=document.documentElement.getAttribute("data-theme")||"dark";window.ThemeSystem.set("dark"===e?"light":"dark")},init:function(){var e=document.documentElement.getAttribute("data-theme")||"dark";document.querySelectorAll("[data-theme-toggle], .theme-toggle").forEach(function(t){t.setAttribute("data-theme-toggle","");var n=t.querySelector("i");n&&(n.className="light"===e?"fa-solid fa-sun":"fa-solid fa-moon"),t.dataset.themeWired||(t.dataset.themeWired="true",t.addEventListener("click",function(){window.ThemeSystem.toggle()}))}),o(e),n||(n=!0,document.addEventListener("themechange",function(e){o(e.detail.theme)}))}},document.addEventListener("DOMContentLoaded",function(){window.ThemeSystem.init()})}();[m
\ No newline at end of file[m
[1mdiff --git a/js/theme.min.js b/js/theme.min.js[m
[1mnew file mode 100644[m
[1mindex 0000000..043d75a[m
[1m--- /dev/null[m
[1m+++ b/js/theme.min.js[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m!function(){const e="theme";function t(){const t=localStorage.getItem(e);return"light"===t||"dark"===t?t:window.matchMedia("(prefers-color-scheme: light)").matches?"light":"dark"}document.documentElement.setAttribute("data-theme",t());var n=!1;function o(e){var t=function(e){return((window.location.pathname.match(/\//g)||[]).length-1>1?"../":"")+"asserts/"+("dark"===e?"dark mode favicon":"light mode favicon")+"/"}(e);[{id:"favicon-32",file:"favicon-32x32.png"},{id:"favicon-16",file:"favicon-16x16.png"},{id:"favicon-ico",file:"favicon.ico"},{id:"favicon-apple",file:"apple-touch-icon.png"}].forEach(function(e){var n=document.getElementById(e.id);n&&(n.href=t+e.file)})}window.ThemeSystem={KEY:e,get:t,set:function(t){document.documentElement.setAttribute("data-theme",t),localStorage.setItem(e,t),document.querySelectorAll("[data-theme-toggle]").forEach(function(e){var n=e.querySelector("i");n&&(n.className="light"===t?"fa-solid fa-sun":"fa-solid fa-moon")}),o(t),document.dispatchEvent(new CustomEvent("themechange",{detail:{theme:t}}))},toggle:function(){var e=document.documentElement.getAttribute("data-theme")||"dark";window.ThemeSystem.set("dark"===e?"light":"dark")},init:function(){var e=document.documentElement.getAttribute("data-theme")||"dark";document.querySelectorAll("[data-theme-toggle], .theme-toggle").forEach(function(t){t.setAttribute("data-theme-toggle","");var n=t.querySelector("i");n&&(n.className="light"===e?"fa-solid fa-sun":"fa-solid fa-moon"),t.dataset.themeWired||(t.dataset.themeWired="true",t.addEventListener("click",function(){window.ThemeSystem.toggle()}))}),o(e),n||(n=!0,document.addEventListener("themechange",function(e){o(e.detail.theme)}))}},document.addEventListener("DOMContentLoaded",function(){window.ThemeSystem.init()})}();[m
\ No newline at end of file[m
[1mdiff --git a/posts/features-integration.html b/posts/features-integration.html[m
[1mindex eedc44b..0609c2d 100644[m
[1m--- a/posts/features-integration.html[m
[1m+++ b/posts/features-integration.html[m
[36m@@ -53,11 +53,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="https://www.sudo.co.za/my pictures/blog_multilingual.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/blog-post.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/blog-post.min.css">[m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 </head>[m
 <body class="blog-post-page">[m
 [m
[1mdiff --git a/posts/multilingual-websites.html b/posts/multilingual-websites.html[m
[1mindex 6a42798..cbb423a 100644[m
[1m--- a/posts/multilingual-websites.html[m
[1m+++ b/posts/multilingual-websites.html[m
[36m@@ -53,11 +53,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="https://www.sudo.co.za/my pictures/blog_features.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/blog-post.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/blog-post.min.css">[m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 </head>[m
 <body class="blog-post-page">[m
 [m
[1mdiff --git a/posts/online-feedbacks.html b/posts/online-feedbacks.html[m
[1mindex ec0b4d8..bbca36c 100644[m
[1m--- a/posts/online-feedbacks.html[m
[1m+++ b/posts/online-feedbacks.html[m
[36m@@ -53,11 +53,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="https://www.sudo.co.za/my pictures/blog_feedback.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/blog-post.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/blog-post.min.css">[m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 </head>[m
 <body class="blog-post-page">[m
 [m
[1mdiff --git a/projects/ai-image-gen.html b/projects/ai-image-gen.html[m
[1mindex 50c79a0..1e141f8 100644[m
[1m--- a/projects/ai-image-gen.html[m
[1m+++ b/projects/ai-image-gen.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/ai_image_gen.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/e-commerce-platform.html b/projects/e-commerce-platform.html[m
[1mindex 68a876b..d19bcf8 100644[m
[1m--- a/projects/e-commerce-platform.html[m
[1m+++ b/projects/e-commerce-platform.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/ecommerce_platform.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/finance-dashboard.html b/projects/finance-dashboard.html[m
[1mindex 5c22acc..2902032 100644[m
[1m--- a/projects/finance-dashboard.html[m
[1m+++ b/projects/finance-dashboard.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/finance_dashboard.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/portfolio-v1.html b/projects/portfolio-v1.html[m
[1mindex 2c0b2eb..b23779c 100644[m
[1m--- a/projects/portfolio-v1.html[m
[1m+++ b/projects/portfolio-v1.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/portfolio_v1.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/smart-home-iot.html b/projects/smart-home-iot.html[m
[1mindex 9e31bef..67b09b8 100644[m
[1m--- a/projects/smart-home-iot.html[m
[1m+++ b/projects/smart-home-iot.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/smart_home_iot.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/social-media-app.html b/projects/social-media-app.html[m
[1mindex 13c3231..7e5c63e 100644[m
[1m--- a/projects/social-media-app.html[m
[1m+++ b/projects/social-media-app.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/social_media.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/task-manager.html b/projects/task-manager.html[m
[1mindex eeaa9e4..4012697 100644[m
[1m--- a/projects/task-manager.html[m
[1m+++ b/projects/task-manager.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/task_manager.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/projects/travel-blog.html b/projects/travel-blog.html[m
[1mindex e013a77..a31b043 100644[m
[1m--- a/projects/travel-blog.html[m
[1m+++ b/projects/travel-blog.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="my pictures/travel_blog.png">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/scripts/blog-template.html b/scripts/blog-template.html[m
[1mindex 9073000..758067e 100644[m
[1m--- a/scripts/blog-template.html[m
[1m+++ b/scripts/blog-template.html[m
[36m@@ -31,11 +31,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="{{OG_IMAGE}}">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/blog-post.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/blog-post.min.css">[m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 </head>[m
 <body class="blog-post-page">[m
 [m
[1mdiff --git a/scripts/build.js b/scripts/build.js[m
[1mindex 155cd2f..442bd79 100644[m
[1m--- a/scripts/build.js[m
[1m+++ b/scripts/build.js[m
[36m@@ -1,6 +1,8 @@[m
 const fs = require('fs');[m
 const path = require('path');[m
 const { marked } = require('marked');[m
[32m+[m[32mconst CleanCSS = require('clean-css');[m
[32m+[m[32mconst terser = require('terser');[m
 [m
 // Configuration[m
 const BASE_URL = 'https://www.sudo.co.za'; // Adjust this when deploying[m
[36m@@ -240,11 +242,11 @@[m [mconst articlesHTML = `<!DOCTYPE html>[m
     <meta property="og:type" content="website">[m
     <meta property="og:url" content="https://www.sudo.co.za/articles.html">[m
     <meta property="og:title" content="All Articles | Mosa Moleleki">[m
[31m-    <link rel="stylesheet" href="css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/style.min.css">[m
     <link rel="stylesheet" href="css/all.min.css">[m
[31m-    <link rel="stylesheet" href="css/blog.css">[m
[32m+[m[32m    <link rel="stylesheet" href="css/blog.min.css">[m
     <!-- Universal Theme System (non-deferred to prevent flash) -->[m
[31m-    <script src="js/theme.js"><\/script>[m
[32m+[m[32m    <script src="js/theme.min.js"><\/script>[m
 </head>[m
 <body>[m
     <!-- Theme Toggle -->[m
[36m@@ -534,8 +536,8 @@[m [mlet htmlContent = `<!DOCTYPE html>[m
     <link href="https://fonts.googleapis.com/css2?family=Fira+Code:wght@400;500&family=Inter:wght@300;400;500;600;700&display=swap" rel="stylesheet">[m
     [m
     <!-- Global Styles -->[m
[31m-    <link rel="stylesheet" href="/css/style.css">[m
[31m-    <link rel="stylesheet" href="/css/blog.css">[m
[32m+[m[32m    <link rel="stylesheet" href="/css/style.min.css">[m
[32m+[m[32m    <link rel="stylesheet" href="/css/blog.min.css">[m
     [m
     <style>[m
         /* Sitemap Specific Overrides */[m
[36m@@ -735,4 +737,49 @@[m [mtry {[m
     console.error('Error generating sitemap.html:', err);[m
 }[m
 [m
[31m-console.log('Unified build process completed entirely.');[m
[32m+[m[32m// ==========================================[m
[32m+[m[32m// 8. Minify CSS & JS[m
[32m+[m[32m// ==========================================[m
[32m+[m[32mconsole.log('Starting minification process...');[m
[32m+[m
[32m+[m[32masync function minifyFiles() {[m
[32m+[m[32m    const cssDir = path.join(__dirname, '../css');[m
[32m+[m[32m    const jsDir = path.join(__dirname, '../js');[m
[32m+[m
[32m+[m[32m    // Minify CSS[m
[32m+[m[32m    if (fs.existsSync(cssDir)) {[m
[32m+[m[32m        const cssFiles = fs.readdirSync(cssDir).filter(f => f.endsWith('.min.css') && !f.endsWith('.min.css'));[m
[32m+[m[32m        cssFiles.forEach(file => {[m
[32m+[m[32m            const inputPath = path.join(cssDir, file);[m
[32m+[m[32m            const minPath = path.join(cssDir, file.replace(/\.css$/, '.min.css'));[m
[32m+[m[32m            try {[m
[32m+[m[32m                const inputCss = fs.readFileSync(inputPath, 'utf8');[m
[32m+[m[32m                const output = new CleanCSS({}).minify(inputCss);[m
[32m+[m[32m                fs.writeFileSync(minPath, output.styles, 'utf8');[m
[32m+[m[32m                console.log(`Minified CSS: ${file} -> ${path.basename(minPath)}`);[m
[32m+[m[32m            } catch (err) {[m
[32m+[m[32m                console.error(`Error minifying ${file}:`, err);[m
[32m+[m[32m            }[m
[32m+[m[32m        });[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    // Minify JS[m
[32m+[m[32m    if (fs.existsSync(jsDir)) {[m
[32m+[m[32m        const jsFiles = fs.readdirSync(jsDir).filter(f => f.endsWith('.min.js') && !f.endsWith('.min.js'));[m
[32m+[m[32m        for (const file of jsFiles) {[m
[32m+[m[32m            const inputPath = path.join(jsDir, file);[m
[32m+[m[32m            const minPath = path.join(jsDir, file.replace(/\.js$/, '.min.js'));[m
[32m+[m[32m            try {[m
[32m+[m[32m                const inputJs = fs.readFileSync(inputPath, 'utf8');[m
[32m+[m[32m                const output = await terser.minify(inputJs, { module: file === 'index.min.js' });[m
[32m+[m[32m                fs.writeFileSync(minPath, output.code, 'utf8');[m
[32m+[m[32m                console.log(`Minified JS: ${file} -> ${path.basename(minPath)}`);[m
[32m+[m[32m            } catch (err) {[m
[32m+[m[32m                console.error(`Error minifying ${file}:`, err);[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m    console.log('Unified build process completed entirely.');[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mminifyFiles();[m
[1mdiff --git a/scripts/project-template.html b/scripts/project-template.html[m
[1mindex 461c0a8..1b678e7 100644[m
[1m--- a/scripts/project-template.html[m
[1m+++ b/scripts/project-template.html[m
[36m@@ -18,11 +18,11 @@[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js" as="script">[m
     <link rel="preload" href="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/ScrollTrigger.min.js" as="script">[m
     <link rel="preload" as="image" href="{{FULL_IMAGE}}">[m
[31m-    <link rel="stylesheet" href="../css/style.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/style.min.css">[m
     <link rel="stylesheet" href="../css/all.min.css">[m
[31m-    <link rel="stylesheet" href="../css/project.css">[m
[32m+[m[32m    <link rel="stylesheet" href="../css/project.min.css">[m
     <!-- Universal Theme System (must be non-deferred to prevent flash) -->[m
[31m-    <script src="../js/theme.js"></script>[m
[32m+[m[32m    <script src="../js/theme.min.js"></script>[m
 [m
     <!-- GSAP for scroll animations -->[m
     <script defer src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.2/gsap.min.js"></script>[m
[1mdiff --git a/scripts/update_links.js b/scripts/update_links.js[m
[1mnew file mode 100644[m
[1mindex 0000000..f1b7c53[m
[1m--- /dev/null[m
[1m+++ b/scripts/update_links.js[m
[36m@@ -0,0 +1,39 @@[m
[32m+[m[32mconst fs = require('fs');[m
[32m+[m[32mconst path = require('path');[m
[32m+[m
[32m+[m[32mconst projectDir = path.join(__dirname, '..');[m
[32m+[m[32mconst filesToProcess = [[m
[32m+[m[32m    'index.html',[m
[32m+[m[32m    'about.html',[m
[32m+[m[32m    '404.html',[m
[32m+[m[32m    'scripts/blog-template.html',[m
[32m+[m[32m    'scripts/project-template.html',[m
[32m+[m[32m    'scripts/build.js'[m
[32m+[m[32m];[m
[32m+[m
[32m+[m[32mfilesToProcess.forEach(file => {[m
[32m+[m[32m    const fullPath = path.join(projectDir, file);[m
[32m+[m[32m    if (!fs.existsSync(fullPath)) return;[m
[32m+[m[41m    [m
[32m+[m[32m    let content = fs.readFileSync(fullPath, 'utf8');[m
[32m+[m[41m    [m
[32m+[m[32m    // Replace .css" or .css' with .min.css" or .min.css' (avoiding .min.min.css)[m
[32m+[m[32m    content = content.replace(/(?<!\.min)\.css(['"])/g, '.min.css$1');[m
[32m+[m[41m    [m
[32m+[m[32m    // Replace .js" or .js' with .min.js" or .min.js'[m
[32m+[m[32m    content = content.replace(/(?<!\.min)\.js(['"])/g, '.min.js$1');[m
[32m+[m[41m    [m
[32m+[m[32m    // In build.js we don't want to replace the string replacements inside logic[m[41m [m
[32m+[m[32m    // BUT we already fixed build.js minification logic earlier.[m[41m [m
[32m+[m[32m    // Wait, build.js has logic like replace(/\.css$/) ![m
[32m+[m[32m    // Let's only replace inside html or quotes if it follows css/ or js/[m
[32m+[m[32m    // Actually, a safer regex for HTML and build.js injected HTML:[m
[32m+[m[41m    [m
[32m+[m[32m    content = content.replace(/href=(["'])([^"']*\/css\/[^"']+(?<!\.min))\.css\1/g, 'href=$1$2.min.css$1');[m
[32m+[m[32m    content = content.replace(/href=(["'])(css\/[^"']+(?<!\.min))\.css\1/g, 'href=$1$2.min.css$1');[m
[32m+[m[32m    content = content.replace(/src=(["'])([^"']*\/js\/[^"']+(?<!\.min))\.js\1/g, 'src=$1$2.min.js$1');[m
[32m+[m[32m    content = content.replace(/src=(["'])(js\/[^"']+(?<!\.min))\.js\1/g, 'src=$1$2.min.js$1');[m
[32m+[m[41m    [m
[32m+[m[32m    fs.writeFileSync(fullPath, content, 'utf8');[m
[32m+[m[32m    console.log(`Updated links in ${file}`);[m
[32m+[m[32m});[m
[1mdiff --git a/sitemap.html b/sitemap.html[m
[1mindex 17d94bc..b285c77 100644[m
[1m--- a/sitemap.html[m
[1m+++ b/sitemap.html[m
[36m@@ -9,8 +9,8 @@[m
     <link href="https://fonts.googleapis.com/css2?family=Fira+Code:wght@400;500&family=Inter:wght@300;400;500;600;700&display=swap" rel="stylesheet">[m
     [m
     <!-- Global Styles -->[m
[31m-    <link rel="stylesheet" href="/css/style.css">[m
[31m-    <link rel="stylesheet" href="/css/blog.css">[m
[32m+[m[32m    <link rel="stylesheet" href="/css/style.min.css">[m
[32m+[m[32m    <link rel="stylesheet" href="/css/blog.min.css">[m
     [m
     <style>[m
         /* Sitemap Specific Overrides */[m
