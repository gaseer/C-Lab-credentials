#include<stdio.h>
int main(){
   int i, j, count, temp, n[25];
   printf("Enter number of elements: ");
   scanf("%d",&count);
   
   for(i=0;i<count;i++){
   printf ("Enter element %d :",i+1);
      scanf("%d",&n[i]);}

   for(i=1;i<count;i++){
      temp=n[i];
      j=i-1;
      while((temp<n[j])&&(j>=0)){
         n[j+1]=n[j];
         j=j-1;
      }
      n[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",n[i]);
  
   return 0;
}
