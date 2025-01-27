#include <stdio.h>
int main() {
    int a,b;
    char o;
    scanf("%c %d %d",&a,&b,&o);
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
    
