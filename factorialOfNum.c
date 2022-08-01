#include <stdio.h>
int fact(int n)
{
    return (n == 0) ? 1 : n * fact(n - 1);
}

int main()
{
    int num;
    printf(" enve integer :");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, fact(num));
    return 0;
}
