# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h cothran16.o cothran16.h
	$(CC) -o robots.out main.c robot.o cothran16.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

cothran16.o:	cothran16.c cothran16.h
	$(CC) -c cothran16.c
