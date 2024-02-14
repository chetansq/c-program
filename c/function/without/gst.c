#include<stdio.h>

// void gst1()
// {
	// int qty,rate;
	// float amt,dis,billamt,gst,netbill;
	
	// printf("enter rate = ");
	// scanf("%d",&rate);
	
	// printf("enter qty =");
	// scanf("%d",&qty);
	
	// amt=rate*qty;
	// printf("%.2f\n",amt);
	
	// printf("dis =");
	// scanf("%f",&dis);
	
	// float d;
	// d= (amt*dis)/100;
	// printf("%.2f\n",d);
	
	// billamt= amt - d;
	// printf("%.2f\n",billamt);
	
	// printf("enter gst=");
	// scanf("%f",&gst);
	
	// float g;
	// g =(billamt*gst)/100;
	// printf("%.2f\n",g);
	
	// netbill=billamt + g;
	// printf("%.2f\n",netbill);
	
	// printf("rate\t qty\t amt\t\t dis\t billamt\t gst\t\t netbill\n");
	// printf("%d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f",rate,qty,amt,d,billamt,g,netbill);
// }

int gst()
{
	int qty,rate;
	float amt,dis,billamt,gst,netbill;
	
	printf("enter rate = ");
	scanf("%d",&rate);
	
	printf("enter qty =");
	scanf("%d",&qty);
	
	amt=rate*qty;
	
	printf("dis =");
	scanf("%f",&dis);
	
	float d;
	d= (amt*dis)/100;
	
	billamt= amt - d;
	
	printf("enter gst =");
	scanf("%f",&gst);
	
	float g;
	g =(billamt*gst)/100;
	
	netbill=billamt + g;
	
	printf("rate\t qty\t amt\t\t dis\t billamt\t gst\t\t netbill\n");
	printf("%d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f",rate,qty,amt,d,billamt,g,netbill);
	
	return netbill;
	
}

int main()
{
	// gst1();
	
	float total;
	total=gst();
	printf("\n%.2f",total);
	
	
	return 0;
}