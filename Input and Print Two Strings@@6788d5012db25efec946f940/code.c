#include <stdio.h>
int main() {
    char str[100];
    char str2[100];
    fgets(str, sizeof(str), stdin);
    fgets(str, sizeof(str2), stdin);
    printf("You entered: %s",str);
    printf(" and %s",str2);

    return 0;
}