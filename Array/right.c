#include<stdio.h>

int main() {
	int n ,i, arr[50],temp;
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
		temp=arr[0];
	
	for(i=0;i<=n;i++) {
		arr[i] = arr[i+1];
	}
		arr[n-1] = temp;
	
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	
	
	
	
}
