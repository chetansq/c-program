#include<stdio.h>

void pattern(){
	
	for(int i=5; i>=1; i--)
	{
		for(int j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

int pattern1(int n){
	
	for(int i=5; i>=n; i--)
	{
		for(int j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	printf("\n");
	pattern1(1);
	return 0;
}