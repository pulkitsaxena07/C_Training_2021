#include<stdio.h>
#include<math.h>
int setAllOddBits(int n);
int main(void)
{
    int n,out;
    printf("Enter a number");
    scanf("%d",&n);
    out=setAllOddBits(n);
    printf("Output=%d",out);
    return 0;
}
int setAllOddBits(int n)
{
    int a[50];
    int j=0,k=0,sum=0,powe=1;
    while(n>=1)
    {
        if(j%2==0)
        a[j]=1;
        else
        a[j]=n%2;
        n=n/2;
        j++;
    }

for(int i=0;i<j;i++)
{sum=sum+a[i]*powe;
powe=powe*2;
}
return sum;


}