#include <stdio.h>
// A program to find the maximum number between two numbers using a pointer
int max(int*, int*);
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    int maximum = max(&a, &b);
    printf("Maximum value of among them is : %d", maximum);
    printf("\n");
    return 0;
}
int max(int *x, int *y)
{
    int result = (*x>*y) ? *x : *y;
    return result; 
}
