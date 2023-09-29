#include<stdio.h>
// A program to print the elements of an array in reverse order.
int main()
{
    int n, i;
    printf("Enter no. of array elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d no. of array elements.\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Your elements look like : \n");
    for(i=0; i<n; i++)
        printf("%d ", *(arr+i));

    printf("\nNow, reversing array is :\n");
    for (i=n-1; i>=0; i--)
        printf("%d ", *(arr+i));

    printf("\n");
    return 0;
}
