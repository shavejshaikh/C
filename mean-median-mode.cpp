#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char s[100];

void stringcall(char s[])
{
	int k=0,m=0,i;
	int sz=strlen(s);
	char e1[sz],e2[sz];
	for(i=0;i<sz;i++)
    {
    	if(i%2==0)
    	{
    		e1[k]=s[i];
    		k++;
		}
		else
		{
			e2[m]=s[i];
			m++;
		}
	}
	printf("%s %s",e1,e2);
	printf("\n");
}

int main() 
{
	int n,i;	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%s",s);
		stringcall(s);
	}    
    return 0;
}











/*
int main()
{
	int n,i,j;
	double sum=0,div=0;
	
	printf("Enter the n\n");
	scanf("%d",&n);
	
	int x[n],w[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
		sum+=w[i];
	}
	
	for(i=0;i<n;i++)
	{
		div+=((x[i])*(w[i]));
	}
	
	printf("\n%lf/%lf\n",div,sum);
	printf("%.1f",(div/sum));
	
	
	return 0;
}


int main()
{
	double mean,median;
	int mode;
	int n,i,sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
//Mean	
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
		sum+=a[i];
	}
	mean=(double)sum/n;
	printf("Mean:-%.1lf\n",mean);
//--mean---

//---Median---

	int x1,x2,j,temp,k=0;
	int b[n];
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
			else
			{
				printf("");
			}	
		}	
	}
	
	printf("\nMedian\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	x1=n/2;
	x2=x1-1;
	int h=0;
	median=(double)(a[x1]+a[x2])/2;
	
	printf("\nMedian:%.1lf\n",median);
	
int max=0;	
	for(i=0;i<n;i++)
	{
		int t=a[i];
		k=0;
		for(j=0;j<n;j++)
		{
			if(t==a[j])
			{
				k++;
			}
			if(k>max)
			{
				max=k;
				if(max==1)
				{
					mode=arr[0];
				}
				mode=t;
			}
			
		}
	}
	
	
		printf("Mode:%d\n",mode);
	


	return 0;

}*/
