# Overview

This is a template for c++ Project.

# Structure

``` text
├── CMakeLists.txt
├── LICENSE
├── README.md
├── Makefile
├── .gitignore
├── .clang-format
├── docs
│   ├── ...
│
├── tests
│   ├── CMakeLists.txt
│   └── test_main.cpp
└── src
    ├── CMakesLists.txt
    ├── main.cpp
    ├── lib
        ├── CMakesLists.txt
        ├── my_lib.hpp
        ├── my_lib.cpp
        ├── ...
   
   
```

# Make 
The Makefile has four targers:
* `build` compiles the source code and fenerates an executable.
* `format` applies "clangformat" to style the source code.
* `debug` compiles the source code and generates an excutable, including debugging symbols.
* `clean` deletes the "build" directory, including all of build artifacts.

# Instructions

1. clone the project repository: `https://github.com/BayrouniE/Cpp-Project-Template.git`     
2. Build the project: `make build`
3. Run the resulting unit_tests: `./build/tests/unit_tests`
4. Run the resulting App: `./build/src/App`