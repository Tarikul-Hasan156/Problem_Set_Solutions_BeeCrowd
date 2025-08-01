#include<stdio.h>
int main ()
{
    int x,sum=0;
    printf("Please enter the size of Arry :");
    scanf("%d",&x);
    int arr[x];
    int i;
    for (i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
        printf("The numbers are: %d\n",arr[i]);
        sum=sum+arr[i];

    }
    printf("Sum of all this numebr : %d",sum);
    return 0;
    
}