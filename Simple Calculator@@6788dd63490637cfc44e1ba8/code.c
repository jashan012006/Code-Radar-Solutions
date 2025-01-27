#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int b;
    char character;
    scanf("%d %d %c",&a,&b,&character);
    switch(character){
    case 1:
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a-b);
        break;
    case 3:
        printf("%d",a*b);
        break;
    case 4:
        printf("%d",a/b);
        break;
    default:
        printf("Error");
    }
    return 0;
}