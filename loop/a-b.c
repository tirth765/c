#include<stdio.h>

int main() {
	int a , b , c , d , i ;
	float ratio;
	
	for(i=1;i<=3;i++) {
		printf("Enter four number:");
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		if(c!=d) {
			ratio = (float) (a-b) / (c-d);
			printf("Your ratio is:%f\n",ratio);
			
		} else{
			printf("!!404 NOT FOUND\n");
		}
	}
	
	return 0;
}
