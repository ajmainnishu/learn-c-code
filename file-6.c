//write a program that read characters using file
#include <stdio.h>
int main ()
{
    FILE *file;
    char ch;

    file = fopen("text.txt", "r");

    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");

        while (!feof(file))
        {
            ch = fgetc(file);
            printf("%c", ch);
        }
        fclose(file);
    }
    return 0;
}
