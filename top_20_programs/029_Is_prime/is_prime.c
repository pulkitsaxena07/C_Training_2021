#include<stdio.h>
#include<math.h>
int isPrime(int N);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=isPrime(n);
    printf("\nOut=%d",out);
    return 0;
}
int isPrime(int N){
       int count=0;
       if(N==1)
       return 0;
       for(int i=2;i<=sqrt(N);i++)
       
       {if(N%i==0)
       return 0;
       }
   return 1;
    }