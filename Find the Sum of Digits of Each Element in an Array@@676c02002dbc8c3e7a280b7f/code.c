#include<stdio.h>
int main(){
    int n,modulus=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr[i]%10+=modulus;
        modulus+=sum;
        printf("%d",sum);
    }
}