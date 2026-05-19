#include <stdio.h>

int main()
{
	float angle1,angle2,angle3;
	printf("Enter First angle :");
	scanf("%f",&angle1);
	printf("Enter second angle :");
	scanf("%f",&angle2);
	angle3=180.0-(angle1+angle2);
	printf("Third angle: %.2f\n",angle3);
	
}
