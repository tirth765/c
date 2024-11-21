#include<stdio.h>

int main() {
	
	int fees;
	float cgpa,sch;
	char cast,grade;
	
	printf("Enter your fees:");
	scanf("%d",&fees);
	
	printf("Enter your cgpa:");
	scanf(" %f",&cgpa);
	
	printf("Enter your cast:");
	scanf(" %c",&cast);

	
	if(cgpa>=9 && cgpa<=10) {
		grade = 'A';
	} else if(cgpa>=8.5) {
		grade = 'B';
	} else if(cgpa>=8) {
		grade = 'C';
	}else if(cgpa>=7.5) {
		grade = 'D';
	}else if(cgpa>=0 && cgpa<7.5) {
		grade = 'E';
	} else {
		printf("Invalid\n");
	}
	
	if(grade=='A' || grade=='B') {
		if(cast=='o') {
			sch=fees*0;
		} else if(cast=='b') {
			sch=fees*0.25;
		} else if(cast=='s') {
			sch=fees*0.50;
		} else if(cast=='t') {
			sch=fees*1;
		}
		
	} else {
		printf("Your grade is not eligible for scholarship\n");
	}
	
	printf("Your scholarship is:%f",sch);
	return 0;
}
