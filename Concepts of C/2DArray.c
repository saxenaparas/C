#include<stdio.h>
void main()
{
    int array[2][5] = {{23,67,89,23,109},{44,56,76,23,109}};
    /*  its like this 
        {
            {23,67,89,23,109},
            {44,56,76,23,109}
        } 
        A (2x5) Matrix (where 2 rows and 5 columns)
        i.e. rows comes first then column
    */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nPrinting [%d,%d] element of array: %d",i,j,array[i][j]);   
        }
    }
}