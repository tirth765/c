#include<stdio.h>

int main() {
	int n ,i, arr[50],sum=0;
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++) {
	
			sum=sum+arr[i];
		
	}
	
		printf("sum of even number is :%d ",sum);
	
	
	
	
	
}
