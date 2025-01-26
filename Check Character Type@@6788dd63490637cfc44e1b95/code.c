#include <stdio.h>
int main() {
    int a;
    char character;
    scanf("%c",&character);
    if(character=='a','e','i','o','u'){
        printf("Vowel");
    }else if(a<=character<=z -('a','e','i','o','u')){
        printf("Consonant");
    }else if(0<a<10){
        printf("Digit");
    }
    return 0;
}