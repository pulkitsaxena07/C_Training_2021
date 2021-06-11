#include<stdio.h>
int closestNumber(int N , int M);
int main(void)
{
    int n,m,out;
    printf("N=");
    scanf("%d",&n);
    printf("\nM=");
    scanf("%d",&m);
    out=closestNumber(n,m);
    printf("\nOut=%d",out);
    return 0;
}
int closestNumber(int N , int M) {
    
        int i=0;
    while(1)
    {
        if((N+i)%M==0 || (N-i)%M==0)
        break;
        ++i;
        
    }
    if((N-i)%M==0)
    return (N-i);
    else
    return (N+i);
    }