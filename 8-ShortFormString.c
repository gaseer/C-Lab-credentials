#include <stdio.h>
#include <conio.h>
// TECHIES WEBSITE CODE
void main()
{
    char str[80], c, ss[10];
    int i, j, in = 0;
    printf("Enter a string : ");
    gets(str);
    for (i = 0, j = 0; (c = str[i]) != '\0'; i++)
    {
        if (c < 'A' || c > 'Z' && c < 'a' || c > 'z')
            in = 0;
        else if (!in)
        {
            in = 1;
            ss[j++] = c;
        }
    }
    ss[j] = '\0';
    printf("\nShort form is %s", ss);
}

/*STACK OVERFLOW
#include <stdio.h>
#include <string.h>
int main()
{
    char sent[100];
    char *ptr;
    printf("Enter a sentence : ");
    gets(sent);

    char len = strlen(sent);
    printf("%c", *sent);
    ptr = &sent;
    for (int i = 1; i < len; i++)
    {
        if (*(ptr + i - 1) == ' ')
        {
            printf(" %c", *(ptr + i));
        }
    }
    return 0;
}*/