#include<stdio.h>

int main() {

	char str1[50],str2[50];
		
	printf("Enter the string:");
	gets(str1);
	
	strcpy(str2,str1);
	
	puts(str2);
	

	return 0;
}
