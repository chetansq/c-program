#include<stdio.h>
int main()
{
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	int i=-n;
	while(i<=n)
	{
		printf("%d\t",i);
		i++;
	}
	return 0;
}