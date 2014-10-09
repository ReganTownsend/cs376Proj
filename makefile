# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o townsenr17.o robot.h townsenr17.h
	$(CC) -o robots.out main.c robot.o townsenr17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

townsenr17.o:	townsenr17.c townsenr17.h
	$(CC) -c townsenr17.c
