#include<stdio.h>

int main(){
	int sub1,sub2,sub3,per;
	
	printf("Enter three subjuct mark:");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	per=(sub1+sub2+sub3)/3;	
	
	printf("percentage of three subject is:%d",per);
	
	return 0;
	
}

