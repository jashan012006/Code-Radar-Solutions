#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(char i='A'i<=n,i++){
        for(char j='A'j<=i+'A',j++){
            printf("%c",j);
        }
    }
    return 0;
}