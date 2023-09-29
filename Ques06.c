#include <stdio.h>
// A program to calculate the length of the string using a pointer.
int length(char*);
int main()
{
    char str[20];
    printf("Enter a String : ");
        gets(str);
    int len = length(str);
    printf("Length of the String is : %d", len);

    printf("\n");
    return 0;
}
int length(char *a)
{
    int i;
    // for (i=0; a[i]; i++);
    for (i=0; *(a+i)!='\0'; i++);
    return i;
}
