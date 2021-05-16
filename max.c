#include<stdio.h>

int max(int  ,int );
void main()
{
	int a,b,m;
	
	printf("hello\nenter no.=");
	scanf("%d%d",&a,&b);
	m=max(a,b);
	printf("%d",m);
	
	getch();
													//max
}

int max(int x,int y)
{
	int m;
	if(x>y)
	{
		m=x;
	}
	else
	{
		m=y;
	}
	
	return m;
}
