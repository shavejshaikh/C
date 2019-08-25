#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x[100],h[100];
	int n1,n2,i,j;
	int array[100][100];
	int sum[100];
	
	printf("Enter the value of n-->x\n");
	scanf("%d",&n1);
	
	printf("Enter the value of x[n]\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&x[i]);
	}
	
	printf("Enter the value of h-->x\n");
	scanf("%d",&n2);	
	
	printf("Enter the value of h[n]\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&h[i]);
	}
	
	printf("Diagonal multiplication is\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			array[i][j]=x[i]*h[j];
		}
	}
	
//Multiplication

	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	
		
int z=(n1+n2)-1;
	for(i=0;i<z;i++)
	{
		sum[i]=0;
	}
	
	for(i=0;i<z;i++)
	{
		sum[i]=0;
	}
	
	for(i=0;i<z;i++)
	{
		sum[i]=0;
		for(j=0;j<=i;j++)
		{
			sum[i]+=x[j]*h[i-j];
		}
	}
	printf("Diagonal output is\n");
for(i=0;i<z;i++)
	{
		printf("%d\t",sum[i]);
	}
	
	
	
	return 0;
}
