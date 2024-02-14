#include<stdio.h>

void pattern(){
	int a=1;
	for(int i=5; i>=1; i--)
	{
		for(int j=i; j<=5; j++)
		{
			if(a%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		a++;
			
		}
		printf("\n");
	}
}

int pattern1(int n){
	int a=1;
	for(int i=5; i>=n; i--)
	{
		for(int j=i; j<=5; j++)
		{
			if(a%2==0)
			{
				printf("0 ");
			}else{
			printf("1 ");				
			}
			a++;
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