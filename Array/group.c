#include <stdio.h>

int main() {
	
    int arr[16] = {85, 66, 37, 45, 68, 23, 99, 100, 81, 70, 42, 55, 68, 77, 96, 100};
    int count[11] = {0};
    int i, index;

    for (i = 0; i < 16; i++) {
    	index = arr[i] / 10; 
        
        count[index]++;
    }
    
    for (i = 0; i < 10; i++) {
        printf("%d - %d --> %d\n", i * 10, i * 10 + 9, count[i]);
    }

	printf("100 - 100 -->%d",count[i]);
    return 0;
}

