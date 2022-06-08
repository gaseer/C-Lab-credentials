/*When the sum of the cube of the individual digits of a number
 is equal to that number, the number is called Armstrong number. For example 153.
Sum of its divisor is 13 + 53;+ 33; = 1+125+27 = 153*/
#include <stdio.h>

void main()
{
    int num, d, sum, n, start, end;

    printf("Input starting number of range: ");
    scanf("%d", &start);

    printf("Input ending number of range : ");
    scanf("%d", &end);

    printf("Armstrong numbers in given range are: ");
    for (num = start; num <= end; num++)
    {
        n = num;
        sum = 0;

        while (n > 0)
        {
            d = n % 10;
            sum = sum + (d * d * d);
            n = n / 10;
        }
        if (sum == num)
            printf("%d, ", num);
    }
    printf("\n");
}
