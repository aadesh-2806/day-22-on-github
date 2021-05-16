#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,m;
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=1;
	while(x<=n)
	{
		i=1;
		while(i<=n-x)
		{
			printf(" ");
			i=i+1;
		}
		i=i-(n-x);
		while(i<=x)
		{
			printf("%d",i);
			i=i+1;
		}
		i=i-2;
		while(i>=1)
		{
			printf("%d", i);
			i=i-1;
		}
		printf("\n");
		x=x+1;
	}

		x=n-1;
		while(x>=1)
		{
			m=1;
			while(m<=n-x)
			{
				printf(" ");
				m=m+1;
			}
			m=m-(n-x);
			while(m<=x)
			{
				printf("%d",m);
				m=m+1;
			}
			m=m-2;
			while(m>=1)
			{
				printf("%d", m);
				m=m-1;
			}
			printf("\n");
			x=x-1;
		}

	getch();

}
