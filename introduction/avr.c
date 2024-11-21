#include<stdio.h>

int main(){
	int n1,n2,n3;
	float avr;
	printf("enter number");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	avr=(float)(n1+n2+n3)/3;
	
	printf("average is:%f",avr);
	
	return 0;
}

