#include<stdio.h>
int main(){
    int n,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==k){
            count++;
        }
        
    }printf("%d",count);

    return 0;
}