#include<stdio.h>
int isPowerOfFour(unsigned int n);
int main(void)
{
    unsigned int n;
    int out;
    printf("N=");
    scanf("%d",&n);
    out=isPowerOfFour(n);
    printf("\nOut=%d",out);
    return 0;
}
int isPowerOfFour(unsigned int n)
    {
      float power=4;
      if(n==1)
      return 1;
      else
      {
      while(power<=n)
      {
          if(n/power==1)
          return 1;
        power=power*4;
      }
      return 0;// Your code goes here
    }
    }
    