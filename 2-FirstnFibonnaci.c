#include <stdio.h>
int main()
{
    int i = 3, n, t1 = 0, t2 = 1, t3;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    while (i <= n)
    {
        t3 = t1 + t2;
        printf("%d, ", t3);
        t1 = t2;
        t2 = t3;
        i++;
    }
    return 0;
}
