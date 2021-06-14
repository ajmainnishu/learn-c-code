//write a program that prints values using structure
#include <stdio.h>
int main ()
{
    struct Person    //local structure
    {
        int age;
        float salary;
    };


    struct Person person1, person2;  //local variable

    person1.age = 21;
    person2.salary = 12570.50;

    printf("Person 1:\n");
    printf("Age : %d\n", person1.age);
    printf("Salary : %.2f\n", person1.salary);

    person2.age = 26;
    person2.salary = 52570.50;

    printf("\nPerson 2:\n");
    printf("Age : %d\n", person2.age);
    printf("Salary : %.2f\n", person2.salary);

    return 0;
}
