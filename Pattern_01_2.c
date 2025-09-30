#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, g, j = 1;
    printf("Enter the number of rows : ");
    scanf("%d", &g);
    for (i; i <= g; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}