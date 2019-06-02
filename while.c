#include <stdio.h>

/*int main()
{
    int x;
    x = 1;
    while(x <=10)
    {
        printf("%d\n", x);
        x++;
    }

    return(0);
}*/

/*int main()
{
    char ch;
    ch = 'A';
    do
    {
        putchar(ch);
        ch++;
    }
    while( ch != 'Z');

    putchar('\n');

    return(0);
}*/

/*int main()
{
    while(1)
    {
        printf("Hola Baby");
    }

    return(0);
}*/

int main()
{
    int x = 0;
    while(1)
    {
        printf("Hola Baby %d", x);
        x++;
        if (x >=10)
            break;
    }

    return(0);
}
