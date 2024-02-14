#include<stdio.h>

void positive(int a)
{
	
	if(a>0)
	{
		printf("positive");
	}else{
	printf("negative");		
	}

}

int negative(int a)
{
	if(a<0)
	{
	
		return 1;
	}else
	{
		return 0;
	}

}

int main()
{
	positive(-1);
	
	printf("\n");
	
	int total=negative(2);
	
	printf("number is =%d",total);
	
	return 0;
}