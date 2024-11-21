#include <stdio.h>

int main() {
    
    float RS,HRS,DA,TA,ANS;
    
    printf("Enter your salary:");
    scanf ("%f",&RS);
    
    HRS = 0.10 * RS;
    DA = 0.05 * RS;
    TA = 0.08 * RS;
    
    ANS = RS + HRS + DA + TA;
    
    printf("Your salary is :%f",ANS);

    return 0;
    
}

