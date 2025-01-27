#include <stdio.h>
int main() {
    double a,b;
    char character;
    scanf("%c %d %d",&character,&a,&b);
    int result1=a+b;
    int result2=a-b;
    int result3=a*b;
    int result4=a/b;
        if(character=='+'){
            printf("%d",a+b);
        }else if(character=='-'){
            printf("%d",a-b);
        }else if(character=='*'){
            printf("%d",a*b);
        }else if(character=='/'){
            printf("%d",a/b);
        }else{
            printf("error");
        }
    }
    return 0;
