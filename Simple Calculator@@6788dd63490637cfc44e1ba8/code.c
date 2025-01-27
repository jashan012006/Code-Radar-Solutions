#include <stdio.h>
int main() {
    double a,b;
    char o;
    scanf("%lf %lf %c",&a,&b,&o);
    switch(a,b,o){
    case '+':
    printf("%.0lf",a+b);
    break;
    case '-':
    printf("%.0lf",a-b);
    break;
    case '*':
    printf("%.0lf",a*b);
    break;
    case '/':
    printf("%.0lf",a/b);
    break;
    default:
    printf("Error");
    }
       
    return 0;
    }
    
