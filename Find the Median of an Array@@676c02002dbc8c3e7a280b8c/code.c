#include<stdio.h>
int main(){
    int n,median;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    if(n%2==0){
        printf("%.0ld",(arr[(n/2)-1]+arr[((n)/2)])/2);
    }else{
        median=(arr[n])/2;
        printf("%d",median);
    }
}