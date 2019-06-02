/*
Problema:
escribir un programa, que le diga hola al usuario por su nombre.
*/

/*
comienza
variables: nombre: cadena de texto;
escribe('Ingrese su nombre por favor: ');
lee(nombre);
escribe('Hola ',nombre);
fin
*/

#include<stdio.h>
int main () {

char nombre[30];
printf ("Ingrese su nombre por favor: ");
scanf("%s",nombre);
printf ("Hola %s",nombre);

    return 0;
}


