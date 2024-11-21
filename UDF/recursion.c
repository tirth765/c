#include<stdio.h>

int fact(int n) {
	if(n>1) {
		return n * fact(n-1);
	} else {
		return 1;
	}
}
int main() {
	int n , ans;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	ans = fact(n);
	
	printf("Fact is:%d",ans);
}
