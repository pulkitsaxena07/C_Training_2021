#include<stdio.h>
int chocolates(int arr[], int n);
int main(void)
{
    int n,out;
    int arr[100];
    printf("\n N=");
    scanf("%d",&n);
    printf("Array=");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    out=chocolates (arr,n);
    printf("Out=%d",out);

    
return 0;
}
int chocolates(int arr[], int n)
{
     int hold=arr[0];
    for(int i=1;i<n;i++)
    {
        if(hold>arr[i])
        hold=arr[i];
    }
    return hold;
}