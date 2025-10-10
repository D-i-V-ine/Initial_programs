#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y = 1;
    printf("Enter your number : ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("Factorial of a negative number doesn't exist");
    }
    else if (x > 0)
    {
        if (x != 0)
        {
            for (x; x > 0; x--)
            {
                y = y * x;
            }
        }
        printf("Factorial = %d", y);
    }

    else
    {
        printf("Enter valid input");
    }
}