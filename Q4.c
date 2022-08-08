#include<stdio.h>
int main()
{
    int a[10] ,i, max=-1;
    printf("Enter ten no. : \n ");
     for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
     for (i=0;i<=9;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("The greatest number is %d ",max);
    return 0;
}
