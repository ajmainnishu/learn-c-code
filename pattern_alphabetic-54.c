//write a program that input a number and display alphabetic floyd's triangle pattern
#include <stdio.h>
int main ()
{
    int n, row, col,count=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=row; col++)
        {
            printf("%c ",++count+64);
        }

        printf("\n");
    }

    return 0;
}
