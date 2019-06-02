#include <stdio.h>
#include <string.h>

/*int main()
{
    char string[] = "Just how long am I?";
    int len;

    len = strlen(string);
    printf("The following string:\n");
    puts(string);
    printf("is %d characters long.\n", len);
    return(0);
}*/

/*int main()
{
    char input[64];
    int len;


    printf("Instructions: ");
    fgets(input,64,stdin);
    len = strlen(input);
    printf("You typed %d characters of Instructions.\n", len);
    return(0);
}*/

/*int main()
{
    char first[] = "I would like to go ";
    char second[] = "from here to there\n";

    printf("%s\n", first+second);

    return(0);
}*/

int main()
{
    char first[] = "I would like to go ";
    char second[] = "from here to there\n";
    char buffer[50];

    strcpy(buffer,first);
    strcat(buffer,second);
    puts(buffer);

    return(0);
}
