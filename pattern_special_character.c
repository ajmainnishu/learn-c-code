//write a program that input a number and display special character right angle triangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
