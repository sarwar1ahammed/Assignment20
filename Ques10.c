#include <stdio.h>
#include <string.h>
// A program to print a string in reverse using a pointer
int main()
{
    char str[20];
    printf("Enter a string : ");
        gets(str);
    printf("Your String is : %s\n", str);
    
    int i=0, j=strlen(str)-1;
    char temp;
    while(i<=j)
    {
        temp = *(str+j);
        *(str+j) = *(str+i);
        *(str+i) = temp;
        i++;
        j--;
    }

    printf("\nReverse String ==> %s", str);

    printf("\n");
    return 0;
}
