#include<stdio.h>
void sieveOfEratosthenes(int N);
int main(void)
{
    int N;
    printf("N=");
    scanf("%d",&N);
    sieveOfEratosthenes(N);
}
 void sieveOfEratosthenes(int N)
    {
      int num[100]={0};
      for(int i=2;i<=N;i++)
      {
          if(num[i]==0)
          {
              for(int j=i*i;j<=N;j=j+i)
              num[j]=1;
          }
      }
    
        for(int i=2;i<=N;i++)
        {
            if(num[i]==0)
            {
            printf("%d ",i);
            }
        }
        
    }
    