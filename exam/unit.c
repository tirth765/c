#include<stdio.h>

int main() {
	
	int unit,bill,total_bill;
	
	printf("Enter unit:");
	scanf("%d",&unit);
	
	if(unit>=0 && unit<=50) {
		bill=(50*0.50);
	} else if(unit>=50 && unit<=150){
		bill=(50*0.50)+(unit-50)*0.75;
	} else if(unit>150 && unit<=250){
		bill=(50*0.50)+(100*0.75)+(unit-150)*1.20;
	} else if(unit>250){
		bill=(50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50;
	} else {
		printf("!404 NOT FOUND");
	} 
	
	total_bill=bill+bill*0.20;
	
	printf("Your total bill is %d",total_bill);
	
	return 0;
}
