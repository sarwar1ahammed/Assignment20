#include <stdio.h>
// A program in C to demonstrate how to handle the pointers in the program.
int main()
{
    int a=22, *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;

    printf("%d %d %d %d %d %d", a, &a, b, *d, **c, &b);

    printf("\n");
    return 0;
}
