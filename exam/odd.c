#include<stdio.h>

int main() {
	int i,j,n;
	
	for(i=1;i<=5;i++) {
		
		if(i%2==0) {
			printf("1");
		} else {
			printf("2");
		} 
		
		for(j=i;j>=1;j--) {
			printf("%d",j);
		} 
		printf("\n");
	}
	
	return 0;
}
