#include<stdio.h>

void sum1(int a, int b)
{
	int total=a+b;
	printf("total = %d",total);
}

int sum(int a, int b)
{
	int total=a+b;
	return total;
}

int main()
{
	sum1(10,20);
	printf("\n");
	int total=sum(20,30);
	
	printf("total is =%d",total);
	return 0;
}