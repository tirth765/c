#include<stdio.h>

int main(){
	float p,r,n,sim;
	
	printf("Enter value of p,r,n:");
	scanf("%f%f%f",&p,&r,&n);
	
	sim=(p*r*n) / 100;
	
	printf("Total Interest is:%f",sim);
	
	return 0;
}

