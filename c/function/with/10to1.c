#include<stdio.h>

// void loop(int n){
	
	// for(int i=10; i>=n; i--)
	// {
		// printf("%d ",i);
	// }
// }

// int loop1(int n)
// {
	// int i;
	// for(i=10; i>=n; i--)
	// {
		// return i;
	// }
	
// }



// int main()
// {
	// loop(1);
	
	// printf("\n");
	
	// int a,j;
	
	// for(a=10; a>=1;a--)
	// {
		// j=loop1(a);
		// printf("%d ",a);
	// }

	// return 0;
// }

void loop(int n){
	
	for(int i=-n; i<=n; i++)
	{
		printf("%d ",i);
	}
}

int loop1(int n)
{
	int i;
	for(i=-n; i<=n; i++)
	{
		return i;
	}
	
}


int main()
{
	loop(5);
	
	printf("\n");
	
	int a,j,n;
	printf("enter ");
	scanf("%d",&n);
	
	for(a=-n; a<=n;a++)
	{
		j=loop1(a);
		printf("%d ",a);
	}

	return 0;
}