//write a program that input a number and prints its multiplication table using loop
#include <stdio.h>
int main ()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The Multiplication Table: \n");

    for (i=1; i<=10; i++)
    {

        printf("%d * %d : %d\n", num, i, num*i);
    }

    return 0;
}
