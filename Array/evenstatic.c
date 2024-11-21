#include<stdio.h>

int main() {
	
	int i,arr[5]= {2,3,4,7,6};
	
	for(i=0;i<5;i++) {
		if(arr[i] % 2==0) {
			printf("%d ",arr[i]);
		}
	
	}
	
	return 0;
}
