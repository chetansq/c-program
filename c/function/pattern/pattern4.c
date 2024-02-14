#include<stdio.h>

void pattern(){
	
	int a=1;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}

int pattern1(int n){
	int a=1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d +",a);
			a++;
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	pattern1(6);
	return 0;
}