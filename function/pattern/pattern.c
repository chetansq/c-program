#include<stdio.h>

void pattern(){
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

int pattern1(int n){
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	pattern1(10);
	return 0;
}