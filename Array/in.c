#include<stdio.h>

int main () {
	int inpIndex,i,n,arr[50],NewElem;
	
	printf("Ennter the size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) {
		printf("Enter the Element:");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the inputIndex and NewElem:");
	scanf("%d %d",&inpIndex,&NewElem);
	
	n++;
	
	for(i=n-1;i>inpIndex;i--) {
		arr[i] = arr[i-1];
	}
	
	arr[inpIndex] = NewElem;
	
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]);		
	}

	return 0;
}
