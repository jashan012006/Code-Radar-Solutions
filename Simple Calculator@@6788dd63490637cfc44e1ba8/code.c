#include <stdio.h>
#include <math.h>
int main() {
    float a;
    float b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    if(character=='+'){
        printf("%.2f",a+b);
    }else if(character=='-'){
        printf("%.2f",a-b);
    }else if(character=='*'){
        printf("%.2f",a*b);
    }else if(character=='/'){
        printf("%.2f",a/b);
    }else{
        printf("nothing");
    }
    return 0;
}