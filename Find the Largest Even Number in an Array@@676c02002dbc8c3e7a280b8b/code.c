#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]=1){
            printf("-1");
        }
        
        if (arr[i]%2==0 && arr[i]>max){
            max=arr[i];
        }
        }
        
    
    printf("%d",max);
    return 0;
}