#include<stdio.h>
int main(){
    int n,modulus=0,remainder;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        remainder=arr[i]%10;
        remainder+=modulus;
        printf("%d ",modulus);
    }
}