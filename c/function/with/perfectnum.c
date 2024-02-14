#include<stdio.h>

void perfect(int n){
	
	int a=0,i;
	
	for(i=1; i<n; i++)
	{
			
		if(n%i==0)
		{
			a=a+i;	
		}	
	}
	
	if(a==n)
	{
		printf("\nperfect number");	
	}
	else
	{	
		printf("\nnot perfect number");
	}
}

int main()
{
	int n;
	printf("enter number =");
	scanf("%d",&n);
	perfect(n);
	return 0;
}