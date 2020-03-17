CC=g++
CFLAGS=-std=c++11 -lglut -lGL -g
OPENGL = `pkg-config opengl --cflags --libs`
LIBS = $(OPENGL)

pong: helper.cpp pong.cpp
	$(CC) -o pong helper.cpp pong.cpp $(CFLAGS)

#train: helper.cpp trainer.cpp trainer.hpp
#	$(CC) -o trainer helper.cpp trainer.cpp $(CFLAGS) 

all: pong #train

clean: 
	rm -f pong #train
