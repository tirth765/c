#include<stdio.h>

int main() {
	char Day;
	
	printf("Enter Day:");
	scanf("%c",&Day);
	
	switch(Day){
		
	case 'M':
	printf("Monday");
	break;
		
	case 'T':
	printf("Thursday");
	break;
	
	case 'W':
	printf("Wednesday");
	break;
	
	case 't':
	printf("thuday");
	break;
	
	case 'F':
	printf("Friday");
	break;
	
	case 's':
	printf("Saturday");
	break;
		
	case 'S':
	printf("Sunday");
	break;
	
	default:
	printf("Invalid");
		

	}
	
	return 0;
}
