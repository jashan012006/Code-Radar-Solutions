#include <stdio.h>
#include <math.h>
int main() {
    double a;
    double b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    if(character=='+'){
        printf("%ld",a+b);
    }else if(character=='-'){
        printf("%ld",a-b);
    }else if(character=='*'){
        printf("%ld",a*b);
    }else if(character=='/'){
        printf("%ld",a/b);
    }else{
        printf("nothing");
    }
    return 0;
}