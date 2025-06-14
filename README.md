# Rin - A Modern Galgame Engine

Rin is a lightweight, high-performance galgame engine built with modern C++ technologies. Combining Dawn's next-generation graphics capabilities with EnTT's powerful Entity-Component-System architecture, Rin provides a robust foundation for visual novel development. Featuring Lua scripting easily, Rin offers developers familiar tools with modern performance.

## Key Features

- **DirectMedia Layer**: Powered by [SDL3](https://www.libsdl.org/)
- **Entity-Component-System Core**: Efficient game object management via [EnTT](https://github.com/skypjack/entt)
- **Lua Scripting**: Workflow with Lua 5.4+ for game logic
- **Cross-Platform**: Native support for Windows, macOS, and Linux
- **Live Reload**: Hot-reloading of assets and scripts during development
- **Multimedia Support**:
  - Audio playback (WAV/MP3/OGG)
  - Video playback (WebM/MP4)
  - Image formats (PNG/JPG/WEBP)
- **Text Rendering**: Advanced text layout with multilingual support
- **Save System**: Automatic save management with screenshot thumbnails

## Getting Started

### Prerequisites
- C++20 compatible compiler (GCC 12+, Clang 15+, MSVC 2022+)
- CMake 3.20+
- Lua 5.4 development files


## Scripting Capabilities

### Core Functionality
- Game lifecycle hooks (`init()`, `update()`, etc.)
- Entity management through ECS
- Resource loading and management
- Input handling system
- Scene transitions and effects
- Animation system

### Visual Novel Features
- Character management with expressions
- Dialog system with text effects
- Choice selection interface
- Background transitions
- Special effects (fades, shakes, etc.)

## Toolchain

- **Asset Packager**: Bundle game resources into optimized packages
- **Script Debugger**: Integrated Lua debugging support
- **Performance Profiler**: Real-time performance metrics
- **Scene Editor**: Visual scene composition (under development)

## License

Rin is released under the **MIT License**. See [LICENSE](LICENSE) for full details.

```
Copyright (c) 2025 yxlr233

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## Acknowledgements

- Google Dawn team for the graphics abstraction layer
- EnTT maintainers for the ECS library
- Lua community for the versatile scripting language
- Kirikiri engine for workflow inspiration

---

**Start creating your visual novels today!** ✨
