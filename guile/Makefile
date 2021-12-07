# Basic Makefile for the tortoise package.

CFLAGS =
LIBS =

.PHONY: clean build run

build: tortoise

clean:
	rm -f tortoise tortoise.o

run: tortoise
	./tortoise

tortoise: tortoise.o
	gcc $< -o $@ $(LIBS)

tortoise.o: tortoise.c clean
	gcc -c $< -o $@ $(CFLAGS)
