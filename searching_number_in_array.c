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
}
