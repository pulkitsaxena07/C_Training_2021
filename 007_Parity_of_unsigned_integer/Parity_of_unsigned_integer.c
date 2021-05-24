#include<stdio.h>
char* computeParity(int N);
int main(void)
{
    int N;char* out;
    printf("N=");
    scanf("%d",&N);
    out=computeParity(N);
    printf("%s",out);
    return 0;

}
char* computeParity(int N)
{
    int count_one=0;
        char *out;
        while(N>=1)
        {
            if(N%2==1)
            count_one=count_one+1;
            N=N/2;
        }
        if(count_one%2==1)
        
        {out="odd";
            return out;
        }
        else
        {
          out="even";
          return out;
        }
}