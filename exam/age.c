#include<stdio.h>

int main(){
	
	int age,Weight ;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your Weight:");
	scanf("%d",&Weight);
	
	if(age>18 && Weight >= 50){
		printf("you are eligibility");
	} else{
		printf("you are noteligibility");
	}
	
	return 0;
}
