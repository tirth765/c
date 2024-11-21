#include <stdio.h>

int main()
{
    int arr[50]; 
    int i, N;

    printf("Enter size of the array : ");
    scanf("%d", &N);

    for(i=0; i<N; i++) {
    	printf("Enter elements in array : ");
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++) {
        if(arr[i] % 3 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
