#include<stdio.h>
void main()
{
    int a,b,c;

    printf("CALCULATOR\n");
    printf("1-ADDITION\n");
    printf("2-SUBTRACTION\n");
    printf("3-MULTIPLICATION\n");
    printf("4-DIVISION\n");
    printf("5-EXIT\n");
    printf("Choose your option\n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:
        printf("ADDITION\n");
        printf("Enter two numbers\n");
        scanf("%d %d",&b,&c);
        printf("The sum will be %d\n",b+c);
        break;

        case 2:
        printf("SUBTRACTION\n");
        printf("Enter two numbers\n");
        scanf("%d %d",&b,&c);
        printf("The difference will be %d\n",b-c);
        break;

        case 3:
        printf("MULTIPLICATION\n");
        printf("Enter two numbers\n");
        scanf("%d %d",&b,&c);
        printf("The product will be %d\n",b*c);
        break;

        case 4:
        printf("DIVISION\n");
        printf("Enter two numbers\n");
        scanf("%d %d",&b,&c);
        printf("The quotient will be %d\n",b/c);
        break;

        case 5:
        printf("CALCULATOR is closed\n");
    }
}