#include <stdio.h>
#include <string.h>
void main()
{
    char s[50], sF[10];
    int len, n = 0, j = 0, i;
    printf("Enter a string : ");
    gets(s);
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        sF[n] = s[j];
        if (s[i] == ' ')
        {
            n = n + 1;
            j = i;
            sF[n] = s[j++];
            // j++;
        }
    }
    printf("\nShort form is :%s", sF);
    // puts(sF);
    return 0;
}




/*#include <stdio.h>
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
}*/
