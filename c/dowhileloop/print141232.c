#include<stdio.h>
int main()
{
	
	int n,a=1;
	
	printf("enter number : ");
	scanf("%d",&n);
	int i=1;
	
		do{
			printf("%d\t",a); //1,4,
			a+=i; // 1+1=2,2+4=6, 
			a*=2; // 2*2=4,6*2=12,
			
			i*=2; //1*2=2,4*2=8,
			
		}while(i<=n);
		
		
	
	return 0;
}