#include<stdio.h>

void pattern(){
	
	for(int i='A'; i<='E'; i++)
	{
		for(int j=i; j>='A'; j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

int pattern1(int n){
	
	for(int i='A'; i<=n; i++)
	{
		for(int j=i; j>='A'; j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

int main()
{
	pattern();
	printf("\n");
	pattern1('E');
	return 0;
}