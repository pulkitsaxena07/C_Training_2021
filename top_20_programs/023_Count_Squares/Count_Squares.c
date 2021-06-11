#include<stdio.h>
int countSquares(int N);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=countSquares(n);
    printf("\nOut=%d",out);
    return 0;
}
int countSquares(int N) {
        // code here
        int c=0;
        int num=1;
        while(c<N)
        {
            c=num*num;
            num++;
            
        }
        return (num-2);
    }