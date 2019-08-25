#include <stdio.h>
#define size 10

int largest(int arr[],int n)
{
	int large=arr[0],i;
	for(i=0;i<size;i++)
		if(arr[i]>large)
			large=arr[i];
	return large;
}

void radix(int arr[],int n)
{
	int bucket[size][size],bucket_count[size];
	int i,j,k,rem,nop=0,divi=1,large,pass;
	large=largest(arr,n);

	while(large>0)
	{
		nop++;
		large/=size;
	}

	for(pass=0;pass<nop;pass++)
	{
		for(i=0;i<size;i++)
			bucket_count[i]=0;

		for(i=0;i<n;i++)
		{
			rem=(arr[i]/divi)%size;
			bucket[rem][bucket_count[rem]]=arr[i];
			bucket_count[rem]+=1;
		}
		i=0;
		for(k=0;k<size;k++)
		{
			for(j=0;j<bucket_count[k];j++)
			{
				arr[i]=bucket[k][j];
				i++;
			}
		}
		divi*=size;
	}
}

void main()
{
	int arr[size],i,n;
	printf("Enter the no. of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	radix(arr,n);
	printf("\nThe sorted array is : ");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
}
