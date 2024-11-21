#include<stdio.h>

int main() {
	int i,num,rem,sum=0;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) {
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}   
	
	printf("Your ans is:%d",sum);
	      
	return 0;
}        

