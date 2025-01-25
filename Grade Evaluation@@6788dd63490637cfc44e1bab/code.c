#include <stdio.h>
int main() {
    char grade1;
    scanf("%c",&grade1);
    if (grade1='A'){
        printf("Excellent");
    }else if(grade1='B'){
        printf("Good");
    }else if(grade1='C'){
        printf("Average");
    }else if(grade1='D'){
        printf("Below Average");
    }else{
        printf("Fail");
    }


    return 0;
}