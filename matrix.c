#include <stdio.h>
#include <conio.h>
void main()
{
    int A[100][100];
    int i, j, r, c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element A(%d,%d) : ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrix A : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
