#include <stdio.h>

void main()
{
	int i,j,cap,n,temp;
	float temp1;
	
	printf("Enter capacity : ");
	scanf("%d",&cap);
	
	printf("Enter no. of items : ");
	scanf("%d",&n);
	
	float piwi[n],p=0.0,x[n];
	int profit[n],wt[n],index[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter profit and weights of %d items : ",i+1);
		scanf("%d %d",&profit[i],&wt[i]);
		index[i]=i+1;
		piwi[i]=(float)profit[i]/wt[i];
		x[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(piwi[i]<piwi[j+1])
			{
				temp1 = piwi[i];
				piwi[i] = piwi[j+1];
				piwi[j+1] = temp1;
				
				temp = wt[i];
				wt[i] = wt[j+1];
				wt[j+1] = temp;
				
				temp = profit[i];
				profit[i] = profit[j+1];
				profit[j+1] = temp;
				
				temp = index[i];
				index[i] = index[j+1];
				index[j+1] = temp;
			}
		}
	}
	
	printf("\nItem\t Proft\t Weight\t pi/wi\n");
	for(i=0;i<n;i++)
		printf("%d\t %d\t %d\t %.3f\n",index[i],profit[i],wt[i],piwi[i]);
		
	for(i=0;i<n;i++)
	{
		if(cap-wt[i]<0)
		{
			p+=(float)(cap*profit[i])/wt[i];
			x[i]=0.5;
			break;	
		}
		else
		{
			x[i]=1;
			p+=profit[i];
			cap-=wt[i];
		}
	}	
	
	printf("\nTotal Profit = %.3f\n",p);
		
	printf("X={");
	for(i=0;i<n;i++)
		printf("%.1f, ",x[i]);	
	printf("}");	
}
