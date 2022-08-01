#include <stdio.h>

int main()
{
    int i,j,k,n,m,total,a[30],b[30],c[60];

    printf("enter size of 1st array:");
    scanf("%d",&n);
    printf("enter %d elements \n",n);
    for(i=0;i<n;++i)
    {scanf("%d",&a[i]);}

    printf("enter size of 2nd array:");
    scanf("%d",&m);
    printf("enter %d elements \n",m);
    for(j=0;j<m;++j)
    {scanf("%d",&b[j]);}

    total=m+n;
    i=0,j=0;
    for(i=0;i<n;++i)
    {
       c[i]=a[i];
    }
    for(j=0;j<m;++j,++n)
    {
       c[n]=b[j];
    }
    printf("Array after appending \n");
    for(k=0;k<total;++k)
    {printf("%d\n",c[k]);}
}
