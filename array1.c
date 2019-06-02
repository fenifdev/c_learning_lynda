#include <stdio.h>

/*int main()
{
    float temp1,temp2,temp3,temp4;

    temp1 = 74.9;
    temp2 = 73.7;
    temp3 = 75.8;
    temp4 = 78.2;

    printf("Local temperatures:\n");
    printf("Station 1: %.1f\n", temp1);
    printf("Station 2: %.1f\n", temp2);
    printf("Station 3: %.1f\n", temp3);
    printf("Station 4: %.1f\n", temp4);

    return(0);
}*/

/*int main()
{
    float temps[4] = { 74.9, 73.7, 75.8, 78.2 };
    int x;

    printf("Local temperatures:\n");
    for(x=0;x<4;x++)
        printf("Station %d: %.1f\n", x, temps[x]);

    return(0);
}*/

#define MEALS 3

int main()
{
    int calories[MEALS];
    int x, total;

    total = 0;
    puts("Calorie Counter");
    for(x=0;x<MEALS;x++)
    {
        printf("Calories at meal %d: ", x+1);
        scanf("%d", &calories[x]);
        total = total + calories[x];
    }
    printf("You had a total of %d calories.\n", total);
}
