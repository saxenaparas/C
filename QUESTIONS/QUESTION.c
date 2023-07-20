// Allow the user to enter two strings and then concatenate them by saying that str1 is a friend of str 2.
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[10];
    char s2[10];
    char s3[60];
    char s[] = " is a friend of ";
    gets(s1);
    gets(s2);
    // strcpy(s3, strcat(s1, s));
    // puts(s3);
    strcpy(s3, strcat(s, s2));
    puts(s3);
}