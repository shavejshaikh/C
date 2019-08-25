#include<stdio.h>
#include<string.h>

int main()
{
	char encry[50],decry[50],str[50],ch;
	int i,j,k;
	
	printf("Enter the string\n");
	gets(str);
	
	printf("\nEnter the keys\n");
	scanf("%d",&k);
	
	for(i=0;str[i]!='\0';i++)
	{
		ch=str[i];
		if(ch>='A' and ch<='Z')
		{
			ch=ch+k;
			if(ch>'Z')
			{
				ch=ch-'Z'+'A'-1;
			}
			encry[i]=ch;
		}
		else if(ch>='a' and ch<='z')
		{
			ch=ch+k;
			if(ch>'z')
			{
				ch=ch-'z'+'a'-1;
			}
			encry[i]=ch;
		}
		else
		{
			encry[i]=ch;
		}
		
	}
	encry[i]='\0';
	printf("Encrypted Messages\n");
	for(i=0;encry[i]!='\0';i++)
		printf("%c",encry[i]);
	
	//Decrypted
	
	for(i=0;encry[i]!='\0';i++)
	{
		ch=encry[i];
		if(ch>='A' and ch<='Z')
		{
			ch=ch-k;
			if(ch<'A')
			{
				ch=ch-'Z'+'A'-1;
			}
			decry[i]=ch;
		}
		else if(ch>='a' and ch<='z')
		{
			ch=ch-k;
			if(ch<'a')
			{
				ch=ch-'z'+'a'-1;
			}
			decry[i]=ch;
		}
		else
		{
			decry[i]=ch;
		}
		
	}
	decry[i]='\0';
	printf("\nDecrypted Messages\n");
	for(i=0;decry[i]!='\0';i++)
		printf("%c",decry[i]);
	
	
	return 0;
}
