#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }for(int i=n-1;i>=0;i--){
        scanf("%d",&arr[i]);
        if(arr[i]==arr[i]){
            printf("YES");
        }else{
            printf("NO");
        }
    }
}