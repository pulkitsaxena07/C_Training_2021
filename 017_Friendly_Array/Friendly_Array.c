#include<stdio.h>
#include<stdlib.h>
int maxim(int arr[], int n);
int sumOfMinAbsDifferences(int arr[], int n);
int main(void)
{
    int n,out;
    int arr[100];
    printf("\n N=");
    scanf("%d",&n);
    printf("Array=");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    out=sumOfMinAbsDifferences(arr,n);
    printf("Out=%d",out);

    
return 0;
}

int sumOfMinAbsDifferences(int arr[], int n)
{
int sum=0;int largest;
for(int i=0;i<n;i++)
{
    int count=0;
    int *element = (int*) malloc(n * sizeof(int));
    for(int j=0;j<n;j++)
    {
        if(i==j)
        continue;
        else
        element[count++]=abs(arr[i]-arr[j]);
    }
    largest=maxim(element,count);
    sum=sum+largest;
    free(element);
}
return sum;
}
int maxim(int arr[], int n)
{
     int hold=arr[0];
    for(int i=1;i<n;i++)
    {
        if(hold>arr[i])
        hold=arr[i];
    }
    return hold;
}