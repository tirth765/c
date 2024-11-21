#include <stdio.h>

int main()
{
    int arr[50],max; 
    int i, N;

    printf("Enter size of the array : ");
    scanf("%d", &N);

    for(i=0; i<N; i++) {
    	printf("Enter elements in array : ");
        scanf("%d", &arr[i]);
    }
	 
    printf("\nAll max elements in array are : ");
    for(i=0; i<N; i++) {
        if(arr[i] > max) {
        	max=arr[i];
           
        }
    }
	 printf("%d ",max);
    return 0;
}
