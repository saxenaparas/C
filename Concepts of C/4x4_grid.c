#include<stdio.h>
void main() 
{
    int a;
    printf("MAKING 4X4 GRID\n");
    printf("Enter the no. here:\n");
    scanf("%d",&a);
    printf("The sequence is:\n");
    printf("%d%d%d%d\n",a,a,a,a);
    printf("%d%d%d%d\n",a,a-1,a-1,a-1);
    printf("%d%d%d%d\n",a,a-1,a-2,a-2);
    printf("%d%d%d%d\n",a,a-1,a-2,a-3,a-4);
}