#include <stdio.h>
void sort(int*, int);
// A function to sort an array of int type values. [ void sort(int *ptr,int size); ]
int main()
{
    int n, i;
    printf("Enter the no. of values want to sort :) ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d of array values : \n", n);
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Sorting elements are : \n");
    sort(a, n);
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
void sort(int *x, int y)
{
    int i, j, temp;
    for(i=0; i<y-1; i++)
    {
        for(j=i+1; j<y; j++)
        {
            if(x[i] > x[j])
            {
                temp = *(x+i);
                *(x+i) = *(x+j);
                *(x+j) = temp;
            }
        }
    }
}
