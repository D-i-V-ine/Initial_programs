#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0, a;

    printf("Enter your number : ");
    scanf("%d", &a);
    for (a; a > 0; a = (a / 10))
    {
        i++;
    }
    printf("Number of digits = %d", i);
}