/*This is a comment*/
#include <stdio.h>

int main()
{
    int age;
    char x,y,z;
    float pi;
    age = 25;
    x = 'A';
    y = 'B';
    z = 'C';
    pi = 22.00 / 7.0;
    printf("\nA sample C program\n\n \t Yes It is a tab.\n");

    puts("Just trying babe");

    printf("Passing a arguement %d\n", 4);
    printf("Passing a arguement %d+%d=%d\n", 2, 2, 2+2);
    printf("My age: %d \n", age);
    age = age + 1;
    printf("My next age: %d \n", age);
    printf("It's as easy as %c%c%c\n", x,y,z);
    printf("The ancients calculated PI as %f.\n", pi);
    return 0;
}
