#include<stdio.h>
int main(){
    int n,k,count=0,count2=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count+=arr[i];
        if (count==k){
            count2+=count;
        }
        
    }printf("%d",count2);

    return 0;
}