#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    gets(str);
    printf("USING printf :\n%s\n",str);
    printf("USING puts :\n");
    puts(str);
}