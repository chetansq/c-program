#include<stdio.h>

// with argument without return

void student(int m1,int m2,int m3)
{
	float total,per;
	
	total=m1+m2+m3;
	
	per=(total/300)*100;
	
	printf("%.2f",per);
}

int main()
{
	int a,b,c;
	printf("enter marks = ");
	scanf("%d %d %d",&a,&b,&c);

	student(a,b,c);

	return 0;
}