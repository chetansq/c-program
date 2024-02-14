#include<stdio.h>
int main()
{
	
	char n;
	
	printf("enter number : ");
	scanf("%c",&n);
	int i='A';
	
		do{	
			if(i%2!=0)
			{
			printf("%c\t",i);
			}
			i++;
			
		}while(i<=n); // n=E
		
		
	
	return 0;
}