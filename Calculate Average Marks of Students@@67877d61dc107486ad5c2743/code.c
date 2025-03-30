#include<stdio.h>
int main(){
    int n;
    int roll_no;
    char name[100];
    float marks,average,marks2=0;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&roll_no);
        fgets(name,sizeof(name),stdin);
        scanf("%f",&marks);
        marks2+=marks;
        average=marks2/n;
    }printf("%.2f",average);

}