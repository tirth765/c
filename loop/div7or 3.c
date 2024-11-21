#include<stdio.h>

int main() {
	int i,n,num;
	
	printf("Enter number:");
	scanf("%d",&n);                                                                                                                                                                                                                                                                                                                                      
	
	for(i=1;i<=n;i++) {
		printf("Enter value of num:");
		scanf("%d",&num);
		
		if(num%7==0 || num%3==0) {
			printf("%d is div by 7 or 3:\n");
		} else {
			printf("%d is not div by 7 or 3");
		}
	}
	                                        
	
	
	return 0;
}

