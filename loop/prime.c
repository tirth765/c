#include<stdio.h>

int main() {
	int i,n,tirth=0;
	
	printf("Enter number :");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++) {
		if(n%i==0) {
			tirth=1;
			break;
		}
	}
	
	if(tirth==0) {
		printf("Number is prime");
	} else {
		printf("Number is Not prime");	
	}
	return 0;
}
