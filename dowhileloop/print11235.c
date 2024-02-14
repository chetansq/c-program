#include<stdio.h>
int main()
{
	
	int n,a=1,b=1,c;
	
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	
		do{	
		
			printf("%d\t",a);
			c=a+b;
			a=b;
			b=c;
			i++;
			
		}while(i<=n);
		
		
	
	return 0;
}