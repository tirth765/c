#include<stdio.h>

int main (){
	
	int fees;
	char cast,grade;
	float sch,cgpa;
	
	
	printf("please enter your fees :");
	scanf("%d",&fees);
	
	printf("please enter your cast :");
	scanf(" %c",&cast);
	
	printf("please enter your cgpa :");
	scanf("%f",&cgpa);
	
	if(cgpa >= 9 && cgpa<=10){
		grade='A';
	} else if(cgpa>=8.5 && cgpa<9) {
		grade='B';	
	} else if(cgpa>=8.0 && cgpa<8.5) {
		grade='C';
	} else if (cgpa>=7.5 && cgpa<8.0) {
		grade='D';
	} else if (cgpa>=6.0 && cgpa<7.5) {
		grade ='E';
	} else{
		grade ='F';
		printf("invilid\n");
	}
		printf("your grade is:%c\n",grade);



//	if (grade=='A' || grade=='B') {
	switch (grade) {
			case 'A':
			case 'B':
			
		switch (cast){
			case 'O':
			sch = 0;
			break ;
			
			case 'B':
			sch =  fees * 0.25 ;
			break ;
			
			case 'S':
			sch = fees * 0.50 ;
			break ;
			
			case 'T':
			sch = fees * 1 ;
			break ;
			
			default :
				printf("invalid gender\n");
		}
			printf("your scholarship is %f",sch);
		default :
			sch=0;
		}
//			printf("your scholarship is %f",sch);
//		}
		
		
	

	
	return 0;
	
}
