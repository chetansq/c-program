#include<stdio.h>

void pattern(){
	
	for(int i=5; i>=1; i--)
	{
		for(int j=5; j>=i; j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

int pattern1(int n){
	
	for(int i=5; i>=n; i--)
	{
		for(int j=5; j>=i; j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	pattern1(0);
	return 0;
}