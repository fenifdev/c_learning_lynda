#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main()
{
    char *string;

    string = malloc(sizeof(char)*SIZE);

    if( string == NULL )
    {
        puts("Unable to allocate memory");
        return(1);
    }

    printf("Your name: ");
    fgets(string,SIZE,stdin);
    printf("Welcome %s\n", string);

    return(0);
}
