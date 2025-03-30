#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    int max=arr[0];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            return 0;
            }else if(i==n-1 && arr[i]>arr[i-1]){
                printf("%d",arr[i]);
                return 0;
            }
            
    
    printf("-1");
    }

}