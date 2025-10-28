#include <stdio.h>
#include <conio.h>
void main()
{
    int A[100];
    int a, b, c, i, j;
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

    j = i;
    do
    {
        printf("\nEnter number to be searched: ");
        scanf(" %d", &c);
        i = j;
        while (i--)
        {
            if (A[i] == c)
            {
                printf("%d found at position %d\n", c, i + 1);
                break;
            }
            if (i == 0)
            {
                printf("Number not found\n");
            }
        }
        printf("\nSearch another number? (Y/N): ");
    } while (getche() == 'y' || getche() == 'Y');
}