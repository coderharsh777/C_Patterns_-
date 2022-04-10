#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,b,k;
	clrscr();
	printf("Enter number of lines\n");
	scanf("%d",&n);
	printf("Pattern ---->\n");
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
	getch();
}