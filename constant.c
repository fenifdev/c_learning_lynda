#include <stdio.h>

#define INPUT_MAX 16

/*int main()
{
    const int x = 5;

    printf("%d squared is %d\n", x, x*x);
    //x = 10;
    printf("%d squared is %d\n", x, x*x);

    return(0);
}*/

int main()
{
    char input[INPUT_MAX];

    printf("Instructions: ");
    fgets(input,INPUT_MAX,stdin);
    printf("Thank you! Here are your instructions:");
    puts(input);

    return(0);
}
