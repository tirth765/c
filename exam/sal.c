#include<stdio.h>

int main() {
	
	int salary,HRA,DA,TA,ANS;
	
	printf("Enter your salary");
	scanf("%d",&salary);
	
	HRA=salary*0.10;
	DA=salary*0.05;
	TA=salary*0.08;

	
	ANS = HRA+TA+DA+salary;
	
	printf("Your salary is:%d",ANS);

	return 0;
}

