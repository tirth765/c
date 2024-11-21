// 3. with return valu , no parameter.

#include<stdio.h>

int areaRect() {			//2
	int l,w,area;
	
	printf("Enter the length and whith:");
	scanf("%d %d",&l,&w);
	
	area = l * w;
	
	return area;			//3
}

int main() {
	int ans;
	
	ans = areaRect();		//1		//4
	
	printf("area of rectangle is:%d",ans);
	
	return 0;
}
