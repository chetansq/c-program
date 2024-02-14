#include<stdio.h>

int fectorial(int n)
{
	if(n<1)
	{
		return 1;
	}
	else{
		return n*fectorial(n-1);
	}
}

int main()
{
	int a;
	
	printf("enter thw value =");
	scanf("%d",&a);
	
	int total=fectorial(a);
	
	printf("fectorial is : %d",total);
	return 0;
}