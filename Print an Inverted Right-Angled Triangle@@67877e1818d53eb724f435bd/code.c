#include <stdio.h>
int main() {
    int n;
    char c;
    scanf("%d",&n);
    scanf("%c",&c);
    for(int i=1,i<=n,i++){
        printf("%c",c);
    }
    return 0;
}