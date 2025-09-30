#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sq, cu;
    char a = 'y';

    for (a ; a == 'y' || a == 'Y';)
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        sq = num * num;
        cu = sq * num;
        printf("Square = %d\nCube = %d", sq, cu);
        printf("\nDo you want to continue (y/n) : ");
        a = getche();
        printf("\n");
    }
}
