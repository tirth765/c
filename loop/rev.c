#include<stdio.h>

int main() {
	
	int n,rem,rev,temp;
	
		printf("Enter number ");
		scanf("%d",&n);
	temp=n;
	for(;n!=0;) {
		rem = n % 10;
		rev = rev*10+rem;
		n=n/10;	
	}
		printf("your rev num is:%d\n",rev);

	if(temp==rev) {
			printf("number is palindrome\n");
	} else {
			printf("number is Not palindrome\n");
	}
	
	return 0;
}

