#include<stdio.h>
int minimumMessages(int N);
int main(void)
{
    int N,out;

    scanf("%d",&N);
    out=minimumMessages(N);
    printf("%d",out);
    return 0;


}
int minimumMessages(int N)
{
    return 2*(N-1);
}