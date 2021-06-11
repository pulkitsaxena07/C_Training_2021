#include<stdio.h>
long long getSmallestDivNum(long long n);
long long int gcf(long long int num1,long long int num2);
int main(void)
{
    long long n,out;
    printf("N=");
    scanf("%lld",&n);
    out=getSmallestDivNum((n));
    printf("\nOut=%lld",out);
    return 0;
}
long long getSmallestDivNum(long long n){
        long long int out=1;
        for(long long int i=1;i<=n;i++)
        {
            out=(i*out)/(gcf(i,out));
        }// code here
        return out;
    }
    long long int gcf(long long int num1,long long int num2)
    {
        long long int temp=0;
        if(num1>num2)
        {
            temp=num1;
            num1=num2;
            num2=temp;
        }
        if(num2%num1==0)
        return num1;
        else
        return gcf(num2%num1,num1);

    }
