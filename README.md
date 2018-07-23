# 1. What This

a vcpkg sample that use gtest

# 2. Precondition

* on Ubuntu 16.04 LTS (WSL)
* installed vcpkg

```
$ ./vcpkg install gtest
$ ./vcpkg list
gtest:x64-linux                                    1.8.0-9          GoogleTest and GoogleMock testing frameworks.
```

# 3. Command

```
$ mkdir build
$ cd build
$ cmake .. "-DCMAKE_TOOLCHAIN_FILE=${VCPKG_ROOT}/vcpkg/scripts/buildsystems/vcpkg.cmake"
$ make
$ ./wsl_vcpkg
```

if you cloned vcpkg in `~/dev`,  `VCPKG_ROOT` will be `/home/<your_name>/dev` and cmake command can be replaced

```
$ cmake "-DCMAKE_TOOLCHAIN_FILE=/home/<your_name>/dev/vcpkg/scripts/buildsystems/vcpkg.cmake"
```

