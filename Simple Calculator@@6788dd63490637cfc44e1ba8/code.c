#include <stdio.h>
#include <math.h>
int main() {
    double a,b;
    char character;
    int result=a+b;
    int result1=a-b;
    int result3=a*b;
    int result4=a/b;
    scanf("%d %d %c",&a,&b,&character);
    switch(a,b,character){
    
    case '+':
        printf("%d",result);
        break;
    case '-':
        printf("%d",result1);
        break;
    case '*':
        printf("%d",result3);
        break;
    case '/':
        printf("%d",result4);
        break;
    default:
        printf("Error");
    }
    return 0;
}