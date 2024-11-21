#include<stdio.h>

int main() {
	char Month;
	
	printf("Enter Month:");
	scanf("%c",&Month);
	
	switch(Month){
		
	case '1':
	printf("January");
	break;
		
	case '2':
	printf("February");
	break;
	
	case '3':
	printf("March");
	break;
	
	case '4':
	printf("April");
	break;
	
	case '5':
	printf("May");
	break;
	
	case '6':
	printf("June");
	break;
		
	case '7':
	printf("July");
	break;
	
	default:
	printf("Invalid");
		

	}
	
	return 0;
}
