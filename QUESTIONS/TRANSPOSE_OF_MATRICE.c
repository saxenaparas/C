#include <stdio.h>
// rows x column
void main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int A[m][n];
    int B[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("THE VALUE OF [%d][%d] element is :\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
}