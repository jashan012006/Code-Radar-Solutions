#include <stdio.h>
int main() {
    char str[100];
    char str2[100];
    fgets(str, sizeof(str), stdin);
    printf("and");
    fgets(str2, sizeof(str2), stdin);
    
    printf("You entered: %s",str, str2);

    return 0;
}