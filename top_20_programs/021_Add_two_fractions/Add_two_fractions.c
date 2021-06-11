#include<stdio.h>
void addFraction(int num1, int den1, int num2,int den2);
int main(void)
{
  int num1,den1,num2,den2,num,den;
  printf("Enter Num1,Den1,Num2,Den2");
  scanf("%d %d %d %d",&num1,&den1,&num2,&den2);
  addFraction(num1,den1,num2,den2);
  return 0;

}
void addFraction(int num1, int den1, int num2,int den2)
{
int lcm(int num1,int num2);
int den=0;int num=0;
den=lcm(den1,den2);
num=(den/den1)*num1+(den/den2)*num2;
printf("%d/%d\n",num,den);

}

 int lcm(int num1,int num2)
 {
     int gcf(int num1,int num2);
     int g=0;
     g=gcf(num1,num2);
     return (num1*num2)/g;
 }

 int gcf(int num1,int num2)
{
    int temp=0;
    if(num1>num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    if(num2%num1==0)
    return num1;
    else
    return gcf(num2%num1,num1);

}
