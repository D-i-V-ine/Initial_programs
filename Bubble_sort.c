#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, a, n;
    int *p;
    printf("Enter any alphabet key for exiting\n");
    p = malloc(1 * sizeof(int));
    i = 0;
    while (1)
    {
        printf("Enter the element: ");
        a = scanf("%d", &n);
        *(p + i) = n;
        if (a == 1)
        {
            i++;
            p = realloc(p, (i + 1) * sizeof(int));
        }
        else
        {
            while (getchar() != '\n')
                ;
            break;
        }
    }
    int A[i];
    printf("\n");
    printf("Original array is:\n");
    for (j = 0; j < i; j++)
    {
        A[j] = *(p + j);
        printf("%d ", A[j]);
    }
    printf("\n");
    free(p);

    int temp = 0, k;
    for (k = 0; k < i - 1; k++)
    {
        for (j = 0; j < i - k - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("\n");
    printf("Sorted array is:\n");
    for (k = 0; k < i; k++)
    {
        printf("%d ", A[k]);
    }
}