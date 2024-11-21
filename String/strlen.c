#include<stdio.h>

int main() {
	int n;
	char str[50];
	
	printf("Enter the string :");
	gets(str);
	
	n = strlen(str);
	puts(str);
	
	printf("string length is %d",n);
	
	return 0;	
}
