#include <stdio.h>
int main() {
    int num=65;
    char character;
    character=(char)num;
    if (65<=character<=96){
        printf("Uppercase");
    }else if(character>=97){
        printf("Lowercase");
    }
    return 0;
    }
    
