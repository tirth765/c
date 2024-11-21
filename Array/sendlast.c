#include <stdio.h>

int main()
{
    int arr[50],m1,m2; 
    int i, N;

    printf("Enter size of the array : ");
    scanf("%d", &N);

    for(i=0; i<N; i++) {
    	printf("Enter elements in array : ");
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<N;i++) {
    	if (arr[i]>m1) {	
    	m2=m1;
    	m1=arr[i];
		} else if(arr[i]<m1 && arr[i]>m2) {
    		m2=arr[i];
		}
	} 
	printf("1st largest number is %d\n",m1);
	printf("2nd largest number is %d",m2);
    return 0;
}
