#include <stdio.h>

int main()
{
    int arr[50],inInx,newElem; 
    int i ,n ;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
    	printf("Enter elements in array : ");
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the insetInx , newElem:");
    scanf("%d %d",&inInx,&newElem);
    
	n++;
	
	
    for(i=n-1;i>inInx;i--) {
    	arr[i] = arr[i-1];
	} 
	
	arr[inInx] = newElem;
	
	for(i=0;i<n;i++) {
		printf(" %d ",arr[i]);
	}
    return 0;
}
