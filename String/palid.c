#include<stdio.h>

int main() {
	char str1[50],str2[50];
	
	printf("Enter the staring:");
	gets(str1);
	
	strcpy(str2,str1);
	puts(str2);
	
	strrev(str2);
	
	if(strcmp(str1,str2) == 0) {
		printf("palindrome");
	} else {
		printf("Not palindrome");
	}
	
	return 0;
}
