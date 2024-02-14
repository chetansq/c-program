#include<stdio.h>
int main()
{
	int array1[3][3],array2[3][3];
	
	printf("array 1 value:\n\n");
	
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("enter Array1 Raw %d Column %d : ",i,j);
			scanf("%d",&array1[i][j]);
		}
		
		printf("\n");
	}
	
	printf("array 2 value:\n\n");
	
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("enter array2 Raw %d Column %d : ",i,j);
			scanf("%d",&array2[i][j]);
		}
		printf("\n");
	}
	
	
	printf("TOTAL OF 2 ARRAY \n\n");
	

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{	
			
			printf(" %d ",array1[i][j] * array2[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}