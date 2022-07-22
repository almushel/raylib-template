# Raylib Template

A minimalist CMake project that builds and links a local [raylib](https://github.com/raysan5/raylib) directory and a simple program that opens a window and clears it to gray.

It assumes there is a raylib folder at the same level as the project. Either clone the repository or unzip a release, then update `RAYLIB_DIR` in `src/CMakeLists` to point to it.

To generate the make files, run `config.bat`. There's nothing special in there.

Switch to the `bin` folder and run `make` or `nmake`.