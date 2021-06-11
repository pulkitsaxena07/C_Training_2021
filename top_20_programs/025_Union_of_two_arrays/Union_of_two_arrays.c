#include<stdio.h>
int doUnion(int a[], int n, int b[], int m);
int searchelement(int arr[],int n,int search);
int main(void)
{
    int n,m,out;
    printf("Enter value of N and M(Number of Elements=");
    scanf("%d %d",&n,&m);
    printf("\nEnter First Array:\n");
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    printf("\nEnter second Array\n");
    for(int i=0;i<m;i++)
    scanf("%d",&arr2[i]);
    out=doUnion(arr1,n,arr2,m);
    printf("Output=%d",out);
    return 0;

}
 int doUnion(int a[], int n, int b[], int m)  {
      
      
       int count=1;int arr[m+n];
       arr[0]=a[0];
       for(int i=1;i<m+n;i++)
       {
           if(i<n)
           {
               if(searchelement(arr,count,a[i])==1)
               arr[count++]=a[i];
           }
           else
           {
               if(searchelement(arr,count,b[i-n])==1)
               arr[count++]=b[i-n];
           }
       }
    
        return count;
    }

    int searchelement(int arr[],int n,int search)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        return 0;
    }
    return 1;
}