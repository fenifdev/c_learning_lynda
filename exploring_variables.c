#include <stdio.h>

/*int main()
{
    int a;
    //Always initialize the variable
    printf("The value of a is %d\n", a);

    return(0);
}*/

/*int main()
{
    int a;

    printf("An int variable occupies %lu bytes of storage\n", sizeof(a));

    return(0);
}*/

/*int main()
{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;

    printf("A char variable occupies %lu bytes of storage\n", sizeof(a));
    printf("A short variable occupies %lu bytes of storage\n", sizeof(b));
    printf("An int variable occupies %lu bytes of storage\n", sizeof(c));
    printf("A long variable occupies %lu bytes of storage\n", sizeof(d));
    printf("A float variable occupies %lu bytes of storage\n", sizeof(e));
    printf("A double variable occupies %lu bytes of storage\n", sizeof(f));

    return(0);
}*/

/*int main()
{
    struct stuff {
        int a;
        float b;
        char c[32];
    };

    printf("The structure 'stuff' occupies %lu bytes of storage\n", sizeof(struct stuff));

    return(0);
}*/

int main()
{
    int a;
    char b;
    float c;

    puts("Memory locations:");
    printf("A is at %p\n", &a);
    printf("B is at %p\n", &b);
    printf("C is at %p\n", &c);

    return(0);
}
