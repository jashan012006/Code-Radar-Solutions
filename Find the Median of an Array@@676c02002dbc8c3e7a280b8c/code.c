#include<stdio.h>
int main(){
    int n,median;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    if(n%2==0){
        printf("%d",((n/2)+((n)/2)+1)/2);
    }else{
        median=(n+1)/2;
        printf("%d",median);
    }
}