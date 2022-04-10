#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char c = 'A';
	int num=1;
	clrscr();
	printf("Enter number of lines\n");
	scanf("%d",&n);
	printf("Pattern ---->\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==1)
			{
				printf("%c ",c);
				c++;
			}
			else
			{
				printf("%d ",num);
				num++;
			}
		}
		printf("\n");
	}
	getch();
}