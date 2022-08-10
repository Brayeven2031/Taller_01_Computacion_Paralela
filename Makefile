#/**************************************************************************
# * Fecha: 04 - Agosto - 2022
# * Autor: Brayan Stiven Castañeda Cruz
# * Materia: Parallel and distributed Computing
# * Tema: Introducción a la programación en C
# * Objetivo: Primer Taller C
#**************************************************************************/

GCC = gcc
FLAGS = -ansi -std=c99 -pedantic -Wall
MATHFLAG = -lm 

PROGRS = app_taller

all: $(PROGRS) 

taller_main: 
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c taller_lib.c
	$(GCC) $(FLAGS) -o $(PROGRS) $@.o taller_lib.o $(MATHFLAG)
	
clean: 
	$(RM) *.o $(PROGRS)
	
