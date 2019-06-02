#include <stdio.h>

int main()
{
    char a;

    printf("Make a choice A,B,C: ");
    scanf("%c", &a);

    /*switch(a)
    {
        case 'A':
            puts("Excellent choice!");
            break;
        case 'B':
            puts("Not so bad");
            break;
        case 'C':
            puts("The best choice ever");
            break;
        default:
            puts("This is not a valid choice");
    }*/

    switch(a)
    {
        case 'A':
        case 'a':
            puts("Excellent choice!");
            break;
        case 'B':
        case 'b':
            puts("Not so bad");
            break;
        case 'C':
        case 'c':
            puts("The best choice ever");
            break;
        default:
            puts("This is not a valid choice");
    }

    return(0);
}
