#include<stdio.h>
long long int factorial(long long int N);
int main(void)
{
    long long int n,out;
    printf("N=");
    scanf("%lld",&n);
    out=factorial(n);
    printf("\nOut=%lld",out);
    return 0;
}
long long int factorial(long long int N){
      
      /*if (N==1)
      return N;
      else
      return N*factorial(N-1);*/
      long long int count=1;
      for(int i=1;i<=N;i++)
      count=count*i;
      return count;
}