#include<stdio.h>
int main()
{
    int a[10] ,i, min=9999999;
    printf("Enter ten no. : \n ");
     for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
     for (i=0;i<=9;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("The smallest number is %d ",min);
    return 0;
}
