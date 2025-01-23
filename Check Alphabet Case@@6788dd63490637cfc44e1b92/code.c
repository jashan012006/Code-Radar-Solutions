#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if ('A'<=ch&&ch<='Z'){
        printf("Uppercase");
    }else if('a'<=ch&&ch<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
    }
    
