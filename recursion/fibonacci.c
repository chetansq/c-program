#include<stdio.h>

int fibonacci(int n)
{
	
			if(n<1)
			{
				return 1;
			}
			else
			{			
				 return	fibonacci(n-1) + fibonacci(n-2);
			}
	
}

int main()
{
	int a;
	
	printf("enter the value = ");
	scanf("%d",&a);
	
	int total;
	
	for(int i=0; i<a; i++)
	{
		total=fibonacci(i);
		printf("%d ",total);
		
	}
	
	
	return 0;
}