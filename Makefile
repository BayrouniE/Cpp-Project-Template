.PHONY: all
all: format build

.PHONY: format
format:
	clang-format src/*.cpp src/*/*.cpp src/*/*.hpp tests/*.cpp  -i

.PHONY: build
build:
	mkdir -p build
	cd build && \
	cmake .. && \
	make

.PHONY: debug
debug:
	mkdir -p build
	cd build && \
	cmake -DCMAKE_BUILD_TYPE=debug .. && \
	make

.PHONY: clean
clean:
	rm -rf build
