#include<stdio.h>
#include<string.h>

char x[100],array1[25],array2[25];//x for keyword and array1 for even position array and array2 for odd possition array
int i,j,n,n1,n2;
int len1,len2,k=0,l=0;

int main()
{
	char decry[100];
	int l1=0,k1=0;
	
	printf("Enter the keyword\n");
	gets(x);
	n1=strlen(x);

	//Remove the blank
	int count=0;
	for(i=0;i<n1;i++)
		if(x[i]!=' ')
		{
			x[count++]=x[i];
		}
	x[count]='\0';
	
	printf("%s",x);
	n=strlen(x);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			array1[l]=x[i];
			l++;
		}
		else
		{
			array2[k]=x[i];
			k++;
		}
		
	}

	len1=strlen(array1);
	len2=strlen(array2);
	
	printf("\n");
	for(i=0;i<len1;i++)
	{
		printf("%c\t",array1[i]);	
	}
	printf("\n");
	for(i=0;i<len2;i++)
	{
		printf("|\t");
	}
	printf("\n");
	for(i=0;i<len2;i++)
	{
		printf("%c\t",array2[i]);	
	}
	strcat(array1,array2);
	printf("\n\nEncryption is:\n%s",array1);
	

	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			decry[i]=array1[l1];
			l1++;
		}	
		else
		{
			decry[i]=array2[k1];
			k1++;
		}
	}	
	printf("\n\nDecryption is:\n");
	for(i=0;i<n;i++)
	{
		printf("%c",decry[i]);
	}

return 0;
}
