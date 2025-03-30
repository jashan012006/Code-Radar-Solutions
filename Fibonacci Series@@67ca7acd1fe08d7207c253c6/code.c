#include<stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
void main(){
    int terms;
    scanf("%d",&terms);
    if(terms<0){
        printf("invalid");
    }else{
        printf("the fibonacci sequence is %d: ",terms);
        for (int i = 0;i < terms ; i++){
            printf("%d ", fibonacci(i));
        }printf("\n");
    }
    
}