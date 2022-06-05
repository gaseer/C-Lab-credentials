#include <stdio.h>
int main()
{
    int i, space, rows, star = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        // learn this for loop for spacing first it print row-1 then rows-2 then rows-3 so on.....
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        // this to print stars---- first it print 1 then 3 star then5 so onnnn.....
        for (star = 1; star <= (2 * i - 1); star++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}