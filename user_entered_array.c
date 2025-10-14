#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a;
    int A[100];

    printf("Enter \"any alphabet\" to stop entering elements in array\n");

    i = 0;
    while (1)
    {
        printf("Enter input : ");
        a = scanf("%d", &A[i]);
        if (a == 0)
        {
            break;
        }
        i++;
    }
    printf("Array : ");
    printf("{");
    for (int j = 0; j < i; j++)
    {
        printf("%d", A[j]);
        if (j != i - 1)
        {

            printf(",");
        }
    }
    printf("}");
}