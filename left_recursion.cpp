#include<stdio.h>
#include<string.h>


int main()
{
	char production[10][10],alpha,beta,non_terminal;
	int i,n;
	int index=3;
	
	printf("Enter the no production\n");
	scanf("%d",&n);
	
	printf("Grammer is \n");
	for(i=0;i<n;i++)
	{
		scanf("%s",production[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Grammer is %s\n",production[i]);
		non_terminal=production[i][0];
		
		if(non_terminal==production[i][index])
		{
			alpha=production[i][index+1];
			
			
			while(production[i][index]!=0 && production[i][index]!='|')
			{
				index++;
			}
			
			if(production[i][index]!=0)
			{
				beta=production[i][index+1];
				
				
				printf("%c->%c%c\'",non_terminal,beta,non_terminal);
				printf("%c'->%c%c\'|^",non_terminal,alpha,non_terminal);
				
			}
			
			else
			{
				printf("It can't be reduced");
			}
		}
		else
		{
			printf("Grammer is not left recursion\n");
		}
	
		index=3;
	
	
	}
	
	
	return 0;
}
