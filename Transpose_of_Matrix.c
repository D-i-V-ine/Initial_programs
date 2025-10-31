#include <stdio.h>
#include <conio.h>
void main()
{
    int A[10][10];
    int i, j, k, r, c;

    printf("Enter number of rows of matrix: ");
    scanf("%d", &r);
    printf("Enter number of coloum of matrix: ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (k = 0; k < 2; k++)
    {
        if (k == 0)
        {
            printf("Matrix A : \n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("\n");
            printf("Transpose of the Matrix A : \n");
            for (i = 0; i < c; i++)
            {
                for (j = 0; j < r; j++)
                {
                    printf("%d ", A[j][i]);
                }
                printf("\n");
            }
        }
    }
}