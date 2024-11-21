#include<stdio.h>

int main() {
	int i,temp,sum=0,rem=0,num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	temp=sum;
	
	while(num!=0) {
		rem = sum % 10;
		sum = sum + (rem*rem*rem);
		num = num/10;
	}
	if(sum==0) {
		printf("Armstrong number");
	} else {
		printf("Not Armstrong number");
	}
	
	return 0;
}
