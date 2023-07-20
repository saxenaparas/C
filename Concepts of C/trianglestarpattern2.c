#include <stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {//this code is incomplete not what ment to be 
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}