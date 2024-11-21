#include<stdio.h>

int main() {
	int n,ele,total_exp,month,month_number,i,mar,sel;
	
	printf("Enter month number :");
	scanf("%d",&n);
	
	
		
	for(i=1;i<=n;i++) {
		total_exp=0;
		
		printf("Enter the month_number:");
		scanf("%d",&month_number);
	
		printf("Enter the marketing,electricity,salary:");
		scanf("%d %d %d",&mar,&ele,&sel);
		
		total_exp = mar + ele + sel;
		
		printf("Month %d expense --> :%d\n",month_number,total_exp);
			
	}
	
	return 0;
}
