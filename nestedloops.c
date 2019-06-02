#include <stdio.h>

/*int main()
{
    char alpha;
    int numeric;

    for(alpha='A';alpha<'K';alpha++)
    {
        for(numeric=0;numeric<10;numeric++)
        {
            printf("%c-%d\t", alpha, numeric);
        }

        putchar('\n');
    }

    return(0);
}*/

int main()
{
    char alpha;
    int numeric;

    alpha = 'A';

    while(alpha<'K')
    {
        numeric = 0;
        while(numeric<10)
        {
            printf("%c-%d\t", alpha, numeric);
            numeric++;
        }

        putchar('\n');
        alpha++;
    }

    return(0);
}
