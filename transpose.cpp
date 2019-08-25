
#include<stdio.h>
// array multiplication
void accept(int a[25][25],int n)
{int i,j;
for(i=0;i<n;i++)
{for(j=0;j<i;j++)
scanf("%d",&a[i][j]);
}
}

void display(int a[25][25],int n)
{int i,j;
for(i=0;i<n;i++)
{for(j=0;j<i;j++)
printf("%d\n",a[i][j]);
}
}

void transpose(int a[25][25],int b[25][25],int n)
{int i,j;
for(i=0;i<n;i++)
{for(j=0;j<i;j++)
{
b[i][j]=a[j][i];
}
}
}

int main()
{int a[25][25],b[25][25],n;
printf("Enter the arrays elements :\n");
scanf("%d",&n);
printf("Enter the arrays:\n");
accept(a,n);
printf("Display the arrays:\n");
display(a,n);
transpose(a,b,n);
printf("%d transpose of %d \n",a,b);
return 0;
}
