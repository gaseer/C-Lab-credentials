#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;
    
    printf("Enter number of elements: ");
    scanf("%d", &number);
    
    for(i = 0; i < number; i++)
      {
       printf ("Enter element %d :",i+1);
        scanf("%d", &a[i]);
      }
   
    for(i = 1; i <= number - 1; i++)
    {
        for(j = i; j > 0 && a[j - 1] > a[j]; j--)
        {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
        }
    }
    printf("\n Insertion Sort Result : ");
    for(i = 0; i < number; i++)
    {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}
