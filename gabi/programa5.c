/*
    problema: decirle al usuario si puede pasar, de acuerdo a su edad.
*/
/*
    1- definir las variables.
    2- pedirle la edad al usuario.
    3- si el usuario es mayor de 18, le digo que puede pasar.
    4- si el usuario no es mayor que 18 le digo que no puede pasar.
*/

/*comienza
variables edad:entero;

escribe("Que edad tienes?");
lee(edad);
si (edad >= 18) entonces
    escribe("Pudes pasar");
sino
    escribe("No puedes pasar");
fin*/

#include <stdio.h>

int main()
{
    int edad;
    printf("Que edad tienes?\n");
    scanf("%i", &edad);
    if( edad >= 18)
    {
        printf("Puedes Pasar!!\n");
    }
    else
    {
        printf("No puedes pasar :)\n");
    }

    return 0;
}
