/* 
Pointers stores the address of another varable and pointers 
also store address so another pointer can be used to store 
its address.
*/
#include <stdio.h>
void main()
{
    /* 
    here the '&' used to return the address of that variable 
    and '*' used to get value at the given address known as 
    deference/indirectional operator.
    */
    int a=50;
    int *p=&a; // same as p=&a;
    int *nullpointer=NULL;
    printf("\nThe value of a is %d",a);
    printf("\nThe value of a is %d",*p); 
    /* 
    here as we have used '*' before p that means print the 
    value of variable where p points.
    */
    printf("\nThe address of a is %x",p); 
    /*
    here %x is used to represent number in hexadecimal(base 
    16) to show address here.
    */
    printf("\nThe address of a is %p\n",p);
    /*
    here %p is used to print pointer value
    */
    printf("\nThe address of a is %d",&a);
    printf("\nThe address of a is %d",p);
    printf("\nThe value of a is %d",*p);
    printf("\nThe address of p is %p",*p); 
    printf("\nThe address of pointer to a is %p\n",&p);
    /*
    Here, the null pointer have :
    1.>> No value assigned.
    2.>> It doesn't point to any object or function.
    ~We can use it as a condition that weather a pointer variable
     have assigned any valid memory address or not.
    ~Otherwise if we dont assign a value to a pointer it will 
     give a garbage value.
    */
    printf("\nThe value of nullpointer is %d",*nullpointer);
    printf("\nThe address of nullpointer is %p",nullpointer); 
    printf("\nThe address of nullpointer is %d",nullpointer); 
}