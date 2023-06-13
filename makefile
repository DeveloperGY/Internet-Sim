make: build run

build:
	g++ src/*.cpp -o bin/run

run:
	./bin/run