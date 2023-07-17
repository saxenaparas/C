#include <stdio.h>
 
void func3(int matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at [%d,%d] is %d\n", i, j, matrix[i][j]);
        }
    }
}
void main()
{
    int arr[2][2] = {{2, 13}, {9, 3}};
    func3(arr);
}