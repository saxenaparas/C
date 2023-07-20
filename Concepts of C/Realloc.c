/*
realloc() stands for reallocation.
If the dynamically allocated memory is insufficient then we can change the size of the previously allocated memory. 
*/

// SYNTAX :
// ptr = (ptr-type*) realloc(ptr, new_size_in_bytes);.

// Dynamic memory alloctaion is a part of <stdlib.h> library.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // CALLOC :

    int n;
    printf("Enter the size of the array you want to create :\n");
    scanf("%d",&n);

    int *ptr;
    ptr = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value for %d in array : \n",i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is : %d\n",i,ptr[i]);
    }

    // REALLOC :
    printf("Enter the new size of the array you want to create :\n");
    scanf("%d",&n);

    ptr = (int *) realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value for %d in array : \n",i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is : %d\n",i,ptr[i]);
    }

    // FREE :
    free(ptr);
}