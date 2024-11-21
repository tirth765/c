#include<stdio.h>

int main(){
	int RS,HRA=10,DA=5,TA=8,ANS;
	
	printf("enter your Salary :");
	scanf("%d",&RS);
	
	printf("your HRA:%d\n",HRA);
	printf("your DA:%d\n",DA);
	printf("your TA:%d\n",TA);
	
	ANS = RS+HRA+DA+TA;
	
	printf("your ans is:%d",ANS);
	
	
	
	
	return 0;
}
