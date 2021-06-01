#include<stdio.h>
int CountPairs (int arr[], int n);
int main(void)
{
    int n,out;
    int arr[100];
    printf("\n N=");
    scanf("%d",&n);
    printf("Array=");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    out=CountPairs (arr,n);
    printf("Out=%d",out);

    
return 0;
}
int CountPairs (int arr[], int n)
{
    int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                
                    if((arr[i]+arr[j])<arr[i]*arr[j])
                    count++;
                
            }
        }
        return count;
}