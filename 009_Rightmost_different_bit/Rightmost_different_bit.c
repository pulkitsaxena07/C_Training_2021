#include<stdio.h>
int posOfRightMostDiffBit(int m, int n);
int main(void)
{
    int m,n,out;
    printf("M=");
    scanf("%d",&m);
    printf("N=");
    scanf("%d",&n);
    out=posOfRightMostDiffBit(m,n);
   
    printf("%d",out);
    return 0;
}
int posOfRightMostDiffBit(int m, int n)
{int count=0;
int out;
out=m^n;
if(out!=0)
{
    while(out>=1)
    {
        if(out%2==0)
        count=count+1;
        else
        {
            count=count+1;
            break;
        }
        out=out/2;
    }
    return count;
}
else
return -1;
}
