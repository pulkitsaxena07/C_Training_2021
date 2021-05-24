#include<stdio.h>
char* isValid(long long N);
int main(void)
{
    char *out;
    long long  N;
    printf("N=");
    scanf("%lld",&N);
    out=isValid(N);
    printf("%s",out);
    return 0;

}
char* isValid(long long N)
{
        char *out;
        if(N%5==0)
        out= "YES";
        else
        out= "NO";
        return out;
}