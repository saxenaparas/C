/*
malloc() this stands for memory allocation.
It reserves the given amount of memory in the heap with the given amount of bytes.
The return value is a void pointer needs to be casted to the appropriate type as per requirements.
Default is the void pointer so it needs to be casted appropriate type as per requirements.
If space is insufficient allocation of memory fails and it returns a null pointer.
All the values at the allocated memory are initialized to a garbage value.
*/

// SYNTAX :
// ptr = (ptr - type *)malloc(size_in_byte);.
// Example:
// int* ptr;
// ptr = (int*)malloc(3*sizeof(int)).

// Dynamic memory alloctaion is a part of <stdlib.h> library.

#include <stdio.h>
#include <stdlib.h>
void main()
{
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

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is : %d \n", i, ptr[i]);
    }

    // FREE :
    free(ptr);
}