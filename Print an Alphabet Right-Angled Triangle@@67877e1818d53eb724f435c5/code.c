#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(char i=1;i<=n;i++){
        for (char j=1;j<=i;j++){
            printf("%c",j);
        }
        print("\n");
    }
    return 0;
}