#include<stdio.h>
int main(){
    int n,count=0;median;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count++;
        median=count/n;
    }printf("%d",median);
}