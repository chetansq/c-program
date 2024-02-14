#include<stdio.h>
int main()
{
	int array[3][3],total;
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("enter Raw %d Column %d : ",i,j);
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{	
	
			if(i==j)
			{
				total=array[0][0] + array[1][1] + array[2][2];
							
			}

		}
		printf("\n");
	}
	
	printf(" %d \n",total);
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{	
	
			if(i<j)
			{
			total=array[0][1] + array[0][2] + array[1][2];				
			}

		}
		printf("\n");
	}
	
	printf(" %d \n",total);
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{	
	
			if(i>j)
			{
			total=array[1][0] + array[2][0] + array[2][1];				
			}

		}
		
		printf("\n");
	}
	
	printf(" %d \n",total);
	return 0;
}