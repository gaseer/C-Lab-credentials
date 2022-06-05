#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;
    printf("Enter the string:\n");
    gets(s);
    // loop upto to end of the string -> "\0" is end
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            count++;
    }
    printf("Number of words in given string are: %d\n", count + 1);
}