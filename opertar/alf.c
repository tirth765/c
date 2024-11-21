#include<stdio.h>

int main() {
	char alf;
	int number;
	
	printf("Enter input:");
	scanf("%c",&alf);
	
	if(alf>='A' && alf<='Z' || alf>='a' && alf<='z') {
		printf("this is alf");
	} else if(alf>='0' && alf<='9') {
		printf("this is number");
	} else {
		printf("this is special symbols");
	}
	
	return 0;
}
