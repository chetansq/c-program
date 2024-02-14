#include<stdio.h>
int main()
{
	int arr[4];
	
	arr[0]=10;
	arr[1]=20;
	arr[2]=3;
	arr[3]=40;
	
	for(int i=0;i<4; i++)
	{
		printf("the arr : %d\n",arr[i]);
	}
	
	return 0;
}