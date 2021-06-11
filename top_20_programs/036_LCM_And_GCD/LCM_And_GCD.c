#include<stdio.h>
void lcmAndGcd(long long int A , long long int B);
long long int gcf(long long int num1,long long int num2);

int main(void)
{
    long long int A,B;
    printf("ENTER A ,B");
    scanf("%lld %lld",&A,&B);
    lcmAndGcd(A ,B);
    return 0;

}
 void lcmAndGcd(long long int A , long long int B) {
       
       long long int g,l;
       g=gcf(A,B);
       l=(A*B)/g;
       printf("\nLCM=%lld \n HCF=%lld",l,g);
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