#include<stdio.h>

int main() {
	float unit,bill,finle_bill;
	
	printf("Enter your unit:");
	scanf("%f",&unit);
	
	if (unit>0 && unit<=50) {
		bill=(50*0.50) ;
	}
	else if (unit>50 && unit<=100) {
		bill=(50*0.50) + (unit-50)*0.75;
	}
	else if (unit>150 && unit<=250) {
		bill=(50*0.50) + (100*0.75) + (unit-150)*1.20;
	}
	else {
		bill=(50*0.50) + (100*0.75) + (100*1.20) + (unit-250)*1.50;
	}
	
	finle_bill= bill+bill*0.20;
	
	printf("your bill is:%.2f",finle_bill);
	
	return 0;
}

