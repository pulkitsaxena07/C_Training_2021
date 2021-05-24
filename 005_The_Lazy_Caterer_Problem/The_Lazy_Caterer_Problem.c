#include<stdio.h>
int maximum_Cuts(int n);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=maximum_Cuts(n);
    printf("%d",out);
    return 0;


}
int maximum_Cuts(int n)
{
     return (n*n+n+2)/2; 
}
