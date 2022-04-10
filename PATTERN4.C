#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,b,k;
	clrscr();
	printf("Enter number of lines\n");
	scanf("%d",&n);
	printf("Pattern ---->\n");
	for(i=1;i<=n;i++)
	{
		for(b=n-i;b>0;b--)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
	getch();
}