#include<stdio.h>

void odd_even() {
	
	int n;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	if(n%2==0) {
		printf("even\n");
	} else {
		printf("odd\n");
	}
}

int main() {
	
	odd_even();
	
}
