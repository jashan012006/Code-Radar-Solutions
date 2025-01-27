#include <stdio.h>
int main(){
    int a;
    char character;
    scanf("%c",&character);
    if(character=='a'){
        printf("Vowel");
    }else if(a<=character<=z){
        printf("Consonant");
    }else if(0<a<10){
        printf("Digit");
    }
    return 0;
}