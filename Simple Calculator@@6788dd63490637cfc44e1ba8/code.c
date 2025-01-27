#include <stdio.h>
int main() {
    double a,b;
    char character;
    scanf("%c %d %d",&a,&b,&character);
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
    
