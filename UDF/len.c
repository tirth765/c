#include<stdio.h>
int len(char str[]) {
	int count=0,i;
	
	for(i=0;str[i]!='\0';i++) {
		count++;	
	}
	
	return count;
}

int main() {
	int str[50],ans;
	
	printf("Enter the string:");
	gets(str);
	
	ans=len(str);
	
	printf("length is %d",ans); 
	
	return 0;
}

