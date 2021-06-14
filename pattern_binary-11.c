//write a program that input a number and display binary left triangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        {
            printf("  ");
        }

        for (col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }

    for (row=n-1; row>=1; row--)
    {
        for (col=1; col<=n-row; col++)
        {
            printf("  ");
        }

        for (col=1; col<=row; col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }


    return 0;
}

