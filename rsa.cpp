

#include<stdio.h>
#include<string.h>
int main()
{
	int d=0,p,q,n,e=0,pn,i,x,m=0,c,max;
	char strng[20];
	
	printf("\nEnter 2 prime numbers : ");
	scanf("%d %d",&p,&q);
	
	n=p*q;
	printf("\nn: %d",n);
	
	pn=(p-1)*(q-1);
	
	for(i=2;i<=pn;i++)
	{
		int r,j,k;
		j=i;
		k=pn;
		while(k!=j)
		{
			if(k>j)
			{
				k=k-j;
			}
			else
			{
				j=j-k;
			}
		}
		if(k==1)
		{
			e=i;
			break;
		}
	}
	
	printf("\ne: %d",e);
	
	for(i=1;i<=pn;i++)
	{
		x=(e*i)%pn;
		if(x==1)
		{
			printf("\nd: %d",i);
			printf("\nThe private key is d: %d",i);
			d=i;
			break;
		}
	}
	
	printf("\nThe public key is (n,e): %d %d",n,e);
	printf("\nEnter message to encrypt : ");
	scanf("%s",strng);
	
	strcat(strng,"");
	max=strlen(strng);
	
	for(i=0;i<max;i++)
	{
		m+=strng[i];
	}
	
	c=((m)^e)%n;
	printf("\nThe encrypted message is : %d",m);
	
	m=(c^d)%n;
	printf("\nThe decrypted message is : %s\n",strng);
	
	return 0;
	
}

