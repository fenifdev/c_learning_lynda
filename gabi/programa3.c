/*
Problema:
escribir un programa, calcule la edad del usuario, de acuerdo a su año de nacimiento.
*/

/* Solucion:
- Pedir el año de nacimiento al usuario
- Restar el año ingresado con el año actual
- Mostrar la edad aproximada del usuario*/

/*comienza
variables: edad,ano: enteras:
escribe ('Ingrese su año de nacimiento: ');
lee (ano);
edad = 2019 - ano;
escribe ('Su edad aproximada es: ',edad);
fin*/

#include<stdio.h>
int main () {

int edad,ano;

printf("Ingrese su año de nacimiento: ");
scanf("%i",&ano);
edad = 2019 - ano;
printf ("Su edad aproximada es: %i",edad);

    return 0;

}
