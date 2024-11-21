#include<stdio.h>

int main() {
	
	int n,m,sum=0,roll_number,marks,grade,j,i;
	
	float per;
	
	printf("Enter number of student:");
	scanf("%d",&n);
	
	printf("Enter number of subject:");
	scanf("%d",&m);
	
	for(i=1;i<=n;i++) {
		sum=0;
		
		printf("Enter student roll_number:");
		scanf("%d",&roll_number);
		
		for(j=1;j<=m;j++){
			
			printf("Enter your marks:");
			scanf("%d",&marks);
			
			sum = sum + marks;
			
		}
		
		per = (float) sum / m ;
		
		printf("Your per is:%f\n",per);
			
		if(per >= 85 && per <= 100) {
			printf("Your grade is A\n");
		} else if(per>=75 && per <= 84) {
			printf("Your grade is B\n");
		} else if(per<=75 && per >= 0) {
			printf("Your grade is C\n");
		} else {
			printf("Invalid\n");
		}
	}
	

	printf("Your grade is:%d\n",grade);
		
	
	
	return 0;
}
