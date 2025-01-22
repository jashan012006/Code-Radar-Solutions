#include <stdio.h>
int main() {
    char str[10];
    fgets(str, sizeof(str), stdin);
    scanf("%s",&str);
    printf("You entered: %s\n",str);

    return 0;
}