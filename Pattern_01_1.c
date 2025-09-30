#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, j = 1;
    for (i; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}   