#include <stdio.h>
int main() {
    char str[100];
    char str2[100];
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s and ");
    fgets(str2, sizeof(str2), stdin);
    
    printf("%s",str2);

    return 0;
}