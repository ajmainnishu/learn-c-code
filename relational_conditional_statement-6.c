//write a program that input two integer numbers and prints greater or equal value
#include <stdio.h>
int main ()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("Large: %d", num1);

    if (num1 < num2)
        printf("Large: %d", num2);

    if (num1 == num2)
        printf("Numbers are Equal");


    return 0;
}
