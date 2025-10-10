#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    int sum = 0;
    printf("Enter your  number : ");
    scanf("%d", &a);
    for (a; a > 0; a = (a / 10))
    {
        sum += (a % 10);
    }
    printf("Sum of all digits = %d", sum);
}