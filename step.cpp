#include<stdio.h>
int main()
{
	int n,y,a,b,x;
	scanf("%d",&n);
	printf("Enter the value of a,b,x:");
	scanf("%d%d%d",&a,&b,&x);
	switch(n)
	{
	case 1:
		y=(a*x)*b/100;
		printf("THE RESULT IS: %d",y);
		break;
		case 2:
			y=(a*x*x)+b*b;
			printf("THE RESULT IS: %d",y);
		break;
		case 3:
			y=a-(b*x);
			printf("THE RESULT IS: %d",y);
		break;
		case 4: 
		y=a+(x/b);
		printf("THE RESLULT IS : %d",y);
		break;
		default:
			printf("NO OPERATION FOUND::");
	}
		
}
