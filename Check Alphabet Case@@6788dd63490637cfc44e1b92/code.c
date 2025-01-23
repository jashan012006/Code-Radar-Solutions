#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if ('A'<=num<='Z'){
        printf("Uppercase");
    }else if('a'<=num<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
    }
    
