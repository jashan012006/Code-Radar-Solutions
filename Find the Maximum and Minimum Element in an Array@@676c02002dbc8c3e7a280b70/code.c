#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<min){
            min=arr[i];
        }else if(arr[i]>max){
            max=arr[i];
        }
        }printf("%d",min);
        printf("%d",max);
        }

          
