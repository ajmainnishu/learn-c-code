//write a program that input a number and display alphabetic rectangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n; col++)
        {
            if (row==1 || row==n || col==1 || col==n)
                printf("%c", col+64);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
