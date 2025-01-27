#include <stdio.h>
#include <math.h>
int main() {
    float a;
    float b;
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
        printf("%d",a/b);
        break;
    default:
        printf("Error");
    }
    return 0;
}