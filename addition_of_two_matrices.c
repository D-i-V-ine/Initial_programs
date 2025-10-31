#include <stdio.h>
#include <conio.h>
void main()
{
    int A[10][10], B[10][10];
    int i, j, k, r, c;
    printf("Enter no of rows (<10) : ");
    scanf("%d", &r);
    printf("Enter noof columns (<10) : ");
    scanf("%d", &c);
    for (k = 0; k < 2; k++)
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (k == 0)
                {
                    printf("Enter A(%d,%d) : ", i + 1, j + 1);
                    scanf("%d", &A[i][j]);
                }
                else
                {
                    printf("Enter B(%d,%d) : ", i + 1, j + 1);
                    scanf("%d", &B[i][j]);
                }
            }
        }
        printf("\n");
    }
    printf("\nMatrix A : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of Matrix A and B : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}
