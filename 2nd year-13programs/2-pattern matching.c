#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[100], c;
    int i, len, f = 0;
    printf("\nenter a string:");
    gets(s);
    printf("\nenter a character to find its position:");
    scanf("%c", &c);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            printf("character position:%d \n", i + 1);
            f = 1;
        }
    }
    if (f == 0)
        printf("Position not found !");
    getch();
}