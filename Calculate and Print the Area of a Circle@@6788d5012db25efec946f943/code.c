#include <stdio.h>
#define pie 3.14
int main() {
    float radius;
    scanf("%f",&radius);
    float area=pie*radius*radius;
    printf("Area: %.2f",area);
    return 0;
}