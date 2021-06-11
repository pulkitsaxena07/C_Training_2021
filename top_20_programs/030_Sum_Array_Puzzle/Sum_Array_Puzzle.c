#include<stdio.h>
void SumArray(int arr[], int n);
int main(void)
{
    int n;
    printf("N=");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Array Elements:");
    for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    SumArray(arr,n);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
void SumArray(int arr[], int n)
{
    int S=0;
    for(int i=0;i<n;i++)
    S=S+arr[i];// you code here
    for(int j=0;j<n;j++)
     arr[j]=S-arr[j];
}