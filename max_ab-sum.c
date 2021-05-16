#include<stdio.h>

void main()
{
	
	int i,b[10],a[50],t,n,m,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	
	t=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)		
		{
			if(a[i]<a[j])
			{
				b[t++]=a[j]-a[i]+j-i;
			}
			else
			{
				b[t++]=a[i]-a[j]+j-i;
			}
		}
	}
	j=t;
	
	m=b[0];
	for(t=1;t<j;t++)
	{
		if(m<b[t])
		{
			m=b[t];
		}
	}
	printf("%d",m);	
	
	getch();
	
}	
