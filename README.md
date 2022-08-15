# Taller_01_Computacion_Paralela


Repositorio del código en el lenguaje de programación C, correspondiente a la solución del cuestionario asignado para el primer taller de la materia. Para ello se utilizó la metodología de compilación por serado, por tal motivo la solución se encuentra divida en 3 archivos taller_main.c (Archivo que contine el método prinicipal para generar el arranque del programa), taller_lib.c (Archivo que es la interfaz de los métodos a los que el programa hace llamados y que se encargan de dar la solución solicitada para cada punto) y por último, el archivo taller_lib.h (Archivo que es la biblioteca artesanal creada con el fin de generar el listado de funciones y métodos que permitirán el correcto despeño del programa). Adicional a esto se incluye un archivo nombrado Makefile que se encargará de automatizar el proceso de compilación de los archivos .c generando el ejecutable app_taller.


A continución encontrará el resumen de los problemas plantados para brindar su respetiva respuesta, y se nombrará el espacio en el que se encuentra la solución de cada problema.

# Ejercicio 1: 
Para el primer ejercicio tenemos el siguiente problema:
>"Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los dos enteros. \
Datos de prueba : \
Introduzca el primer entero: 25 \
Introduzca el segundo entero: 15 \
Salida esperada: \
Producto de los dos enteros anteriores = 375" \
\
***NOTA:** Puede observar la respuesta dentro de los métodos multiply() y first_point() dentro del archivo taller_lib.c*

# Ejercicio 2: 
Para el Segundo ejercicio tenemos el siguiente problema: 
> "Escribe un programa en C para convertir los días especi cados en años, semanas y días. \
Nota: Ignore el año bisiesto. \
Datos de prueba: \
Número de días: 1329 \
Salida esperada: \
Años: 3\
Semanas 33\
Días: 3" \
\
***NOTA:** Puede observar la respuesta dentro de los métodos years_number(), int weeks_number(), int days_number() y second_point() dentro del archivo taller_lib.c*

# Ejercicio 3: 
Para el tercer ejercicio tenemos el siguiente problema: 
> "Escribe un programa en C para calcular la distancia entre los dos puntos.\
Datos de prueba :\
Entrada x1: 25\
Entrada y1: 15\
Entrada x2: 35\
Entrada y2: 10\
Resultado esperado:\
Distancia entre dichos puntos: 11.1803" \
\
***NOTA:** Puede observar la respuesta dentro de los métodos distance_points() y third_point() dentro del archivo taller_lib.c*

# Ejercicio 4: 
Para el cuarto ejercicio tenemos el siguiente problema: 
> "Escribe un programa en C para mostrar los 10 primeros números naturales.\
Salida esperada :\
1 2 3 4 5 6 7 8 9 10" \
\
***NOTA:** Puede observar la respuesta dentro del método fourth_point() dentro del archivo taller_lib.c*

# Ejercicio 5: 
Para el quinto ejercicio tenemos el siguiente problema: 
> "Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un\
asterisco. La cantidad de líneas del triangulo es ingresada por consola por el usuario, y el valor\
máximo de líneas es de 14.\
El patrón como :\
*\
**\
***\
****" \
\
***NOTA:** Puede observar la respuesta dentro del método fifth_point() dentro del archivo taller_lib.c*

# Ejercicio 6: 
Para el sexto ejercicio tenemos el siguiente problema: 
> "Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es\
indicado por el usuario y debe ser siempre menor que 8." \
\
***NOTA:** Puede observar la respuesta dentro del método sixth_point() dentro del archivo taller_lib.c*

# Ejercicio 7: 
Para el séptimo ejercicio tenemos el siguiente problema: 
> "Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de\
de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8." \
\
***NOTA:** Puede observar la respuesta dentro de los métodos rand_number() y seventh_point() dentro del archivo taller_lib.c*

# Ejercicio 8: 
Para el octavo ejercicio tenemos el siguiente problema: 
> "Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de\
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.\
Finalmente, se presenta la suma de las dos matrices." \
\
***NOTA:** Puede observar la respuesta dentro del método eighth_point() dentro del archivo taller_lib.c*

# Ejercicio 9: 
Para el noveno ejercicio tenemos el siguiente problema: 
> "Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de\
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.\
Finalmente, se presenta la resta de las dos matrices." \
\
***NOTA:** Puede observar la respuesta dentro del método ninth_point() dentro del archivo taller_lib.c*

# Ejercicio 10: 
Para el décimo ejercicio tenemos el siguiente problema: 
> "Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de\
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.\
Finalmente, se presenta el producto de las dos matrices." \
\
***NOTA:** Puede observar la respuesta dentro del método tenth_point() dentro del archivo taller_lib.c*

# ¿Cómo usar?
***NOTA:** Tenga en cuenta que a continuación se encuentra la manera de ejecutar el programa en un entorno linux*
1. Inicialmente deberá descargar los archivos y ubicar los cuatro en una misma carpeta, no cambie los nombres de los archivos o el proceso de compilación se verá afectado.
2. Posteriormente ubiquese en la carpeta en la que albergó los cuatro archivos
3. Ejecute el comando **make taller_main**
4. Ejecute el comendo **.\app_taller** 
5. Interactúe con el programa a su gusto
