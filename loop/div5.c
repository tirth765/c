#include<stdio.h>

int main() {
	int i;
	
	for(i=80;i<=1000000;i++) {
		if(i%2==1) {
			printf("%d\n",i);
		} 
	}
	
	return 0;
}
