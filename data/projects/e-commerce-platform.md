## Overview
The E-Commerce Platform project aimed to redefine the standard online shopping experience by introducing an immersive, interactive 3D product viewing feature. Traditional 2D image galleries lack the depth needed for high-ticket items. This platform solves the problem of online purchase hesitation by allowing users to inspect products from every angle in real-time before adding them to their cart, all while maintaining lightning-fast performance and a seamless checkout flow.

> [!CAUTION] The Challenge
> The primary challenge was integrating heavy 3D rendering capabilities (Three.js) within a React-based frontend without degrading page load times or mobile performance. Additionally, synchronizing the complex state of a 3D canvas with standard UI components (like the shopping cart or variants selector) posed significant architectural hurdles.

> [!TIP] The Solution
> I leveraged React Three Fiber to declaratively manage 3D components and optimize rendering loops. By utilizing DRACO compression for geometries and aggressively lazy-loading textures, load times were reduced by 60%. State synchronization was achieved by abstracting the cart logic into a global Zustand store, creating a seamless bridge between the immersive canvas and the 2D interface.
