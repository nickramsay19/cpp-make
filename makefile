all: main

main: build/main.o build/dog.o
	 g++ -o main build/main.o build/dog.o

build/main.o: src/main.cpp
	 gcc -o build/main.o -c src/main.cpp

build/dog.o: src/dog.cpp
	gcc -o build/dog.o -c src/dog.cpp

clean:
	 rm main build/main.o build/funcs.o build/dog.o
