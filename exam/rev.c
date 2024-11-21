#include<stdio.h>

int main() {
	int i,num,rev;
	
	printf("Enter your number :");
	scanf("%d",&num);
	
	num=num/10;


	if(rev = num%10) {
		printf("number is reverse ");
	} else {
		printf("number is not reverse ");
	}
	
	
	return 0;	
}
