#include<stdio.h>
void sortfun(int *arr,int n);
long long int maxSum(int a[], int n);
int main(void)
{
    
    int n,out;
    int arr[100];
    printf("\n N=");
    scanf("%d",&n);
    printf("Array=");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    out=maxSum(arr,n);
    printf("\n Output is  :%d",out);
    return 0;
}
long long int maxSum(int a[], int n)
{
    sortfun(a,n);
    int i=0;
    int j=n-1;
    int sum=0;
    int count=0;
    while(i<j)
    {
        sum=sum+abs(a[i]-a[j]);
        if(count%2==0)
        i++;
        else
        j--;
        count++;
    }
    sum=sum+abs(a[j]-a[0]);
    return sum;
    
}
void sortfun(int *a,int n)
{
    int temp,j;
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

       
    }
}