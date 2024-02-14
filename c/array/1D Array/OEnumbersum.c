#include<stdio.h>
int main()
{
	
	int arr[4]={10,11,10,13};
	int a=0,b=0;
	
	for(int i=0;i<4; i++)
	{
		if(arr[i]%2==0)
		{
			a=a+arr[4];
		}
		else
		{
			b=b+arr[4];
		}
	
	}
	
	printf("Even : %d\n",a);
	printf("odd : %d\n",b);
	
	return 0;
}