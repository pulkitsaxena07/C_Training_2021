#include<stdio.h>
void printFibb(int n);
int main(void)
{
    int n;
    printf("N=");
    scanf("%d",&n);
    printFibb((n));
    return 0;
}
void printFibb(int n) 
    {
      int arr[n];
      arr[0]=1;
      arr[1]=1;
      printf("%d %d ",arr[0],arr[1]);

      
      for (int i=2;i<n;i++) 
      {
      arr[i]=arr[i-1]+arr[i-2];
      printf("%d ",arr[i]);
      }
      
     
      
    }