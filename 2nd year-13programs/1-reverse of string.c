#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *s;
    int len, i;
    printf("\nENTER A STRING: ");
    gets(s);
    len = strlen(s);
    printf("\nTHE REVERSE OF THE STRING IS:");
    for (i = len; i >= 0; i--)
    {
        printf("%c", *(s + i));
    }
    getch();
}
