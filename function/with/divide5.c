#include<stdio.h>

void divide(int a)
{
	
	if(a%5==0)
	{
		printf("divide by 5");
	}else{
	printf("not divide by 5");		
	}

}

int divide1(int a, int b)
{
	if(a<b)
	{
	return a;
		}else{
	return b;		
	}
	
}

int main()
{
	divide(20);
	
	printf("\n");
	int total=divide1(20,30);
	
	printf("divide by =%d",total);
	
	return 0;
}