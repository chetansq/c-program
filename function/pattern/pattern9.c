#include<stdio.h>

void pattern(){
	char a='A';
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
		
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}

int pattern1(int n){
	char a='A';
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++){
		
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	pattern1(5);
	return 0;
}