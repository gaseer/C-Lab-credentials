#include <stdio.h>
#include <conio.h>
int main()
{
    int i, a[20], n, temp, x, j, z;
    printf("Enter of elements:\n");
    scanf("%d", &n);
    printf("Enter %d numbers to be sorted :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sorted list is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    getch();
}
