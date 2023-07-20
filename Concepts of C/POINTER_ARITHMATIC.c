#include <stdio.h>
void main()
{
    int a = 34;
    int *p = &a;
    printf("Address of a or Value of p : %d\n", p);
    printf("Value of [p+1] : %d\n", p + 1);
    // Here, in this [p+1] = [p+1(sizeof{int})] = [p+4].
    // Since, sizeof[int]=4.
    printf("Value of [p+2] : %d\n", p + 2);
    printf("Value of [++p] : %d\n", ++p);
    printf("Value of [p++] : %d\n", p++);
    // Similarly, here also:
    // [p+2]=[p+2(sizeof{int})]=[p+2{4}]=[p+8].
    // ++p also works in same way since, [++p] = [p+1] then same as previous.

    printf("\n");

    char b = '3';
    char *q = &b;
    printf("Address of b or Value of q : %d\n", q);
    printf("Value of [q+1] : %d\n", q + 1);
    // Here, in this [q+1] = [q+1(sizeof{char})] = [q+1].
    // Since, sizeof[char]=4.
    printf("Value of [q+2] : %d\n", q + 2);
    printf("Value of [++q] : %d\n", ++q);
    printf("Value of [q++] : %d\n", q++);
    // Similarly, here also:
    // [q+2]=[q+2(sizeof{char})]=[q+2{1}]=[q+2].
    // ++q also works in same way since, [++q] = [q+1] then same as previous.
}
