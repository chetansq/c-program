#include<stdio.h>

void pattern(){
	
	for(int i='A'; i<='E'; i++)
	{
		for(int j='A'; j<=i; j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}

int pattern1(char n){
	
	for(int i='A'; i<=n; i++)
	{
		for(int j='A'; j<=i; j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	printf("\n");
	pattern1('H');
	return 0;
}