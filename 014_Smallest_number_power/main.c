#include<stdio.h>

long nearestPowerOf2(long N);
int main(void)
{
    long n,out;
    printf("Enter a number");
    scanf("%ld",&n);
    out=nearestPowerOf2(n);
    printf("Output=%ld",out);
    return 0;
}
long nearestPowerOf2(long N)
{
    float factor=2;
    long k=N;
    
    if(N==1)
    factor=1;
    else
    {
    do
    {
        if(k/factor==1)
        break;
        factor=factor*2;
        N=N/2;


        
    } while (N > 1 );
    

    }  
    return factor; 

}