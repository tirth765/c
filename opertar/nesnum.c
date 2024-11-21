#include<stdio.h>

int main() {
	
	int amo;
	char type;
	float dis;
	
	printf("Enter amo and type:");
	scanf("%d %c",&amo,&type);
	

		
	
	if(type='m') {
		
			if(amo>0 && amo<=100) {
				dis = 0;
			} else if(amo>101 && amo<=200) {
				dis = amo* 0.05;
			} else if (amo>201 && amo<=300) {
				dis = amo * 0.075;
			} else if(amo>300) {
				dis = amo * 0.10;
			} 		
				printf("your dis is:%f",dis);
			} else{
		printf("404 NOT FOUND");
	}
		
	if(type='h') {
		
	
			if(amo>0 && amo<=100) {
				dis = amo * 0.05;
			} else if(amo>101 && amo<=200) {
				dis = amo*0.075;
			} else if (amo>201 && amo<=300) {
				dis = amo*0.10;
			} else if(amo>300) {
				dis = amo*0.15;
			} printf("your dis is:%f",dis);
		
			
			
	 } else {
		printf("404 NOT FOUND");
	}
	
	return 0;
}
