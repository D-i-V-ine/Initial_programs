#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    char i;
    for (i = 'y'; i == 'y' || i == 'Y';)
    {

        printf("Enter first number : ");
        scanf("%d", &a);
        printf("Enter second number : ");
        scanf("%d", &b);
        printf("Enter third number : ");
        scanf("%d", &c);

        printf("%d + %d + %d = %d", a, b, c, (a + b + c));

        printf("\nDo you want to continue (y/n) : ");
        i = getche();
        printf("\n");
    }
}