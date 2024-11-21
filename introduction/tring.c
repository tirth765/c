#include<stdio.h>

int main()
{
	float area,base,hight;
	
	printf("Enter value of base and hight :",base,hight);
	scanf("%f%f",&base,&hight);

	area = 0.5 * base * hight;
	
	printf("area of tringle:%f",area);
	
	return 0;
}


