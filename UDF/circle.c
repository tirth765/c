// 2. no return valu , with parameter.
#include<stdio.h>

void circle(float r) {
	float area;
	
	area = 3.14 * r * r;
	
	printf("Area of circle is:%f\n",area);
	
}
int main() {
	circle(5.4);
	
	circle(10.4);
	
	circle(74.8);
}
