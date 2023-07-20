#include <stdio.h>
#include <string.h>
void main()
{
    char s1[]="PARAS";
    char s2[]="SAXENA";
    char s3[50];
    printf("The length of s1 is : %d\n",strlen(s1));
    printf("The length of s2 is : %d\n",strlen(s2));
    printf("The reversed string s1 is :");
    puts(strrev(s1));
    printf("The reversed string s2 is :");
    puts(strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("The catenation of s1 and s2 is :");
    puts(strcat(s1,s2));
    printf("The strcmp for s1, s2 return : %d",strcmp(s1,s2));
}