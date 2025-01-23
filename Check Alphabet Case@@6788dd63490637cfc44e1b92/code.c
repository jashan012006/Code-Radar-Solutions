#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (65<=num<=90){
        printf("Uppercase");
    }else if(97<=num<=122){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
    }
    
