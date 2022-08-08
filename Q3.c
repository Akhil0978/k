#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10] , i , sumE=0 , sumO=0;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        {
           sumE=sumE+a[i];
        }
        else
        {
            sumO=sumO+a[i];
        }
    }
    printf("The sum of even no. is %d : ",sumE);
    printf("\nThe sum of odd no. is %d : ",sumO);
    return 0;
}
