//write a program that input a letter and prints vowel or consonant
#include <stdio.h>
int main ()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;


    default:
        printf("Consonant");

    }

    return 0;

}
