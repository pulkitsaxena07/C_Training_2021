#include<stdio.h>
#include<math.h>
int convertFive(int n);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=convertFive(n);
    printf("\nOut=%d",out);
    return 0;
}
int convertFive(int n) {
   
   int count=0;
   int digit;
   int sum=0;
   while(n!=0)
   {
       digit=n%10;
       if(digit==0)
       digit=5;
       sum=sum+digit*pow(10,count);
       count++;
       n=n/10;
       
   }
   return sum;
}
