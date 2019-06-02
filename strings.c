#include <stdio.h>

/*int main()
{
    char password[] = "spatula";

    printf("The password is %s\n", password);

    return(0);
}*/

/*int main()
{
    char name[15]; // room for 14 characters

    printf("Your name? ");
    scanf("%s", name);
    printf("You are %s\n", name);

    return(0);
}*/

int main()
{
    char input[64]; //63 characters plus null

    printf("Instructions: ");
    fgets(input,64,stdin);
    puts("Thank you! Here are your instructions:");
    puts(input);
}
