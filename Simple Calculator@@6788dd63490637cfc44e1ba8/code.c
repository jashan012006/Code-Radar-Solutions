#include <stdio.h>
#include <math.h>
int main() {
    double a,b;
    char character;
    int result=a+b,a-b,a*b,a/b;
    scanf("%d %d %c",&a,&b,&character);
    switch(a,b,character){
    
    case '+':
        printf("%d",result);
        break;
    case '-':
        printf("%d",result);
        break;
    case '*':
        printf("%d",result);
        break;
    case '/':
        printf("%d",result);
        break;
    default:
        printf("Error");
    }
    return 0;
}