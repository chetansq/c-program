#include<stdio.h>
int main()
{
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	
		do{	
			
			printf("%d\t",i);
			
			i++;
		}while(i<=n);
		
	
	return 0;
}