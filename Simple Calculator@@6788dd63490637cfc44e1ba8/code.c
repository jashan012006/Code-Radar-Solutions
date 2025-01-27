#include <stdio.h>
int main() {
    double a,b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    int result1=a+b;
    int result2=a-b;
    int result3=a*b;
    int result4=a/b;

    switch(a,b,character){
    
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",result2);
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