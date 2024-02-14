#include<stdio.h>

void sum()
{
	int p,r,n;
	float total;
	
	printf("p1 =");
	scanf("%d",&p);
	
	printf("r1 =");
	scanf("%d",&r);
	
	printf("n1 =");
	scanf("%d",&n);
	
	total =(p*r*n)/100;
	printf("interest 1 = %.2f",total);
}

float interest()
{
	int p,r,n;
	float total;
	
	printf("\np =");
	scanf("%d",&p);
	
	printf("r =");
	scanf("%d",&r);
	
	printf("n =");
	scanf("%d",&n);
	
	total =(p*r*n)/100;
	return total;
	
}
int main()
{
	sum();
	
	float total;
	total=interest();
	printf("Total is= %.2f",total);
	
	
	return 0;
}