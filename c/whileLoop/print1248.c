#include<stdio.h>
int main()
{
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		printf("%d\t",i);
		i=i*2;
		
	}
	
	return 0;
}