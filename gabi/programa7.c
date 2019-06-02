/*Problema hacer un programa que cuente del 1 al 10*/

/*
    solucion:
    imprimir en pantalla los numeros del 1 al 10
*/

/*comienza
escribe("1");
escribe("2");
escribe("3");
escribe("4");
escribe("5");
escribe("6");
escribe("7");
escribe("8");
escribe("9");
escribe("10");
fin*/

/*#include <stdio.h>

int main()
{
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");

    return(0);
}*/

/*comienza
variables numero:entero;
numero = 0;
mientras(numero <=10) hacer {
    escribe(numero);
    numero = numero + 1;
}
fin*/

/*#include <stdio.h>
int main()
{
    int numero;
    numero = 1;
    while(numero <= 10) {
        printf("%d\n", numero);
        numero++;
    }
}*/

#include <stdio.h>
int main()
{
    int numeros[] = {0,1,2,3,4,5,6,7,8,9};
    char abc[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' ,'i'};
    int x;
    x = 0;
    while(x < 10) {
        //printf("%d\n", numeros[x]);
        printf("%c\n", abc[x]);
        x++;
    }

    {
        printf("%c\n", abc[x]);
        x++;
    }do while(x < 10);

    for (int i = 0; i < count; ++i)
    {
        /* code */
    }
}
