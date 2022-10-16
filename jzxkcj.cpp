#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("enter the number where u want to fabinnacci series:");
	scanf("%d",&n);
	printf("\n%d %d",a,b);
	for(i=2;i<n;++i)
	{
	c=a+b;
	printf(" %d",c);
{
		b=a;
	a=c;
}
}

}
