#include <stdio.h>
#include <conio.h>
void main()
{
    int A[10][10], B[10][10], M[10][10];
    int i, j, k, r, c, r1, r2, z, y, a, c1, c2;

    for (k = 0; k < 2; k++)
    {
        printf("Enter of rows (<10) : ");
        scanf("%d", &r);

        printf("Enter of columns (<10) : ");
        scanf("%d", &c);
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (k == 0)
                {
                    printf("Enter A(%d,%d) : ", i + 1, j + 1);
                    scanf("%d", &A[i][j]);
                    r1 = i + 1;
                    c1 = j + 1;
                }
                else
                {
                    printf("Enter B(%d,%d) : ", i + 1, j + 1);
                    scanf("%d", &B[i][j]);
                    r2 = i + 1;
                    c2 = j + 1;
                }
            }
        }
        printf("\n");
    }
    if (r1 != c2)
    {
        printf("Matrix multiplication not possible.\n");
    }
    else
    {
        for (k = 0; k < r1; k++)
        {
            a = 0;
            for (i = 0; i < c2; i++)
            {

                y = 0;
                for (j = 0; j < r2; j++)
                {

                    z = A[k][j] * B[j][i];
                    y = y + z;
                }
                M[k][a] = y;
                a++;
            }
        }
        printf("\nMatrix A : \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix B : \n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }
        printf("\nMultiplication of Matrix A and B : \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", M[i][j]);
            }
            printf("\n");
        }
    }
}