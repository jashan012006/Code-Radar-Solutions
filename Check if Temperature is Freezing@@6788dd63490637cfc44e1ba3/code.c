#include <stdio.h>
int main() {
    int temprature;
    scanf("%d",&temprature);
    if(temprature<=0){
        printf("Freezing");
    }else{
        printf("Above Freezing");
    }
    return 0;
}