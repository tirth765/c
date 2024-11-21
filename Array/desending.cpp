#include<stdio.h>

int main() {
	int n ,i, arr[50],temp,j;
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++) {
		for(j=i-1;j>n;j--) {
			if(arr[i] < arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("ascending order is:");        
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	
	
	
	
}
