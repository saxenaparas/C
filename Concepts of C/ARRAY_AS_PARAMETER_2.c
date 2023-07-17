#include <stdio.h>

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    // So, we can see both ptr[i] & *(ptr + i) will work in the same way.

    printf("\n");

    *(ptr + 2) = 6534;
}

void main()
{
    int arr[] = {23, 13, 3, 4};
    func2(arr);
    func2(arr);
}