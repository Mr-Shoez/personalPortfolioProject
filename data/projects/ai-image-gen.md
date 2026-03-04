## Overview
A web-based interface providing seamless access to advanced generative AI image models. The project solves the accessibility barrier of AI generation by wrapping complex command-line parameters and GPU clustering into a surprisingly simple, beautiful web UI where users can type prompts and receive high-fidelity images in seconds.

> [!CAUTION] The Challenge
> Managing long-running autonomous server tasks without losing the client connection or providing a poor UX. Communicating inference progress back to the user in a meaningful way while handling high-throughput GPU queue scheduling.

> [!TIP] The Solution
> Architected an asynchronous worker queue utilizing FastAPI and Celery. The React frontend implements a polling mechanism and WebSocket fallback that visually displays generation progress through a mesmerizing loading animation. This prevents user drop-off during the 10-20 second inference windows and ensures stable server degradation under load.
