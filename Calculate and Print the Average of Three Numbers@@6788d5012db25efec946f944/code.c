#include <stdio.h>

int main() {
    float a,b,c;
    scanf("%f\t",&a);
    scanf("%f\t",&b);
    scanf("%f\t",&c);
    float average=a+b+c/3;
    printf("%.2f",average);
    
    return 0;
}