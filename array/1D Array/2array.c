#include<stdio.h>
int main()
{
	int arr1[]={10,20,30,40};
	int arr2[]={1,2,3,4};
	
	for(int i=0;i<4; i++)
	{
		printf("the array 1 is : %d\n",arr1[i]);
	}
	
	printf("\n");
	
	for(int i=0;i<4; i++)
	{
		printf("the array 2 is : %d\n",arr2[i]);
	}
	return 0;
}