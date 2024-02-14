#include<stdio.h>
int main()
{
	int n,a=1,b=1,c;
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
		
	{	
		printf("%d\t",a);		// 1 1 2 3 5 8  
		c=a+b;					// c=2;c=3;c=5;c=8;c=13; 
		a=b;					// 1 2 3 5 8
		b=c;					// 2 3 5 8 13
		
		i++;
		
	}
	
	return 0;
}