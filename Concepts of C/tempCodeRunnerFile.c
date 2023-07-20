#include <stdio.h>
#include <stdlib.h>
void main()
{
    // MALLOC :
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for %d in array : \n", i);
        scanf("%d", &ptr[i]);
    }

    // FREE :
    free(ptr);

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is : %d \n", i, ptr[i]);
    }
}