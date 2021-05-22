#include<stdio.h>
int findNthTerm(int N);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=findNthTerm(n);
    printf("Nth Term=%d",out);
}
int findNthTerm(int N) {
        int sum=1;int increment=2;
        for(int i=1;i<N;i++)
        {
            sum=sum+increment;
            increment=increment+1;
        }
        return sum;
    }