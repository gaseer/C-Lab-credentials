#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[100], c;
    int i, f = 0;
    printf("\nenter a string:");
    gets(s);
    printf("\nenter a character to find its position:");
    scanf("%c", &c);
    for (i = strlen(s); i >= 0; i--)
    {
        if (s[i] == c)
        {
            printf("character position:%d \n", i+1);
            f = 1;
        }
    }
    if (f == 0)
        printf("Position not found !");
    getch();
}
/* ABOVE GIVEN IS THE SIMPLEST PROGRAM TO SEARCH A CHARACTER. To search a string use the below code
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20], p[20];
    int a, b, i, j;
    printf("Enter the string : ");
    gets(s);
    printf("Enter the pattern to find : ");
    gets(p);

    a = strlen(p);
    b = strlen(s);

    for (i = 0; i <= b - a; i++)
    {
        for (j = 0; j < a; j++)
            if (s[i + j] != p[j])
                break;
        if (j == a)
            printf("Pattern found position %d \n", i + 1);
    }
    return 0;
}
*/
