#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x;
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=1;
	while(x<=n-1)
	{
		i=1;

		while(i<=x)
		{
			printf("%d",i);
			i=i+1;
		}
		i=n-x;
		while(i>=1)
		{
			printf(" ");
			i=i-1;
		}
		i=1;
		while(i<=n-x-1)
		{
			printf(" ");
			i=i+1;
		}
		i=x;
		while(i>=1)
		{
			printf("%d",i);
			i=i-1;
		}
		printf("\n");

		x=x+1;

	}

		i=1;
		while(i<=n)
		{
			printf("%d",i);
			i=i+1;
		}
		i=i-2;
		while(i>=1)
		{
			printf("%d",i);
			i=i-1;
		}
	getch();


}
