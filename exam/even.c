#include<stdio.h>

int main() {
	int i,sum=0;

	for(i=1;i<=100;i++) {
		if(i%2==0) {
				sum=sum+i;
		} 
		
	}
		printf("Sum is:%d",sum);
	
	
	return 0;	
}
