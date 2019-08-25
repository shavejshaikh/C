#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int array1[25],array2[100][100],emessage[111];
char key[100],mess[25],encry[25][25];
char alpha[50]="abcdefghijklmnopqrstuvwxyz";
int n,n1,i,j,k=0,count=0,index,ez;

int main()
{
	printf("Enter the plaintext:\n");
	gets(mess);
	n=strlen(mess);//length of plaintext
	printf("%d\n",n);
	
	printf("Enter the Keyword:\n");
	gets(key);	
	n1=strlen(key);//length of keyword
	printf("%d\n",n1);	
	
	
	
int l;
l=0;
int m[50];
	
	for(i=0;i<strlen(alpha);i++)
	{
		for(j=0;j<n1;j++)
		{
			if(alpha[i]==key[j])
			{
				l++;
				m[j]=l;
			}
		}
	}
	m[j]='\0';
	for(i=0;i<n1;i++)
	{	
	printf("%d",m[i]);
	}
	
int row,e;

	e=n1-n%n1;
	ez=n1-n%n1;
	printf("%d",ez);
	for(i=0;i<e;i++)
	{
		mess[n]='x';
		n++;	
	}
	
	row=strlen(mess)/n1;
	l=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<n1;j++)
		{
			encry[i][j]=mess[l];
			l++;
		}
		
	}
	
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%c",encry[i][j]);
		}
		printf("\n");
	}

int min,z,e1;
int l1=0;
min=1;
char z1[25];

	for(z=0;z<strlen(key);z++)
	{
		for(i=0;i<strlen(key);i++)
		{
			if(m[i]==min)
			{
				e1=i;	
			}
		}
		for(j=0;j<row;j++)
		{
			z1[l1]=encry[j][e1];
			l1++;	
		}
		min++;
	}
	z1[l1]='\0';
	printf("Encrypted messages\n");
	printf("%s",z1);
	
	printf("\n");
	//Decryption
	for(i=0;i<n1;i++)
	{	
		printf("%d",m[i]);
	}
	
l1=0;
min=1;
	for(z=0;z<strlen(key);z++)
	{
		for(i=0;i<strlen(key);i++)
		{
			if(m[i]==min)
			{
				e1=i;	
			}
		}
		for(j=0;j<row;j++)
		{
			encry[j][e1]=z1[l1];
			l1++;	
		}
		min++;
	}

char de[50];
	
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<strlen(key);j++)
		{
			printf("%c",encry[i][j]);
		}
		printf("\n");
	}
	
	l=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<strlen(key);j++)
		{
			de[l]=encry[i][j];
			l++;
		}
	}
	de[l]='\0';
	
	printf("Decrypted messages\n");
	printf("%s",de);
	

	for(i=0;i<ez;i++)
	{
		de[n]=' ';
		n--;	
	}
	de[n]='\0';
	
	printf("\nDecrypted messages\n");
	printf("%s",de);
	return 0;	
}
