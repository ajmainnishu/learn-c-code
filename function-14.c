//write a program that prints array using function
#include <stdio.h>
int main ()
{
    int num[] = {10, 20, 30, 40, 50};
    display (num);

}

void display (int x[])
{
    int i;
    for (i=0; i<5; i++)
        printf("%d ", x[i]);
}
