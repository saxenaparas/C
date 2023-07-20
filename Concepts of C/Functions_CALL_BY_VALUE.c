#include <stdio.h>
int sum(int a,int b)
{
    return (printf("%d",a+b));
}
void main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    sum(x,y);
}