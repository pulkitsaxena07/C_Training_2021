#include<stdio.h>
long long int sum_of_square_oddNumbers(long long int n);
int  main(void)
{
long long int n,out;
printf("Enter a number \n");
scanf("%lld",&n);
out=sum_of_square_oddNumbers(n);
printf("The sum of squares of odd natural numbers is \n %lld",out);
}

long long int sum_of_square_oddNumbers(long long int n)
{
    long long int sum=0;
    long long int odd_no=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(odd_no*odd_no);
        odd_no=odd_no+2;
    }

return sum;

}