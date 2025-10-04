#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter your number : ");
    scanf("%d", &x);
    if ((x % 2) == 0)
    {
        printf("%d is an even number", x);
    }
    else
    {
        printf("%d is an odd number", x);
    }
    getch();
}