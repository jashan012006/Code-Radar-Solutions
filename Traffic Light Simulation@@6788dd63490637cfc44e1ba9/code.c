#include <stdio.h>
int main() {
    char character;
    scanf("%c",&character);
    if(character=='R'){
        printf("Stop");
    }else if(character=='G'){
        printf("Go");
    }else if(character=='Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
    return 0;
}