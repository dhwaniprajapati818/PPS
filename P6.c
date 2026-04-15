#include <stdio.h>
#include <string.h>

// Define structure
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n, i;

    // Ask number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];  // Array of structures

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);  // read full name

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}