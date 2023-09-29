#include <stdio.h>
// A function to swap values of two in variables of calling function. (TSRN)
void swap(int*, int*);
int main()
{
    int m, n;
    printf("Enter two number to swap it : ");
    scanf("%d %d", &m, &n);
    printf("Before Swap m==>%d & n==>%d", m, n);
    swap(&m, &n);
    printf("\nAfter Swap m==>%d & n==>%d", m, n);

    printf("\n");
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
