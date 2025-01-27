#include <stdio.h>
#include <math.h>
int main() {
    double a,b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    switch(a,b,character){
    case '+':
        printf("%d+%d",a+b);
        break;
    case '-':
        printf("%d-%d",a-b);
        break;
    case '*':
        printf("%d*%d",a*b);
        break;
    case '/':
        printf("%d/%d",a/b);
        break;
    default:
        printf("Error");
    }
    return 0;
}