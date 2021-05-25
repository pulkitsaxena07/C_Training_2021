#include<stdio.h>
int countOfElements(int arr[], int n, int x);
int main(void)
{
    int N,x,out;int arr[100];

    printf("N=");
    scanf("%d",&N);
    printf("Array=");
    for(int i=0;i<N;i++)
    scanf("%d",&arr[i]);
    printf("x=");
    scanf("%d",&x);
    out=countOfElements(arr,N,x);
    printf("\nOut=%d",out);
    return 0;


}
int countOfElements(int arr[], int n, int x)
{
     int count=0;
 for(int i=0;i<n;i++)
 {
     if(arr[i]<=x)
     count=count+1;
 }
 return count;
}