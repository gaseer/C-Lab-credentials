#include <stdio.h>
int main()
{
    int S[10][10], m, n, i, j, k = 0, size = 0;
    printf("Enter no:of rows and cols for matrix :");
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element in a%d%d : ", i + 1, j + 1);
            scanf("%d", &S[i][j]);
        }
    }
    printf("The matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", S[i][j]);
            if (S[i][j] != 0)
                size++;
        }
        printf("\n");
    }
    int M[3][size];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (S[i][j] != 0)
            {
                M[0][k] = i;
                M[1][k] = j;
                M[2][k] = S[i][j];
                k++;
            }
    printf("Triplet  matrix is \nROW | COLUMN | VALUE\n");
    for (j = 0; j < size; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%d\t\t", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
