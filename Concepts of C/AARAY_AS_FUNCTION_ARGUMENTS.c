#include <stdio.h>

int func(int array[])
{
    int sum = 0, i;
    for (i = 0; i < 5; i++)
    {
        sum += array[i];
    }
    return (sum / i);
}

void main()
{
    int i, arr[5];
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("THE AVG. OF INPUT NO.S WILL BE : %d", func(arr));
}

// Inside func() if you change the value of array then it's gets reflected in the main function.