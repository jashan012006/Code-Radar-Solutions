#include <stdio.h>
int main() {
    int num;
    char character;
    character=(char)num;
    if (65<=character<=90){
        printf("Uppercase");
    }else if(97<=character<=122){
        printf("Lowercase");
    }else{
        printf("Not an alphabet")
    }
    return 0;
    }
    
