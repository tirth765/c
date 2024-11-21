#include<stdio.h>

int main() {
	int num,i,w,h,count=0;
	
	printf("Enter number of boy:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) {
	printf("Enter weigth and Height");
		scanf("%d %d",&w,&h);
		
		if(w<50 && h>170) {
			count++;
		}
		}
		printf("Your total count is:%d",count);
	 
	return 0;
}
