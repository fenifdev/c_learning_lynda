#include <stdio.h>

/*int main()
{
    int array[] = { 11, 13, 17, 19 };
    int x;

    for(x=0;x<4;x++)
    {
        printf("Element %d: %d\n", x+1, array[x]);
    }

    return(0);
}*/

/*int main()
{
    int array[] = { 11, 13, 17, 19 };
    int x;
    int *aptr;

    aptr = array; //no & needed for an array

    for(x=0;x<4;x++)
    {
        printf("Element %d: %d\n", x+1, *aptr);
        aptr++; //the pointer increments by the size of its datatype.
    }

    return(0);
}*/

int main()
{
    int array[] = { 11, 13, 17, 19 };
    int *aptr;

    aptr = array; //no & needed for an array
    //aptr = aptr + 3;

    printf("The Element is: %d\n", *aptr);
    printf("The Element is: %d\n", *(aptr+3));
     printf("The Element is: %d\n", array[3]);

    return(0);
}
