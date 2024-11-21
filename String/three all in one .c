#include<stdio.h>

int main() {
	char str[50];
	printf("Enter the string :");
	gets(str);
	
	strrev(str);
	puts(str);
	
	strrev(str); 
	
	strlwr(str);
	puts(str);

	strupr(str);
	puts(str);
		
	return 0;	
}
