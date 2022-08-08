#include<stdio.h>
int main()
{
    int a[10] ,i,sum=0;
    float avg=0;
    printf("Enter ten no. : \n ");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum= sum + a[i];
    }
    avg=sum/10.0 ;
    printf("The average  is %f ",avg);
    return 0;
}
