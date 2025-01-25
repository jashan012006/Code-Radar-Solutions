#include <stdio.h>
int main() {
    int a;
    int b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    if(character='+'){
        printf("%d",a+b);
    }else if(character='-'){
        printf("%d",a-b);
    }else if(character='*'){
        printf("%d",a*b);
    }else if(character='/'){
        printf("%d",a/b);
    }else{
        printf("nothing");
    }
    return 0;
}