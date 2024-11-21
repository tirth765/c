#include<stdio.h>

int main(){
	int number;
	
	printf("enter your number:");
	scanf("%d",&number);
	  
	(number%2)==0  ? printf("odd") : printf("even");
	
	return 0;
}

