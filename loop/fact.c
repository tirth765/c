#include<stdio.h>

int main() {
	int i,fact=1,n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--) {
		fact=fact*i;
	} 
	
	printf("Your factorial is:%d",fact);
	
	return 0;
}

