#include<stdio.h>

int main() {
	int n,arr[50],i,j,k;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the element:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(arr[i] == arr[j]) {
				for(k=j;k<n;k++) {
					arr[k] = arr[k+1];
				}
				n--;
				j--;
			}
		
		}
	}
	
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
