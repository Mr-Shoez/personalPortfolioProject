## Overview
A community-focused social application designed to bring localized groups together. The app solves the problem of decentralized communication in local communities by providing a unified cross-platform hub for instant messaging, event planning, and a live engagement feed. It focuses on privacy and intuitive UI patterns.

> [!CAUTION] The Challenge
> Creating a flawlessly smooth infinite feed scrolling experience on lower-end Android devices. Furthermore, implementing reliable offline-first capabilities for instant messaging required complex data synchronization strategies.

> [!TIP] The Solution
> Utilized React Native's FlatList with extensive memory optimization, pre-caching images, and windowing techniques. For the offline-first experience, I integrated Firebase Firestore's offline persistence combined with Redux to handle optimistic UI updates, ensuring messages appear instantly even with a spotty connection.
