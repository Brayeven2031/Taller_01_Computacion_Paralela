/**************************************************************************
 * Fecha: 04 - Agosto - 2022
 * Autor: Brayan Stiven Castañeda Cruz
 * Materia: Parallel and distributed Computing
 * Tema: Introducción a la programación en C
 * Objetivo: Primer Taller C
**************************************************************************/

/****
 * Proyecto para generar un único programa en el que 
 * un usuario pueda acceder a 10 opciones diferentes 
 * Archivo: BIBLIOTECA DE METODOS 
****/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "taller_lib.h"

/****
 * Bienvenida 
****/
void title(){
	
   	printf("############################################################\n");
  	printf("##                                                        ##\n");
	printf("##                   PRIMER TALLER C                      ##\n");
    printf("##                                                        ##\n");
	printf("############################################################\n");

}



/****
 * Función que recibe dos numero y retorna el producto
****/
int multiply(int a, int b){
    return a * b;
}

/****
 * Primer punto: (Multiplicación de dos numeros enteros)
****/
void first_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     PRIMER PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");

    
    int num1, num2;
    printf(">>> Digite un numero entero: ");
   	scanf("%d", &num1);
    printf(">>> Digite un otro numero entero: ");
   	scanf("%d", &num2);
    
    printf("--> Resultado: [%d]\n\n", multiply(num1, num2));
    
}



/****
 * Función que recibe un numero de días y retorna el numero de años completos taranscurridos
****/
int years_number(int total_days){
    return total_days /365;
}

/****
 * Función que recibe un numero de días y retorna el numero de semanas restantes transcurridas
****/
int weeks_number(int total_days){
    return (total_days % 365)/7;
}

/****
 * Función que recibe un numero de días y retorna el numero de días restantes transcurridos
****/
int days_number(int total_days){
    return (total_days % 365)%7;
}

/****
 *  Segundo punto: (Cálculo de años, meses y dias de un total de numeros de días)
****/
void second_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     SEGUNDO PUNTO                      >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


	int total_days;
	
    /*Ingresa el numero de dias*/
	printf(">>> Ingresa los dias a convertir: ");
	scanf("%d",&total_days);
	
	/*Resultado*/
    printf("\n--> Resultado: \n");
	
    printf("--> Años: [%d]\n", years_number(total_days));
	printf("--> Semanas: [%d]\n", weeks_number(total_days));
	printf("--> Días: [%d]\n\n", days_number(total_days));

}



/****
 * Función que recibe los puntos y calcula la distancia entre los dos
****/
float distance_points(int X1, int X2, int Y1, int Y2){
    return sqrt(pow((X2-X1),2)+ pow((Y2-Y1),2));
}

/****
 *  Tercer punto: (Cálculo de la distancia entre dos puntos)
****/
void third_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     TERCER PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


	int X1, X2, Y1, Y2;

	/*Ingresa la ubicación de los puntos*/
    printf(">>> Digite el valor de X1: ");
   	scanf("%d", &X1);
    printf(">>> Digite el valor de Y1: ");
   	scanf("%d", &Y1);
    
    printf(">>> Digite el valor de X2: ");
   	scanf("%d", &X2);
    printf(">>> Digite el valor de Y2: ");
   	scanf("%d", &Y2);	
	
	/*Resultado*/
    printf("\n--> Resultado: \n --> La distancia entre los dos puntos es de: [%.4f]\n\n", distance_points(X1, X2, Y1, Y2));
    
}



/****
 *  Cuarto punto: (Mostrar los primero 10 números naturales)
****/
void fourth_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     CUARTO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


	/*Resultado*/
    printf("--> Resultado: ");

	for(int i = 1; i<=10; i++){
		printf("%d ", i);
	}

	printf("\n\n");

}



/****
 *  Quinto punto: (Triángulo de asteriscos segun los niveles digitados por el usuario)
****/
void fifth_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     QUINTO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


    int lines;
	printf("--> Ingresa el número de líneas a pintar (maximo 14): ");
	scanf("%d",&lines);
	
	if(lines > 14 || lines <= 0){
		printf("\n>>> [Numero de lineas no valido]\n\n");
	}else{
		
        /*Resultado*/
        printf("--> Resultado: \n\n");
		for(int i = 1; i<=lines; i++){
            printf("\t[%d]\t", i);
			for(int j = 1; j <= i; j++){
				printf("*");
			}
			printf("\n");
		}

		printf("\n\n");
	}

}



