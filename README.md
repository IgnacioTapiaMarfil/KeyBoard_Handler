# KeyBoard_Handler
---
A basic keyboard handler system based in messages.

---

This project implements a simple yet scalable system to manage keyboard inputs using SDL events. Instead of handling inputs directly in the game logic, it decouples them using a message dispatcher, which sends input messages to registered listeners.

Additionally, a message pool is used to efficiently manage memory for messages, avoiding unnecessary allocations and improving performance.

This design allows for better separation of concerns and makes it easier to extend, refactor, or scale input-related behavior in larger systems.
