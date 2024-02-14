#include<stdio.h>

void sum(int p,int r,int n)
{
	
	float total;
	
	total =(p*r*n)/100;
	printf("interest1 is= %.2f",total);
}

int interest(int p,int r,int n)
{
	
	float total;
	
	total =(p*r*n)/100;
	return total;
	
}

int main()
{
	sum(1000,12,5);
	
	printf("\n");
	
	float total;
	total=interest(1000,12,5);
	printf("interest is= %.2f",total);
	
	return 0;
}