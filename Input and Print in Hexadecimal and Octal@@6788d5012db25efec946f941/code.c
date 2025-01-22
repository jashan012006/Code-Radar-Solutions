#include <stdio.h>
#include <ctype.h>
int main() {
    int integer;
    scanf("%d",&integer);
    printf("Hexadecimal: %x\n",integer);
    printf("Octal: %o\n",integer);

    return 0;
}