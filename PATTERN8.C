#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char c = 'A';
	clrscr();
	printf("Enter number of lines\n");
	scanf("%d",&n);
	printf("Pattern ---->\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("%c ",c);
		printf("\n");
		c++;
	}
	getch();
}