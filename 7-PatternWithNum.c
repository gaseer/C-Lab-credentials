#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5] = {3, 9, 1, 7, 4};
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", a[5-j]);
        }
        printf("\n");
    }
    return 0;
}

/*void main()
{
    int n, l, t;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (l = 1, t = n / 10; t != 0; t /= 10, l *= 10)
        ;
    printf("\nThe pattern\n");
    for (t = n; t != 0; t %= l, l /= 10)
        printf("\n%d", t);
}*/
