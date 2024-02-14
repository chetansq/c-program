#include<stdio.h>

int coin(int amt){
	
	if(amt>=20)
	{
		printf("20 = %d",amt/20);
		amt=amt%20;
	}
	if(amt>=10)
	{
		printf("\n10 = %d",amt/10);
		amt=amt%10;
	}
	if(amt>=5)
	{
		printf("\n5 = %d",amt/5);
		amt=amt%5;
	}
	if(amt>=2)
	{
		printf("\n2 = %d",amt/2);
		amt=amt%2;
	}
	if(amt>=1)
	{
		printf("\n1 = %d",amt/1);
		amt=amt%1;
	}

}

int main()
{
	int n;
	printf("enter number =");
	scanf("%d",&n);
	coin(n);
	return 0;
}