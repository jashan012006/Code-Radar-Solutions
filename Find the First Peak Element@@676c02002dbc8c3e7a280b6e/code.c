#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
    }else{
        printf("-1")
    }
    }
    printf("%d",max);
}