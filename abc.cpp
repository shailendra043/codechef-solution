#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,m;
	printf("enter the value of n    ");
	scanf("%d",&n);
	printf("enter the value of m     ");
	scanf("%d",&m);
	for(i=m;i>=n;i--)
	{
		printf("%d\n",i);
	}
	printf("\n");	
}
