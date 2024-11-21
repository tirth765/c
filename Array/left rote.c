#include<stdio.h>

int main() {
	int n ,i, arr[50],temp;
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	
	temp=arr[n-1];
	
	for(i=n-1;i>=0;i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	
	
	
	
}
