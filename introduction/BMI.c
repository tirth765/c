#include<stdio.h>

int main()
{
	float cm , m , bmi , kg;
	
	printf("Enter your hight(cm):");
	scanf("%f",&cm);
	
	printf("Enter your Weight(kg):");
	scanf("%f",&kg);
	
	m = cm / 100;
	
	bmi = kg/(m*m);
	
	printf("your BMI is:%f",bmi);
	
	
	return 0;
}
