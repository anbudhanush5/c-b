
#include <stdio.h>
#include<conio.h>
void main()
{
	int n,m,o,i;
	scanf("%d %d",&n,&m);
	for(i=2;i<=n;i++)
	{
		if(n%i==0 && m%i==0)
		{
			o=i;
		}
	}
	printf("%d",o);
	getch();
}
