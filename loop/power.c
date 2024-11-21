#include<stdio.h>

int main() {
	int x,y,i,ans;
	
	printf("Enter value x and y:");
	scanf("%d %d",&x,&y);
	
	for(i=1;i<=y;i++) {
		ans = ans*x;
	}   
	
		printf("Your Ans is:%d",ans);

	      
	return 0;
}        
