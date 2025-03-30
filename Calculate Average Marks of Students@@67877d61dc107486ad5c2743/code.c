#include<stdio.h>

int main() {
    int n; 
    int roll_no; 
    char name[100]; 
    float marks, average, total_marks = 0;

    // Input the number of students
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Input roll number
        scanf("%d", &roll_no);
        
        // Clear the input buffer and input name
        getchar(); // Consume newline left by scanf
        fgets(name, sizeof(name), stdin);
        
        // Input marks
        scanf("%f", &marks);

        // Add marks to total
        total_marks += marks;
    }

    // Calculate the average
    average = total_marks / n;

    // Print the average marks
    printf("%.2f\n", average);

    return 0;
}