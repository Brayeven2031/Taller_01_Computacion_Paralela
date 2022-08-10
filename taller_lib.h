/**************************************************************************
 * Fecha: 04 - Agosto - 2022
 * Autor: Brayan Stiven Castañeda Cruz
 * Materia: Parallel and distributed Computing
 * Tema: Introducción a la programación en C
 * Objetivo: Primer Taller C
**************************************************************************/

#ifndef TALLER_LIB_H_INCLUDED
#define TALLER_LIB_H_INCLUDED

/****
 * Proyecto para generar un único programa en el que 
 * un usuario pueda acceder a 10 opciones diferentes 
 * Archivo: INTERFAZ DE METODOS Y FUNCIONES
****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int multiply(int a, int b);
void first_point();

int years_number(int total_days);
int weeks_number(int total_days);
int days_number(int total_days);
void second_point();


float distance_points(int X1, int X2, int Y1, int Y2);
void third_point();


void fourth_point();
void fifth_point();
void sixth_point();


int rand_number();
void seventh_point();

void eighth_point();
void ninth_point();
void tenth_point();

void title();
void selection();
void menu();
int ask_continue();
int director();

#endif