//write a program that prints values using union
#include <stdio.h>

union text
{
    int x,y;
};

int main ()
{
    union text t1;

    t1.x = 10;
    printf("t1.x : %d\n", t1.x);
    printf("t1.y : %d\n", t1.y);

    return 0;
}
