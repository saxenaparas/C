/* 
GIVEN TWO NO.S A & B, ADD AND SUBTRACT THEM AND ASSIGN THESE VALUES TO A & B.
INPUT : A=4    OUTPUT: A=7
        B=3            B=1
*/
#include <stdio.h>
void addsubassign(int *x,int *y)
{
    int temp;
    temp= *x ;
    *x = *x + *y ;
    *y = temp - *y ;
}
void main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    addsubassign(&A,&B);
    printf("A = %d\n",A);
    printf("B = %d\n",B);
}