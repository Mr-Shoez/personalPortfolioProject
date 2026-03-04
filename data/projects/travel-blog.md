## Overview
A visually stunning, content-first travel blog built to handle massive amounts of high-resolution photography without compromising speed. The project aimed to solve the poor Core Web Vitals often seen on media-heavy blogs, providing an SEO-optimized architecture that delivers a magazine-like reading experience on the web.

> [!CAUTION] The Challenge
> Serving dozens of high-res images per post while maintaining a perfect Google Lighthouse score. The architectural challenge was building a flexible CMS schema that allowed for complex, editorial-style article layouts rather than standard linear text blocks.

> [!TIP] The Solution
> Leveraged Next.js Static Site Generation (SSG) in combination with an edge-caching CDN. I implemented progressive image loading with blurred placeholders and the native `<picture>` element for responsive art direction. A Headless CMS (GraphQL) was integrated, allowing editors to compose dynamic page blocks directly.
