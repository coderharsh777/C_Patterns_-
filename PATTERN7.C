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
		for(k=i-1;k>=1;k--)
			printf("%d ",k);

		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(b=n-i;b>0;b--)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%d ",j);
		for(k=i-1;k>=1;k--)
			printf("%d ",k);
		printf("\n");
	}
	/*
	for(i=2;i<=n-(n/2);i++)
	{
		for(b=n-i;b>0;b--)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%d ",j);
		for(k=i-1;k>=1;k--)
			printf("%d ",k);

		printf("\n");
	} */
	getch();
}