#include<stdio.h>

int main() {
    char Gender;
    float bonus,salary,total_salary;

    printf("Enter your gender (M/F):");
    scanf("%c",&Gender);

    printf("Enter your salary:");
    scanf("%f",&salary);
    
    if(salary>0 && salary <= 10000) {
    	switch (Gender) {
    		case 'M':
		        bonus = salary * 0.02;
		        break;

    		 case 'F':
       			bonus = salary * 0.03;
			    break;
			    
				total_salary = salary + bonus;
	
	    		printf("your final salary is:%f",total_salary);

     		default:
    			bonus = 0;
       			break;
       		
			printf("your bonus is :%f\n",bonus);
    	}
	} else {
		printf("invalid");
	}	

   

    return 0;
}
