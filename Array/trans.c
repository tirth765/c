#include<stdio.h>

int main() {
	int arr[3][3] = {
		{10,20,30},
		{40,50,60},
		{70,80,90}	
	
	};
	

	int i,j;
	
	int trans[3][3] = {0};
	
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			trans[j][i] = arr[i][j] ;
		}
 	}
 	
 	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("%d ",trans[i][j]);		
		}
		printf("\n");                        
 	}
	return 0;
}
