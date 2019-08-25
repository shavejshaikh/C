#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the no of element\n");
	scanf("%d",&n);
	
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble sort
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				printf("\n%d--%d\n",a[j],a[j+1]);
			}
		}
	}
	

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	long int sum;
	
	sum=abs(0-a[0]);
	printf("%d",sum);
	for(i=0;i<n-1;i++)
	{
		sum=sum+abs(a[i]-a[i+1]);
		printf("\n%d--%d--->%d\n",a[i],a[i+1],sum);
	}
	
	printf("%d",sum);
	
}

















/*
int findstock(int n,int k,int* a)
{
	int i;
	
	f
}


int main()
{
	int n,v,i;
	int sum;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the value\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the stock value\n");
	scanf("%d",&v);
	
	long int result=findstock(int n,int k,int a);
	
	printf("Stock is: %ld\n",result);

}*/
