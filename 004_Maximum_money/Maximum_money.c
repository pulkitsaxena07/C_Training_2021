#include<stdio.h>
int maximizeMoney(int N , int K);
int main(void)
{
int out,N,K;
printf("N=");
scanf("%d",&N);
printf("\nK=");
scanf("%d",&K);
out=maximizeMoney(N,K);
printf("%d",out);
return 0;

}
int maximizeMoney(int N , int K)
{
        int count=1;int sum=0;
        while(count<=N)
        {
            sum=sum+K;
            count=count+2;
        }
        return sum;
    
}