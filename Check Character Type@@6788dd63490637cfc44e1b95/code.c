#include <stdio.h>
int main(){
    int a;
    char c;
    scanf("%c",&c);
    if(isalpha(c)){
        c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'{
        printf("Vowel");
    }else{
        printf("Consonant");
    }else if(isdigit(a)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    }
    return 0;
}