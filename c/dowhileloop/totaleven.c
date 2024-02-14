#include<stdio.h>
int main()
{
	
	int a=0,n;
	
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	
		do{	
			if(i%2==0)
			{
				a+=i;
			}
			i++;
			
		}while(i<=n);
		
		printf("%d\t",a);
	
	return 0;
}