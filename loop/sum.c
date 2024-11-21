#include<stdio.h>

int main() {
	int i,n,sum=0;
	
	printf("Enter number:");
	scanf("%d",&n);                                                                                                                                                                                                                                                                                                                                      
	
	for(i=n;i>=1;i--) {
		sum=sum+i;
	}
	                                        
	printf("Your sum is:%d",sum);
	
	return 0;
}

