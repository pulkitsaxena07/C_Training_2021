#include<stdio.h>
int minimumStep(int N);
int main(void)
{
    int n,out;
    printf("N=");
    scanf("%d",&n);
    out=minimumStep(n);
    printf("\nOut=%d",out);
    return 0;
}
 int minimumStep(int n){
        int count=0;
        while(n>1)
        {
            if(n%3==0)
             n=n/3;
             else
             n--;
                
            count++;
            
        }
        return count;
    }