#include<stdio.h>
#include<string.h>
void encrypt(char,char);
char char1[25],char2[25],G[25];
char x[25],array[25][25],y[25];
char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int i,j,z,z1,z2,z3,z4,p,k=0,n=0,count=0,count1=0;
int i1,j1,i2,j2,i3;

void encrypt( char char1 ,char char2)
{	
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(array[i][j]==char1)
				{
					i1=i;
					j1=j;
					printf("\nPosition is %d_%d:%c",i1,j1,char1);
				}
				
				if(array[i][j]==char2)
				{
					i2=i;
					j2=j;
					printf("\nPosition is %d_%d:%c",i2,j2,char2);		
				}
				
			}
		}
		
		if(i1!=i2 and j1!=j2)
		{
			char1=array[i1][j2];
			char2=array[i2][j1];
		}
		
		else if(i1==i2)
		{
			if(j2==4)
			{
				char2=array[i1][0];
				char1=array[i2][j1+1];
			}
			else if(j1==4)
			{
				char1=array[i1][0];
				char2=array[i2][j1+1];
			}
		}
		else
		{
			printf("Invalid hai");
		}
		printf("bABA%c_%c",char1,char2);
	
}

int main()
{

	printf("Enter the keyword:\t");//Enter the Keyword 
	scanf("%s",x);
	
	p=strlen(alpha);//Length of Alphabets
	printf("Enter the Plain-text:\t");//Word to be search
	scanf("%s",y);
	
	printf("\nPlain text is\t:%s",x);
	z=strlen(x);//z to store length of string
	
	printf("\nThe length is\t:%d\n",z);
	
	//Delete repeated word in sentence
		for(i=0;i<z;i++)
	  	{
	  		for(j=i+1;x[j]!='\0';j++)
	  		{
	  			if(x[j]==x[i])  
				{
	  				for(k=j;x[k]!='\0';k++)
					{
						x[k]=x[k+1];
					}
	 			}
			}
		}
		
	printf("\nPlain-text without repeat is:%s",x);
	z1=strlen(x);
	printf("\nThe length is\t:%d\n",z1);
	
	//Compare
		for(i=0;i<z1;i++)
		{
			for(j=0;j<26;j++)
			{
				while(x[i]==alpha[j])
				{	
					alpha[j]=' ';	
				}
			}
		}
		
	//Delete space
	for(i=0;i<26;i++)
		if(alpha[i]!=' ')
		{
			alpha[count++]=alpha[i];
		}
	alpha[count]='\0';
	
		for(i=0;i<z1;i++)
		{
			for(j=0;j<p;j++)
			{
				//if i is there in string
				if(x[i]=='I')
				{
					if(alpha[j]=='J')
					alpha[j]=' ';
				}
				else if(x[i]=='J')
				{
					if(alpha[j]=='I')
					alpha[j]=' ';
				}
				else if(x[i]=='I' and x[i]=='J')
				{
					if(alpha[j]=='P')
					alpha[j]=' ';
				}
				else if(x[i]!='I' and x[i]!='J')
				{
					if(alpha[j]=='J')
					alpha[j]=' ';
				}
				
			}
		}

	z2=strlen(alpha);
	
			//Delete space
		for(i=0;i<26;i++)
			if(alpha[i]!=' ')
			{
				alpha[count++]=alpha[i];
			}
		alpha[count]='\0';
		
		//Concatenate
		strcat(x,alpha);	
		z3=strlen(x);
	
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				array[i][j]=x[n];
				n++;
			}
		}
		
		printf("\nCipher Text matrix is\n");
		printf("\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d|%d:%c",i,j,array[i][j]);
				printf("\t");
			}
			printf("\n\n");
		}	
		
		//Encrypted

		printf("Plain-text is :\t%s",y);
		z4=strlen(y);
		printf("\n");
		for(i3=0;i3<z4;i3+2)
		{
				printf("Plain-text is %c_%c",y[i3]),y[i3+1];
				printf("\n");
				encrypt(y[i3],y[i3+1]);	
		}
		
	
		
	return 0;
}

