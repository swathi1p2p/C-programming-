#include <stdio.h>
#include <string.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;

    // Prompt the user to enter the student's name and GPA
    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove the newline character
    printf("Enter student's GPA: ");
    scanf("%f", &s.gpa);

    // Print the student's name and GPA
    printf("Student's name: %s\n", s.name);
    printf("Student's GPA: %.2f\n", s.gpa);

    return 0;
}