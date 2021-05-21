#include<stdio.h>
int oppositeFaceOfDice(int N);

int main(void)
{
	int N;int out;
	printf("Enter Dice Face number");
	scanf("%d",&N);
	out=oppositeFaceOfDice(N);
	if(out!=-1)
	printf("The number opposite to entered face number is %d",out);
	else
		printf("Invalid number entered");

}

int oppositeFaceOfDice(int N)
{
	if(N>=1 && N<=6)
		return (7-N);
	else
		return -1;
}
