#include<stdio.h>
int main()
{
	int n,a=1;
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
		
	{	
		printf("%d\t",a);
		a=a+i;
		a=a*2;
		
		i*=2;
		
	}
	
	return 0;
}