#include<stdio.h>

int main() {
	int n ,i, arr[50],sum=0,total;
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++) {
			sum=sum+arr[i];
	}
		total=sum/n;
		
		printf("sum of even number is :%d ",total);
	
	
	
	
	
}
