#include <stdio.h>
int main()
{
    int a[10][10], i, j, r, c, k = 0;
    printf("Enter the rows and column of the sparce matrix:");
    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter values of a%d%d :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix is :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] == 0)
                k = k + 1;
    if (k <= (r * c) / 2)
    {
        printf("error! it is a not a sparce matrix ");
    }
    else
    {
        printf("the sparce matrix has %d non zero values\n", (r * c) - k);
        printf("triplte reprasentation of a sparce matrix is \n");
        printf("row|\t column|\t values|\n");
        printf("%d\t%d\t%d\n", r, c, (r * c) - k);
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != 0)
                    printf("%d\t%d\t%d\n", i, j, a[i][j]);
            }
    }
    return 0;
}
