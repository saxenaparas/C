/* 
NOTE : 
That int* a,b;
It, dosen't mean that we have defined both a & b as an pointer.
It, means int *a, b; 
That means only a is defined as a pointer and b as an integer.
===============================================================
But if we [typedef int* pointer;]
then [pointer a,b;] 
now a and b both will become a pointer.
*/
#include<stdio.h>
void main()
{
    typedef int* pointer;
    pointer a,b;
    int d,e;
    d=67;
    e=89;
    a=&d;
    b=&e;
    printf("Address of d : %d\n", a);
    printf("Address of e : %d\n", b);
}