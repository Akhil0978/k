#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter ten no. : \n ");
     for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<9;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nThe second largest no. is %d ",a[8]);
    return 0;
}

