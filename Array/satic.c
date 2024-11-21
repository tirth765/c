#include<stdio.h>

int main() {
	
	int i,arr[5]= {-10,20,30,-40,-50};
	
	for(i=0;i<5;i++) {
		if(arr[i] < 0) {
			printf("%d ",arr[i]);
		}
	
	}
	
	return 0;
}
