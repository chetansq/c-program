#include<stdio.h>
#include<string.h>

struct gst{
	
	int product_id;
	int qty;
	int rate;
	float amt,dis,billamt,gst,netbill;
	
};

struct gst gst;

int main()
{
	int n;
	printf("enter product :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		printf("\nproduct id :");
		scanf("%d",&gst.product_id);
		
		printf("rate :");
		scanf("%d",&gst.rate);
		
		printf("qty :");
		scanf("%d",&gst.qty);
		
		gst.amt = gst.qty*gst.rate;
		
		
		float d;
		printf("dis :");
		scanf("%f",&gst.dis);
		
		d= (gst.amt*gst.dis)/100;
		
		gst.billamt = gst.amt - d;
		
		
		float g;
		printf("gst :");
		scanf("%f",&gst.gst);

		g=(gst.billamt*gst.gst)/100;
		
		gst.netbill=gst.billamt + g;
		
		
		printf("\n");
		
		printf("product_id\t rate\t qty\t amt\t   dis\t\t billamt\t gst\t\t netbill\n");
		printf("%d\t\t %d\t %d\t %.2f  %.2f\t %.2f\t %.2f\t %.2f\n",gst.product_id,gst.rate,gst.qty,gst.amt,d,gst.billamt,g,gst.netbill);
		
		printf("\n");
	}
	return 0;
}