 #include<Stdio.h>
 int main()
 {
	
	 for(int i=1; i<=4; i++)
	{
		for(int k=5; k>i; k--)
		{
			printf(" ");
		}
		for(int j=1; j<=2*i-1; j++)
		{
			
			printf("*");
			
		}
		printf("\n");
			
	} 
	
	
 for(int i=3; i>=1; i--)
	{
		for(int k=5; k>i; k--)
		{
			printf(" ");
		}
		for(int j=1; j<=2*i-1; j++)
		{
			
			printf("*");
			
		}
		printf("\n");
			
	} 
	
	
	
	 
	return 0;
 }