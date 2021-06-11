#include<stdio.h>
int middle(int A, int B, int C);
int main(void)
{
    int A,B,C,out;
    printf("ENTER A ,B ,C ");
    scanf("%d %d %d",&A,&B,&C);
    out=middle(A,B,C);
    printf("Out=%d",out);
    return 0;

}
  int middle(int A, int B, int C){
     if((A<B && B<C) || (C<B&&B<A))
     return B;
     else if(B<A &&A<C || C<A && A<B)
     return A;
     else
     return C;
     
    }