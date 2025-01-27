#include <stdio.h>
int main() {
    char character;
    double a,b;
    scanf("%c %d %d",&character,&a,&b);
    int result1=a+b;
    int result2=a-b;
    int result3=a*b;
    int result4=a/b;
        if(character=='+'){
            printf("%d",result1);
        }else if(character=='-'){
            printf("%d",result2);
        }else if(character=='*'){
            printf("%d",result3);
        }else if(character=='/'){
            printf("%d",result4);
        }else{
            printf("error");
        }
        return 0;
    }
    
