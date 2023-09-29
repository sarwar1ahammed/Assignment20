#include <stdio.h>
#include <string.h>
void swap(char**, char**); // Function Definition.
// A function to swap strings of two char arrays of calling functions.
int main()
{
    char *c1[20],*c2[20];
    printf("Enter two strings to swap each other : ");
    gets(c1);
    gets(c2);
    printf("Before swapping char are : \nString1 ==> %s\nString2 ==> %s", c1, c2);
    swap(&c1, &c2); // Function Call (Actual Arguments).
    printf("\nAfter swapping char are : \nString1 ==> %s\nString2 ==> %s", c1, c2);
    printf("\n");
    return 0;
}
// void swap(char a1[], char a2[])  // Function Declaration (Formal Arguments).
void swap(char **a1, char **a2)
{
    char *temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}
