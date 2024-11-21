#include<stdio.h>

int main(){
	int meter,centimeter,calculate;
	
	printf("Enter value of meter:");
	scanf("%d",&meter);
	
	centimeter = meter * 100;
	
	printf("calculate is:%d",centimeter);
	
	return 0;
}

