#include<stdio.h>
void main()
{
    int array[2][5] = {{23,67,89,23,109},{44,56,76,23,109}};
    /*  
        Now printing this in matrix form 
    */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\t%d",array[i][j]);   
        }
        printf("\n");
    }
}