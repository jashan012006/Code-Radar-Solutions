#include <stdio.h>
int main() {
    char str[100];
    scanf("%s",&str);
    fgets(str, sizeof(str), stdin);
    printf("%s",str);

    return 0;
}