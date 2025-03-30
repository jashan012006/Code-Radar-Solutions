#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int min=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
            continue;
            }else if (arr[n-i-1]<min){
                min=arr[n-i-1];
            }

        
    }
    printf("%d",min);
}