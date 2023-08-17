# Raylib Template

A minimalist [CMake](https://cmake.org/) project that builds and links a local [raylib](https://github.com/raysan5/raylib) source folder and a simple program that opens a window and clears it to gray.

It assumes there is a `raylib` folder at the same level as the project folder. Either clone the repository or unzip a release and update the value of `RAYLIB_DIR` in `src/CMakeLists` to point to it.

## Build and run

This template is intended to be very simple to build and run out of the box.

### Linux or MacOS

```
bash config.sh
cd bin
make
./game
```

### Windows Makefile:

```
./config
cd bin
nmake
./game
```

### Windows VS Project:

```
./config
cd bin
msbuild game.sln
./game
```

You will need Visual Studio installed for `nmake`, `msbuild`.