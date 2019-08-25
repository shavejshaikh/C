#include<stdio.h>
#include<conio.h>
#define max 10 

int main()
{
	int a[max][max],dis[max][max],cost[max][max],visited[max];
	int i,n,j,s,e;
	printf("Enter the no of router\n");
	scanf("%d",&n);
	
	printf("Enter the distance between each router\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Start --> End Router\n");
	scanf("%d %d",&s,&e);
	
	//Initialization
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		
	}
	
	return 0;
}
