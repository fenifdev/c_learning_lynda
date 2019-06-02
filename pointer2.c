#include <stdio.h>

/*int main()
{
    int a,b;
    int *ptr;

    a = 1234;
    ptr = &a;
    b = *ptr;

    printf("A is %d and B is %d\n", a,b);

    return(0);
}*/

/*int main()
{
    int a,b;
    int *ptr;

    //This works because a pointer value like any other variable can change in the code

    ptr = &a;
    *ptr = 1234;
    ptr = &b;
    *ptr = 4567;

    printf("A is %d and B is %d\n", a,b);

    return(0);
}*/

/*int main()
{
    float price, *ptr;
    //The reason the program crash is that the pointer isn't initialize
    *ptr = 99.98;

    printf("The price is $%.2f\n", price);

    return(0);
}*/

/*int main()
{
    float price, *ptr;

    ptr = &price;
    *ptr = 99.98;

    printf("The price is $%.2f\n", price);

    return(0);
}*/

int main()
{
    char a,b,c,*p;

    a = 'A'; //Assign 'A' to variable a
    p = &a; //Set pointer p to the address of a
    b = *p; //Assign variable b to the value addressed by pointer p
    p = &c; //Set pointer p to the address of c
    *p = 'Z'; //Assign the value addressed by pointer p to 'Z'

    printf("%c %c %c\n", a,b,c);
}
