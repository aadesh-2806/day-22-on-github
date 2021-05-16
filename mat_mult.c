#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,j,s,a[20][20],b[20][20],c;
	
	printf("hello aadesh agrawal(2019uec1660)\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter value %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter value %d,%d=",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c=0;
			for(s=0;s<n;s++)
			{
				c=c+a[i][s]*b[s][j];
			}
			printf("%d ",c);
		}
		printf("\n");
	}
	
	getch();
}
