#include <stdio.h>
/*
    Here we have created a recursive function for factorial
    finding.
    Here we have used :
        n!=n*(n-1)
        1!=1
        0!=1
    these three logics plus we have build a type of a loop 
    form as you can see using this function.
*/
int factorial(int number)
{
    if(number==1||number==0)
    {
        return 1;
    }
    else 
    {
        return (number*factorial(number-1));
    }
}
void main(int num)
{
    printf("\nFACTORIAL \n");
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("The Factorial of %d is :\n%d",num,factorial(num));
}