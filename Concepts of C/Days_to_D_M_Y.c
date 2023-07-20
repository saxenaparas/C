#include<stdio.h>
void main()
{
    int d,y=0,w=0;
    printf("\nEnter the no. of Days:\n");
    scanf("%d",&d);
    while((d-365)>=0)
    {
        d-=365;
        y++;
    }
    while((d-7)>=0)
    {
        d-=7;
        w++;
    }
    printf("%d Years\n%d Weeks\n%d Days",y,w,d);
}