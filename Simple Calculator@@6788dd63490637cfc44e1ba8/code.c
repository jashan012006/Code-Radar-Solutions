#include <stdio.h>
int main() {
    double a,b;
    char o;
    scanf("%ld %ld %c",&a,&b,&o);
        if(o=='+'){
            printf("%ld",a+b);
        }else if(o=='-'){
            printf("%ld",a-b);
        }else if(o=='*'){
            printf("%ld",a*b);
        }else if(o=='/'){
            printf("%ld",a/b);
        }else{
            printf("error");
        }
        return 0;
    }
    
