#include<stdio.h>

int main() {
	int month,ele,sal,mark,month_number,total_exp=0,i;
	
	printf("Enter the month number:");
	scanf("%d",&month_number);
	
	for(i=1;i<=month_number;i++) {
		total_exp=0;
		
		printf("Enter month:");
		scanf("%d",&month);
		
		printf("Enter expense of electricity, salary, marketing:");
		scanf("%d %d %d",&ele,&sal,&mark);
		
		total_exp = ele + sal + mark;
		
		printf("month %d --> total_exp is %d:\n",month,total_exp);
		
	}
	
	
	
	
	return 0;
}
