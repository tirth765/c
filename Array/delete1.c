#include<stdio.h>

int main () {
	int delIndex,i,n,arr[50];
	
	printf("Ennter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the Element:");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the delIndex ");
	scanf("%d",&delIndex);
	
	n--;
	
	for(i=delIndex;i<n;i++) {
		arr[i] = arr[i+1];
	}
	
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);		
	}

	return 0;
}
