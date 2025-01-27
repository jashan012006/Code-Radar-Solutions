#include <stdio.h>
#include <math.h>
int main() {
    double a;
    double b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    switch(character){
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%ld",a/b);
        break;
    default:
        printf("Error");
    }
    return 0;
}