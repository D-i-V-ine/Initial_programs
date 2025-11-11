#include <stdio.h>
void main()
{
    int a, b, c, i, temp;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    b = 0;
    c = 1;
    temp = 0;
    for (i = 1; i <= a; i++)
    {
        printf("%d\n", b);
        temp = b;
        b = b + c;
        c = temp;
    }
}