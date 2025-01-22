#include <stdio.h>
int main() {
    char str[100];
    char str2[100];
    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);
    
    printf("You entered: %s and %s",str, str2);

    return 0;
}