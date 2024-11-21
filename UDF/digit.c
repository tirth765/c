#include<stdio.h>

void num(int n) {
	int count=0;
	while(n != 0) {
		n = n/10;
		count++;
	}
	printf("number is:%d\n",count);
}
int main() {
	
	num(2575);
	
	num(123);
	
	num(146867);
	
	return 0;
}
