#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("");
        for(int j=1;j<=i;j++){
            printf("*");
        }
        
    }
    return 0;
}