#include<stdio.h>

void sum(int arr[],int n) {
	int sum=0,i;
	
	for(i=0;i<n;i++) {
			sum=sum+arr[i];
	}
	
	printf("sum of array number is :%d\n",sum);	
	
} 
int main() {
	int n ,i, arr[50];
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	
	sum(arr,n);
	
	return 0;
}
