#include <stdio.h>
int main()
{
    int a[10][10], r, c, item;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    // asssigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter the item to find: ");
    scanf("%d", &item);
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (a[i][j] == item)
            {
                printf("element found at [%d,%d]", i + 1, j + 1);
                c++;
            }
        }
        if (c == 0)
            printf("Element not found !");
    }
    return 0;
}