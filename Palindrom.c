#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s[20];
    int i, len, temp = 0;
    printf("Enter a string:");
    gets(s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        printf("%s is a palindrome", s);
    }
    else
    {
        printf("%s is not a palindrome", s);
    }
    return 0;
}
