#include<stdio.h>
long long int Nth_term(int a,int r,int n);
int main(void)
{
    int A,R,N;
    long long int out;
    printf("ENTER A ,R ,N ");
    scanf("%d %d %d",&A,&R,&N);
    out=Nth_term(A,R,N);
    printf("Out=%lld",out);
    return 0;

}
long long int Nth_term(int a,int r,int n){
   	  
   	  long long int res,val=1;
   	  
   	  for(int i=1;i<n;i++)
   	  val=val*r;
   	  
   	  res=a*val;
   	  res=res % 1000000007;
   	  
   	  return res;  // Code here
   	} 