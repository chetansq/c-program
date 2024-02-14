#include<stdio.h>
int main()
{
	int arr[4];
	
	for(int i=0; i<4; i++)
	{
		printf("enter the array :");
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<4; i++)
	{
		printf("the arr : %d\n",arr[i]);
	}
	
	return 0;
}