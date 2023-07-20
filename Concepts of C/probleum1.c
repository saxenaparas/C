#include<stdio.h>
void main()
{
    int a=1,b=2;
    a-=b-=a;
    printf("%d %d",a,b);
    /*
    a-=b i.e. a=a-b
    so, 
        a-=b-=a;
        a-=b=b-a; {and from here we get b=b-a}
        a-=(b-a);
        a=a-(b-a);
        a=2a-b;
    */
}