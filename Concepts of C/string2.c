#include <stdio.h>
// #include <string.h>
void printstr(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i]);
        i++;
    }
}
void main()
{
    char str[] = {'P', 'A', 'R', 'A', 'S', '\0'};
    printstr(str);
}
// printing a string using a custom function printstr.