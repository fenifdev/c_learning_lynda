/*
    problema: decirle al usuario si es un millenial de acuerdo a su edad.
*/

/* Solucion:
- Pedirle al usuario su edad
- Restar su edad con el año actual
- Si el resultado es 2000 o mas indicar que es millenial
- Sino indicar que no es millenial*/

/*comienza
variables: edad,resultado: enteros;
escribe ('ingrese su edad: ');
lee (edad);
resultado = 2019 - edad;
si (resultado>=2000) entonces
    escribe ('Eres millenial');
sino
    escribe ('No eres millenial');
fin*/

/*#include<stdio.h>

int main (){

int edad,resultado;
printf ("Ingrese su edad: ");
scanf ("%i",&edad);
resultado = 2019 - edad;
if (resultado>=2000) {
    printf("Eres millenial");
}
else
    printf ("No eres millenial");


    return 0;

}*/

#include<stdio.h>

int main (){

int edad;
printf ("Ingrese su edad: ");
scanf ("%i",&edad);
;
if ((2019 - edad)>=2000) {
    printf("Eres millenial");
}
else
    printf ("No eres millenial");


    return 0;

}



