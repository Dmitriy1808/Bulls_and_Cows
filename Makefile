CC = gcc
CFLAGS = -Wall -Werror -std=c99

OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD_SRC = mkdir -p build/src
MKDIR_BUILD_TEST = mkdir -p build/test

.PHONY: clean test

default: bin/final_product

test: bin/test
	$<

bin/test: build/test/main.o build/src/input.o build/src/bulls.o build/src/cows.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/test/main.o: test/main.c thirdparty/ctest.h
	$(MKDIR_BUILD_TEST)
	$(OBJ) -I thirdparty -I src

bin/final_product: build/src/input.o build/src/generation.o build/src/start.o build/src/game.o build/src/bulls.o build/src/cows.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/src/input.o: src/input.c src/input.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/generation.o: src/generation.c src/generation.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/start.o: src/start.c src/start.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/game.o: src/game.c src/game.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/bulls.o: src/bulls.c src/bulls.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/cows.o: src/cows.c src/cows.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

clean:
	rm -rf bin build
