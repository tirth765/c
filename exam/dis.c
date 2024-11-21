#include<stdio.h>

int main() {
	int amo;	
	float dis;
	char type;
	
	printf("Enter amount and type:");
	scanf("%d %c",&amo,&type);
	
	switch (type) {
		case'm':
		case'M':
			if(amo>=0 && amo<=100) {
				dis=0;
			} else if(amo>=101 && amo<=200) {
				dis=amo*0.05;
			} else if(amo>=201 && amo<=300) {
				dis=amo*0.075;
			} else if(amo>=301) {
				dis=amo*0.10;
			}	
			
			printf("Your dis is:%f",dis);	
			
			break;
		
		case'h':
		case'H':
			if(amo>=0 && amo<=100) {
				dis=amo*0.05;
			} else if(amo>=101 && amo<=200) {
				dis=amo*0.075;
			} else if(amo>=201 && amo<=300) {
				dis=amo*0.10;
			} else if(amo>=301) {
				dis=amo*0.15;
			}	
		
			printf("Your dis is:%f",dis);	
			
			break;
			
			default:
		printf("NOOOOOOOOOOOOOO");
		break;
	}	


	
	
	return 0;
}	
