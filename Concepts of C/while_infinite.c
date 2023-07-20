//This code is used to show infinite loop 
#include<stdio.h>
void main()
{
    int a=0;
    while(a<a+1)
    {
        printf("HELLO %d\n",a);
        a++;
    }
}