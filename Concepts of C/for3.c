#include<stdio.h>
void main()
{
    int a=0;
    for(;a<5;) 
    /*
    As I previously declared a=0 in int function then no need to declare it or initialize it in for loop function.
    As I declared increment function in statement of for loop function so no need to declare it inside for loop function.
    */
    {
        printf("HELLO\n");
        a++;
    }
}