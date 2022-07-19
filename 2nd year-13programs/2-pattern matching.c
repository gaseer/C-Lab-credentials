#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[100], c;
    int i, f = 0;
    printf("\nenter a string:");
    gets(s);
    printf("\nenter the pattern to find:");
    scanf("%c", &c);
    for (i = strlen(s); i >= 0; i--)
    {
        if (s[i] == c)
        {
            printf("pattern found at:%d \n", i+1);
            f = 1;
        }
    }
    if (f == 0)
        printf("Position not found !");
    getch();
}
