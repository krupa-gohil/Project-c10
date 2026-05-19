#include <stdio.h>

int main()
{
	float basic_salary, gross_salary;
	printf("Enter Basic Salary:");
	scanf("%f",&basic_salary);
	
	float HRA;
	printf("\nEnter HRA percentage :  ");
	scanf("%f",&HRA);
	
	float DA;
	printf("\nEnter DA percentage :  ");
	scanf("%f",&DA);
	
	float TA;
	printf("Enter TA percentage :  ");
	scanf("%f",&TA);
	
	
	
	gross_salary =  basic_salary + (basic_salary *HRA)/100 + (basic_salary *DA)/100 +(basic_salary *TA)/100;
	printf("Gross salary: %f\n",gross_salary);
	
}
