#include <stdio.h>
#include <math.h>
int main() {
    double a;
    double b;
    char character;
    scanf("%ld %ld %c",&a,&b,&character);
    switch(character){
    case '+':
        printf("%ld",a+b);
        break;
    case '-':
        printf("%ld",a-b);
        break;
    case '*':
        printf("%ld",a*b);
        break;
    case '/':
        printf("%ld",a/b);
        break;
    default:
        printf("Error");
    }
    return 0;
}