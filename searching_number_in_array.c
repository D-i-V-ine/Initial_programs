#include <stdio.h>
#include <conio.h>
void main()
{
    int A[100];
    int a, b, c, i;
    printf("\nPress any alphatic key to STOP\n");
    i = 0;
    do
    {
        printf("Enter input: ");
        a = scanf("%d", &b);
        {
            A[i] = b;
            i++;
        }
    } while (a == 1);

    while (getchar() != '\n')
        ;

    printf("\nEnter number to be searched: ");
    scanf(" %d", &c);

    while (i--)
    {
        if (A[i] == c)
        {
            printf("%d found at position %d", c, i + 1);
            break;
        }
    }
    if (i == -1)
    {
        printf("Number not found\n");
    }
}
