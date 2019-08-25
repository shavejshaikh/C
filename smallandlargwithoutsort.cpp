#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of element\n");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s,l;
	l=a[0];
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(l<a[i])
		{
			l=a[i];
		}
		
		if(s>a[i])
		{
			s=a[i];
		}
		else
		{
			printf("\n");
		}
	}
	printf("Smallest=%d\n",s);
	printf("largest=%d\n",l);
	return 0;
}
