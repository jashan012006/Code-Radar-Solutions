#include <stdio.h>
struct class{
    int roll_no;
    char name[100];
    int marks;
    
};
int main(){
    int n;
    float total_marks = 0, average;
    scanf("%d",&n);
    scanf("%d",&roll_no);
    fgets(name,sizeof(name),stdin);
    for(int i=0;i<marks;i++){
        scanf("%f",&marks);
        marks+=average;
    }
    average=average/n;
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f");
    }
    return 0;
}