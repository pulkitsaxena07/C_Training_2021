#include <immintrin.h>
#include <stdio.h>
#include<string.h>
#define ITER 10000
typedef struct 
{
    int x2_init;
    int n;
}sequence;

int Nc = 1600;

int Generate_PR(sequence *ptr )
{
int *x1,*x2;
x1=malloc((Nc+ptr->n+31)*sizeof(int));
x2=malloc((Nc+ptr->n+31)*sizeof(int));
memset(x1,0,31*sizeof(int));
x1[0]=1;

int count=0;
for (int n = 0; n < 31; n++) {

    x2[30-n] = (ptr->x2_init >> n) % 2;

  }
for (int k = 0; k < Nc + ptr->n; k++) {

    x1[k + 31] = (x1[k + 3] + x1[k])% 2;

    x2[k + 31] = (x2[k + 3] + x2[k+ 2] + +x2[k+1] + x2[k]) %2 ;

  }
return (x1[Nc+ptr->n]+x2[Nc+ptr->n]) %2 ;
}


int main(void)
{
    
    sequence PR;
    sequence *ptr=&PR;
    
    PR.x2_init=64;
    int res[ITER];
    wnNrExeTimeX86Intel(0, ITER);

    for(int i=0;i<ITER;i++)
    {
        
    PR.n=i;
    res[i]=Generate_PR(ptr);
    }
    wnNrExeTimeX86Intel(1, ITER);

    for(int i=0;i<ITER;i++)
    printf("%d ",res[i]);
    
    return 0;

}