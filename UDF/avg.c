#include<stdio.h>

void avg(float a,float b,float c,float d) {
	float avg;
	
	avg = (a+b+c+d)/4;
	
	printf("your avg is:%f\n",avg);
}

int main() {
	
	avg(10,45,43,67);
	
	avg(11,65,43,67);
	
	avg(10,45,73,27);
	
	return 0;
}
