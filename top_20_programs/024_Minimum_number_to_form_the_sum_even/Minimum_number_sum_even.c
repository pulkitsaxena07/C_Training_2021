#include<stdio.h>
int minNum(long long int arr[],int n);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    long long int arr[n];
    printf("\nEnter Array Elements:");
    for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    out=minNum(arr,n);
    printf("Output=%d",out);
    return 0;
}
int minNum(long long int arr[],int n)
	{
	 int sum=0;
	 for(int i=0;i<n;i++)
	 sum=sum+arr[i];
	 if(sum%2==0)
	 return 2;
	 else
	 return 1;
	
	}