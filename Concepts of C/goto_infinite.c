#include <stdio.h>
void main()
{
    label:
    printf("\nWe are inside label\n");
    printf("This loop will go endlessly");
    goto label;
}