#include<stdio.h>
int maximizeMoney(int N , int K);
int main(void)
{
    int N,K,out;
    printf("ENTER N ,K :");
    scanf("%d%d",&N,&K);
    out=maximizeMoney(N, K);
    printf("Out=%d",out);
    return 0;
}
  int maximizeMoney(int N , int K) {
        int count=1;int sum=0;
        while(count<=N)// code here
        {
            sum=sum+K;
            count=count+2;
        }
        return sum;
    }
