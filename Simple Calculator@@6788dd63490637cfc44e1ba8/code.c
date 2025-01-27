#include <stdio.h>
int main() {
    double a,b;
    char o;
    scanf("%lf %lf %c",&a,&b,&o);
        if(o=='+'){
            printf("%lf",a+b);
        }else if(o=='-'){
            printf("%lf",a-b);
        }else if(o=='*'){
            printf("%lf",a*b);
        }else if(o=='/'){
            printf("%lf",a/b);
        }else{
            printf("error");
        }
        return 0;
    }
    
