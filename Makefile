CC=g++
FLAGS=-std=c++17 -Wall -Werror
IN=cradle.cpp cradle.h
OUT=program.exe

all: build run clean

build:
	${CC} -o ${OUT} ${IN} ${FLAGS}

run:
	./${OUT}

clean:
	rm -f ${OUT}
