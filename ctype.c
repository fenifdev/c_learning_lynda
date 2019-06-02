#include <stdio.h>
#include <ctype.h>

/*int main()
{
    int ch = 'a';

    printf("Original %c\n", ch);
    printf("Lowercase %c\n", tolower(ch));
    printf("Uppercase %c\n", toupper(ch));
    printf("Original %c\n", ch);

    return(0);
}*/

/*int main()
{
    char ch = 'a';

    printf("Original %c\n", ch);
    printf("Lowercase %c\n", tolower(ch));
    printf("Uppercase %c\n", toupper(ch));
    printf("Original %c\n", ch);

    return(0);
}*/

/*int main()
{
    int ch = 'a';

    printf("Original %d\n", ch);
    printf("Lowercase %d\n", tolower(ch));
    printf("Uppercase %d\n", toupper(ch));
    printf("Original %d\n", ch);

    return(0);
}*/

/*int main()
{
    int c;

    do
    {
        c = getchar();
        c = toupper(c);
        putchar(c);
    }
    while( c != '\n');

    return(0);
}*/

/*int main()
{
    int acter;

    do
    {
        acter = getchar();
        if(isalpha(acter))
            putchar(acter);
    }
    while( acter != '\n');

    return(0);
}*/

int main()
{
    int acter;

    do
    {
        acter = getchar();
        if(isdigit(acter))
            putchar(acter);
    }
    while( acter != '\n');

    return(0);
}
