#include<stdio.h>

int main() {
	int a,b,c,d,i;
	float ratio;
	
	for(i=1;i<=3;i++) {
		printf("Enter value of A,B,C,D:");
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		ratio = (float) (a-b) / (c-d);
		
		if(c!=d) {
			printf("Your ratio is:%f\n",ratio);
		} else {
			printf("!404 NOT FOUND\n");
		}
	}

}
