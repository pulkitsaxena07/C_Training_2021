#include<stdio.h>
int altProduct(int a[], int n);
int main(void)
{
    int n,val,sum;
    int a[100] ;
    printf("Size of Array N=");
    scanf("%d",&n);
    if(n%2==0)
    {
    printf("\n Array a=");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    sum=altProduct(a,n);
    printf("Sum of product=%d",sum);
    }
    else
    printf("Array size should be even");
    return 0;

 

}

int altProduct(int a[], int n)
{
    int sum=0;
    sortfun(a,n);
    for(int i=0;i<n/2;i++)
    sum=sum+a[i]*a[n-i-1];
    return sum;

}
void sortfun(int *a,int n)
{
    int hold=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
        if(a[j]<a[j+1])
        {
            hold=a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
        }
        }
    }
}