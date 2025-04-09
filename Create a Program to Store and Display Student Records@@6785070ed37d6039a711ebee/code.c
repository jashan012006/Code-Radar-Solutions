#include <stdio.h>

struct student {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    int n;
    float total_marks = 0, average;
    scanf("%d", &n);

    struct student students[n]; // Array of structures

    for (int i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        getchar(); // Consume newline left by scanf

        printf("%d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("%d: ", i + 1);
        scanf("%f", &students[i].marks);

        total_marks += students[i].marks;
    }

    average = total_marks / n;

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_no, students[i].name, average);
    }

    return 0;
}