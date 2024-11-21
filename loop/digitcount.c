#include<stdio.h>

int main() {
	
	int i,n,count=0;
	
	printf("Enter the number");
	scanf("%d",&n);
	
	for(;n!=0;) {
		n = n / 10;
		count++;
	}
	
	printf("Your digit count is:%d",count);
	
	
	return 0;
}
