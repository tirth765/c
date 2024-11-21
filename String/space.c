#include<stdio.h>

int main() {
	int i,n,k;
	char str[50];
	
	printf("Enter the string:");
	gets(str);
	
	i = 0;
	
	while(str[i] != '\0') {
		if (str[i] == ' ') {
		 for(k=i;str[k]!='\0';k++) {
			str[k]= str[k+1];
		 }
		}
		i++;
	}
	puts(str);
	return 0;
}
