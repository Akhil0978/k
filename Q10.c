#include<stdio.h>
int main()
{
    int a[10],b[10] ,i,sum=0;
    printf("Enter ten no. : \n ");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
         b[i]=a[i];
         printf(" %d ",b[i]);
    }
    return 0;
}
