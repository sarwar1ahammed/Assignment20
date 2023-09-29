#include <stdio.h>
/* 
    A program to count the number of vowels and 
    consonants in a string using a pointer.
*/
int main()
{
    char str[20];
    int i, vowel=0, cons=0;
    printf("Enter a String : ");
        gets(str);

    for (i=0; *(str+i); i++)
    {
        if (*(str+i) == 'a'||*(str+i) == 'e'||*(str+i) == 'i'||*(str+i) == 'o'||*(str+i) == 'u')
            vowel++;
        else 
            cons++;
    }
    printf("Vowel ==> %d", vowel);
    printf("\nConsonant ==> %d", cons);

    printf("\n");
    return 0;
}
