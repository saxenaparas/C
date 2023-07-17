#include <stdio.h>
void main()
{
    int a;
    printf("Input Array Size:\n>>");
    scanf("%d",&a);
    int array[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d value of Array element\n>>",i);
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("\nOUTPUT The %d value of Array element is \n:>>%d\n",i,array[i]);
    }
}