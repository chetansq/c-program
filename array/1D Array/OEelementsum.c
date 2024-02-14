#include<stdio.h>
int main()
{
	int arr[4]={10,14,17,13};
	int a=0,b=0;
	 
	for(int i=0;i<4; i++)
	{
		if(arr[i]%2==0)
		{
			a=a+arr[i];
		}
		else
		{
			b=b+arr[i];
		}
	
	}
	
	printf("Even : %d\n",a);
	printf("odd : %d\n",b);
	
	return 0;
}