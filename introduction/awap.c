#include <stdio.h>

int main() {
    
    int X,Y,temp;
    
    printf("Enter value of x :");
    scanf ("%d",&X);
    
    printf("Enter value of y :");
    scanf ("%d",&Y);
    
    temp = X;
    X = Y;
    Y = temp;
    
    printf("after swapping your X is :%d\n",X);
    
    printf("after swapping your Y is :%d",Y);

    return 0;
    
}
