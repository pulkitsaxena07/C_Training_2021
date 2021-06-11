#include<stdio.h>
int kthDigit(int A,int B,int K);
int main(void)
{
    int A,B,K,out;
    printf("ENTER A ,B ,K ");
    scanf("%d %d %d",&A,&B,&K);
    out=kthDigit(A,B,K);
    printf("Out=%d",out);
    return 0;
}
 int kthDigit(int A,int B,int K){
        
        int dig;
        unsigned long long res=1;
        
        for(int i=1;i<=B;i++)
        {
            res=res*A;
            
        }
        
        
        
        
        for(int k=1;k<=K;k++)
        {
            dig=res%10;
            res=res/10;
        }
        return dig;
    }