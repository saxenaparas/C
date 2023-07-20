#include <stdio.h>
#include <string.h>
void main()
{
    char arr[100];
    char *p;
    gets(arr);
    p = arr;
    int vowel = 0;
    int cons = 0;
    int i = 0;
    while (p[i] != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'O' || *p == 'I' || *p == 'U')
            vowel++;
        else
            cons++;
        i++;
    }
    printf("VOWELS : %d\n", vowel);
    printf("CONSONENTS : %d\n", cons);
}