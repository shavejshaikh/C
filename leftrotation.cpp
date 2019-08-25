#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,l;

    printf("Enter the n\n");
    scanf("%d",&n);
    
    printf("Left rotation\n");
    scanf("%d",&l);

    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    	printf("\n%d",a[i]);
	}
    
    int s;
    s=l/n;
    printf("\n%d",s);
    
    /*
    for(i=0;i<s;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		
		}
	}
	
	*/

    return 0;
}
