#include<stdio.h>
int main(){
    int n,median;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    if(n%2==0){
        printf("%d",(arr[(n/2)-1]+arr[((n)/2)])/2);
    }else if(n==1){
        printf("%d",arr[0]);
    }
    else{
        median=(n+1)/2;
        printf("%d",median);
    }
}