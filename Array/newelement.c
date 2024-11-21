#include <stdio.h>

int main()
{
    int arr[50],updateInx,newElem; 
    int i, N;

    printf("Enter size of the array : ");
    scanf("%d", &N);

    for(i=0; i<N; i++) {
    	printf("Enter elements in array : ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the updateInx , newElem:");
    scanf("%d %d",&updateInx,&newElem);
    
    for(i=0;i<N;i++) {
    	arr[updateInx] = newElem;
	} 
	for(i=0;i<N;i++) {
		printf("%d ",arr[i]);
	}
		
	
	
    return 0;
}
