#include<stdio.h>

int main() {
	
	char str1[50],str2[50];
	
	printf("Enter the string:");
	gets(str1);
	
	printf("Enter the string:");
	gets(str2);
	
	if(strcmp (str1,str2) == 0) {
		puts("Both are same");
	} else {
		puts("Both are not same");
	}

	
	
	return 0;
}
