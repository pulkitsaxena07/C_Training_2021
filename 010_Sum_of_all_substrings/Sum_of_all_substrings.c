#include<stdio.h>
#include<stdlib.h>
#include<string.h>


long long sumSubstrings(char *s);
int main(void)
{
    char *S;
    long long out;
    printf("S=");
    scanf("%s",S);
    out= sumSubstrings(S);
    printf("%lld",out);

}
long long sumSubstrings(char *s)
{
   long long sum=0,scal=1;
   for(int i=strlen(s);i>0;i--)
   {
       
       sum += (s[i - 1] - '0') * scal * i;
       scal=scal*10+1;

   }
   return sum;
}