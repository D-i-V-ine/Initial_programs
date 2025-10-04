#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, a = 0;
    printf("Enter positive number : ");
    scanf("%d", &j);
    if (j > 1)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                a = 1;
                break;
            }
        }
    }
    else
    {
        a = 1;
    }

    if (a == 1)
    {
        printf("%d is not a prime", j);
    }
    else
    {
        printf("%d is  a prime", j);
    }
}