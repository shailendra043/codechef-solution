#include<stdio.h>
#include<math.h>
int main()
{
	float sal,hra,da,gross,net;
	printf("ENTER THE ANNUAL SALARY:  ");
	scanf("%f",&sal);
	printf("THE SALARY IS=  %.2f \n",sal);
	da=sal*0.25;
	printf("THE DA IS=  %.2f \n",da);
	hra=sal*.15;
	printf("THE HRA IS=  %.2f \n",hra);
	gross=sal+hra+da;
	printf("THE GROSS SALARY IS=  %.2f \n",gross);
	net=gross-gross*0.1;
	printf("THE NET ANNUAL SALARY IS=  %.2f \n",net);
	return 0;
}
