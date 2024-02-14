#include<stdio.h>
int main()
{
	int n,a=1;
	printf("enter number :");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i*=2)
	{
		
		printf("%d\t",a);			  
		a=a+i;
		a=a*2;
	}
return 0;
}