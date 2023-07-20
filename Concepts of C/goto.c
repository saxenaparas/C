#include <stdio.h>
void main()
{
    label:
    printf("\nWe are inside label\n");
    goto end;
    printf("This loop will go endlessly");//not going to be printed because of goto statement to the end
    goto label;
    end:
    printf("we are at the end");
}