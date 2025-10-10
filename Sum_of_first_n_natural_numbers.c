#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i, sum = 0 ;
    printf("Enter any natural number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
}