#include<stdio.h>
int find(int N);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=find(n);
    printf("\nOut=%d",out);
    return 0;
}
  int find(int N){ 
     return N+1;   
    }