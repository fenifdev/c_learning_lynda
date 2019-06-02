/*Problema:
    Calcular el año de nacimiento de acuerdo a la edad del usaurio.
*/
/*
    Solucion:
    -Preguntarle al usuario su edad.
    -Restarle al año actual, la edad del usuario.
*/

/*comienza
variables edad, ano:enteras;

escribe("Cuantos años tienes?");
lee(edad);
ano = 2019 - edad;
escribe("Naciste aproximadamente en el año ", ano);
fin*/

#include <stdio.h>

int main()
{
    int edad, ano;

    printf("Cuantos Años Tienes?\n");
    scanf("%i", &edad);
    ano = 2019 - edad;
    printf("Naciste aproximadamente en el año %i \n", ano);

    return 0;
}



//definir la variables
//preguntarle cuantos años tiene
//Guardar la edad en una variable
//clacular el año en que nacio
//mostrarle el año en que naacio
