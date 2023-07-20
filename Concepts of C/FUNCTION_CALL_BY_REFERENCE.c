#include <stdio.h>
// function defination to swap the values.
void swap(int *a, int *b)
{
    int temp;
    temp = *a; // save the value at address x.
    *a = *b;   // put y into x.
    *b = temp; // put temp into y.
}
void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Values before swaping : \nValue of x = %d\n Value of y = %d\n", x, y);
    swap(&x, &y);
    printf("Values after swaping : \nValue of x = %d\n Value of y = %d\n", x, y);
}