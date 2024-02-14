#include<stdio.h>
int main()
{
	// float a=0.5;
	int n;
	printf("enter number :");
	scanf("%d",&n);
	int i=0;
	while(i<=n) 
	{
		if(i%2==0)
		{
		printf("%.1f\t",i+0.5);			
		}
		else
		{
			printf("%d\t",i);
		}
	i++;	
		// a+=0.5;
	}
	return 0;
}