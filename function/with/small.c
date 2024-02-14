#include<stdio.h>

void small(int a, int b)
{
	
	if(a<b)
	{
		printf("a is smallest");
	}else{
	printf("b is smallest");		
	}

}

int small1(int a, int b)
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
	small(20,10);
	
	printf("\n");
	int total=small1(20,30);
	
	printf("smallest is =%d",total);
	
	return 0;
}