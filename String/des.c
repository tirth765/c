#include<stdio.h>

int main() {
	int i;
	char str[50];
	
	printf("Enter the string :");
	gets(str);
	
	for (i = 0; i < str[i]; i++) { 
        printf("%c", str[i]);
        
        if (str[i+1] != '\0') {
            printf("-");
        }
	}
	 

	
	return 0;	
}
