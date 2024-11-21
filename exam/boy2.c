#include<stdio.h>

int main() {
	int i,w,h,num,count=0;
	
	printf("Enter the number of boy:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) {
		printf("Enter your weight and height");
		scanf("%d %d",&w,&h);
		
		if( w<=50 && h>=170) {
			count++;
		} 
	}
	
	printf("There are %d boy",count);
		
	return 0;
}
