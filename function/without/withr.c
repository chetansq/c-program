#include<stdio.h>

int sum()
{
	int a=10;
	int b=20;
	int total;
	
	total =a+b;
	return total;
	
}
int main()
{
	int total;
	total=sum();
	printf("Total is= %d",total);
	return 0;
}