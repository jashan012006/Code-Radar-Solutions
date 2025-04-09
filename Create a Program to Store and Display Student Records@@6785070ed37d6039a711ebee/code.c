#include <stdio.h>

struct student {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    int n;
    float total_marks = 0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n]; // Array of structures

    for (int i = 0; i < n; i++) {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        getchar(); // Consume newline left by scanf

        printf("Enter Name for Student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%f", &students[i].marks);

        total_marks += students[i].marks;
    }

    average = total_marks / n;

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}