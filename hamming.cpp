#include<stdio.h>

int main()
{
	int a[50],n,i,b[25];
	int p1,p2,p4;//parity
	int c,c1,c2,c4;//correction
	printf("\n*************HAMMING CODE**************\n");
	printf("Enter the number (4 bit):\n");
	scanf("%d",&n);
	
	printf("Enter the %d bit in a arrays (O and 1):\n",n);
	for(i=1;i<=n+3;i++)
	{
		if(i==1 || i==2 || i==4)
		{
			a[i]=0;
		}
		else
		{
			scanf("%d",&a[i]);
		}
		
	}

	p1=0;
	p2=0;
	p4=0;
	
	for(i=1;i<=n;i++)
	{
		p1=p1^a[i+1+i];
	}
	a[1]=p1;

	
	for(i=0;i<1;i++)
	{
		p2=p2^a[i+3]^a[i+6]^a[i+7];
	}
	a[2]=p2;

	
	for(i=1;i<n;i++)
	{
		p4=p4^a[i+4];
	}
	a[4]=p4;

	
	printf("\nEncoded data are:\n");
	for(i=1;i<=n+3;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nEnter the received data:\n");
	
	for(i=1;i<=n+3;i++)
	{
		scanf("%d",&b[i]);
	}
	
	c1=b[1]^b[3]^b[5]^b[7];
	c2=b[2]^b[3]^b[6]^b[7];
	c4=b[4]^b[5]^b[6]^b[7];
	
	c=(c4*4)+(c2*2)+c1;
	
	if(c==0)
	{
		printf("\n\n******Datacode receives is Correct******\n");
	}
		
	else
	{
		printf("\nError at position %d \n",c);
		
		printf("\n****Error Correction is*****\n");
		printf("\nData send is:\n");
			for(i=1;i<=n+3;i++)
			{
				printf("%d\t",a[i]);
			}
		printf("\nData received is:\n");
			for(i=1;i<=n+3;i++)
			{
				printf("%d\t",b[i]);
			}
		printf("\n\n*****Correct messages is*****\n");
	
		if(b[c]==0)
		{
            b[c]=1;
        }
        else
        {
			b[c]=0;
		}
        
        for (i=1;i<=n+3;i++)
		 {
            printf("%d\t",b[i]);
   		 }
		
	}
		
	return 0;
}