/****
 *  Sexto punto: (Impresión de matriz de NxN de "1")
****/
void sixth_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                      SEXTO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


    int size;
	printf("--> Ingresa el tamaño de la matriz: (1-7): ");
	scanf("%d",&size);
    
	if(size < 8 && size >= 1){
		int m[size][size];
		for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				m[i][j]=1;
			}
		}
		
		printf("\n");
		for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
			for(int j = 0; j < size; j++){
				printf("%d  ", m[i][j]);
			}
			printf("\n");
		}	

		printf("\n\n");

	}else{
		printf("\n>>> [Tamaño de matriz no valido]\n\n");
	}

}



/****
 * Método que devuelve un número aleatorio entre 0 y 9
****/
int rand_number(){
    return rand()%10;
}

/****
 *  Séptimo punto: (Impresión de matriz de NxN de números aleatorios)
****/
void seventh_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                    SEPTIMO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


    int size;
	printf("--> Ingresa el tamaño de la matriz: (1-7): ");
	scanf("%d",&size);
    
	if(size < 8 && size >= 1){
		int m[size][size];
		for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				m[i][j]= rand_number();
			}
		}
		
		printf("\n");
		for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
			for(int j = 0; j < size; j++){
				printf("%d  ", m[i][j]);
			}
			printf("\n");
		}	

		printf("\n\n");

	}else{
		printf("\n>>> [Tamaño de matriz no valido]\n\n");
	}

}



/****
 *  Octavo punto: (Impresión de dos matrices de NxN de números aleatorios y la suma de los dos)
****/
void eighth_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     OCTAVO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


    int size;
	printf("--> Ingresa el tamaño de las matrices: (1-7): ");
	scanf("%d",&size);
    
	if(size < 8 && size >= 1){
		int m1[size][size], m2[size][size], m3[size][size];

		printf("\n>>> Matriz 1: \n");
		for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m1[i][j]= rand_number();
				printf("%d  ", m1[i][j]);
			}
			printf("\n");
		}
		
		printf("\n>>> Matriz 2: \n");
        for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m2[i][j]= rand_number();
				printf("%d  ", m2[i][j]);
			}
			printf("\n");
		}

        printf("\n>>> Respuesta (Suma matrices ): \n");
        for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m3[i][j] = m1[i][j] + m2[i][j];
				printf("%d\t", m3[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");

	}else{
		printf("\n>>> [Tamaño de matriz no valido]\n\n");
	}

}



/****
 *  Noveno punto: (Impresión de dos matrices de NxN de números aleatorios y la resta de los dos)
****/
void ninth_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     NOVENO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");


    int size;
	printf("--> Ingresa el tamaño de las matrices: (1-7): ");
	scanf("%d",&size);
    
	if(size < 8 && size >= 1){
		int m1[size][size], m2[size][size], m3[size][size];

		printf("\n>>> Matriz 1: \n");
		for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m1[i][j]= rand_number();
				printf("%d  ", m1[i][j]);
			}
			printf("\n");
		}
		
		printf("\n>>> Matriz 2: \n");
        for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m2[i][j]= rand_number();
				printf("%d  ", m2[i][j]);
			}
			printf("\n");
		}

        printf("\n>>> Respuesta (Resta matrices ): \n");
        for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m3[i][j] = m1[i][j] - m2[i][j];
				printf("%d\t", m3[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");

	}else{
		printf("\n>>> [Tamaño de matriz no valido]\n\n");
	}

}



