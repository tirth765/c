#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter value of a is:");
	scanf("%d",&a);
	
	printf("Enter value of b is:");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("after swapping:%d\n",a);
	printf("after swapping:%d",b);
	
	return 0;
}

