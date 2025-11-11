#include <stdio.h>
#include <stdlib.h>
int j;
int *inputint(int *c)
{
    int *p;
    int i, j, a, n;
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
    *c = i;
    return p;
}
//gives the number of elements through pointer c
//and returns the pointer p