/****
 *  Décimo punto: (Impresión de dos matrices de NxN de números aleatorios y el producto de los dos)
****/
void tenth_point(){

	printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
	printf("<<                     DECIMO PUNTO                       >>\n");
    printf("<<-------------------------------------------------------->>\n\n");

    int size;
	printf("--> Ingresa el tamaño de las matrices: (1-7): ");
	scanf("%d",&size);
    
	if(size < 8 && size >= 1){
		int m1[size][size], m2[size][size], m3[size][size];

		printf("\n>>> Matriz 1: \n");
		for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m1[i][j]= rand_number();
				printf("%d  ", m1[i][j]);
			}
			printf("\n");
		}
		
		printf("\n>>> Matriz 2: \n");
        for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
				m2[i][j]= rand_number();
				printf("%d  ", m2[i][j]);
			}
			printf("\n");
		}

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                int suma = 0;
                for (int k = 0; k < size; k++) {
                    /* Multiplicación y suma de resultados */ 
                    suma += m1[j][k] * m2[k][i];
                }
                m3[j][i] = suma;
			}
		}

        printf("\n>>> Respuesta (Producto matrices ): \n");
        for(int i = 0; i < size; i++){
            printf("\t[%d]\t", (i + 1));
            for(int j = 0; j < size; j++){
                printf("%d\t", m3[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");

	}else{
		printf("\n>>> [Tamaño de matriz no valido]\n\n");
	}

}




/****
 * Función para capturar la elección del usuario 
****/
void selection(){
    int opc = 0;
    printf("\nRespuesta: ");
   	scanf("%d", &opc);

    switch (opc)
    {
        case 1:
            /* Dirige a la función del primer método */
            first_point();
            break;

        case 2:
            /* Dirige a la función del segundo método */
            second_point();
            break;

        case 3:
            /* Dirige a la función del tercer método */
            third_point();
            break;
        
        case 4:
            /* Dirige a la función del cuarto método */
            fourth_point();
            break;

        case 5:
            /* Dirige a la función del quinto método */
            fifth_point();
            break;

        case 6:
            /* Dirige a la función del sexto método */
            sixth_point();
            break;

        case 7:
            /* Dirige a la función del séptimo método */
            seventh_point();
            break;

        case 8:
            /* Dirige a la función del octavo método */
            eighth_point();
            break;

        case 9:
            /* Dirige a la función del noveno método */
            ninth_point();
            break;

        case 10:
            /* Dirige a la función del décimo método */
            tenth_point();
            break;

        default:
            printf(">>> [Opcion no valida]\n\n");
            break;
    }
    
}

/****
 * Método que muestra el menú de opciones que el 
 * usuario puede elegir, las opciones corresponderán 
 * a los 10 ejercicios del taller
****/
void menu(){

    printf("\n\n");
    printf("<<-------------------------------------------------------->>\n");
    printf("<<                         MENU                           >>\n");
    printf("<<-------------------------------------------------------->>\n\n");

    printf(">>> Opciones: \n");
    printf("[01] Producto de dos enteros.\n");
    printf("[02] Convertir los días especificados en años, semanas y días.\n");
    printf("[03] Calcular la distancia entre los dos puntos.\n");
    printf("[04] Mostrar los 10 primeros números naturales.\n");
    printf("[05] Mostrar el patrón como triángulo rectángulo usando un asterisco.\n");
    printf("[06] Imprimir una matriz de “1”, de tamaño NxN.\n");
    printf("[07] Imprimir una matriz de números aleatorios enteros, entre 0 y 9, de tamaño NxN.\n");
    printf("[08] Mostrar dos matrices de números aleatorios, entre 0 y 9, de tamaño NxN. Finalmente, se presenta la suma de las dos matrices.\n");
    printf("[09] Mostrar dos matrices de números aleatorios, entre 0 y 9, de tamaño NxN. Finalmente, se presenta la resta de las dos matrices.\n");
    printf("[10] Mostrar dos matrices de números aleatorios, entre 0 y 9, de tamaño NxN. Finalmente, se presenta el producto de las dos matrices.\n");

}

/****
 * Método que se encarga de retorna la respuesta del usuario 
 * si desea realizar otra operación 
****/
int ask_continue(){
    int resp = 0; 
    printf(">>> ¿Desea realizar otra operacion?.\n");
    printf("[Marque 1 para 'SI' y 0 para 'NO']\n");
   	scanf("%d", &resp);
    
    return resp;
}

/* Principal */
int director(){
    int cont = 0;
    title();
    do{
        menu();
        selection();
        cont = ask_continue();
    }while (cont == 1);
    
    return 0;
}
