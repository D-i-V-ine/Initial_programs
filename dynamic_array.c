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
        printf("Enter the number of element: ");
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
    for (j = 0; j < i; j++)
    {
        A[j] = *(p + j);
        printf("%d ", A[j]);
        printf("\n");
    }
    free(p);
}