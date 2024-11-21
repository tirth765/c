#include<stdio.h>

int main() {
	int i,n,sum=0,avg;
	
	printf("Enter number:");
	scanf("%d",&n);                                                                                                                                                                                                                                                                                                                                      
	
	for(i=n;i>=1;i--) {
		sum=sum+i;
	}
	      avg=sum/n;
		                                    
	printf("Your sum is:%d",avg);
	
	return 0;
}

