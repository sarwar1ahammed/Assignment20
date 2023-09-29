#include <stdio.h>
// A program to compute the sum of all elements in an array using pointers.
int main()
{
    int n, i, sum=0;
    printf("Enter no. of elements in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d no. of array elements : \n", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<n; i++)
        sum = sum + *(arr+i);
    printf("Sum is %d", sum);

    printf("\n");
    return 0;
}
