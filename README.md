# googletest-circleci
[![Circle CI](https://circleci.com/gh/tjun/googletest-circleci.svg?style=svg)](https://circleci.com/gh/tjun/googletest-circleci)


This repo shows how to test C++ code with googletest on Circle CI.

[google/googletest: Google Test](https://github.com/google/googletest)

## Test C++ code on Circle CI

see circle.yml. you can see how to run gtest on circle ci.

## Manual test with google-test

### get gtest from repo.

```
git submodule init
git submodule update
```

### Build gtest

#### OSX(yosemite)

```
CXX=/usr/bin/clang++ CC=/usr/bin/clang ./configure 'CXXFLAGS=-std=c++11 -stdlib=libc++'
CXX=/usr/bin/clang++ CC=/usr/bin/clang make
```

#### Ubuntu14.04

```
sudo apt-get install cmake
mkdir build
cd build
cmake ..
make
```

### Build test

```
cd make
make
make test
```

### run test

```
cd bin
./gtest_myint
```
