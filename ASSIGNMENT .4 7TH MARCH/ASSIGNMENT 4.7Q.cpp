#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3;
    float total_marks, avg_marks;
};

void descending_order(struct student s[], int n) {
    struct student temp;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].total_marks < s[j].total_marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Student Name: ");
        scanf("%s", s[i].stud_name);
        printf("Mark 1: ");
        scanf("%f", &s[i].mark1);
        printf("Mark 2: ");
        scanf("%f", &s[i].mark2);
        printf("Mark 3: ");
        scanf("%f", &s[i].mark3);
        
        s[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
        s[i].avg_marks = s[i].total_marks / 3;
    }

    descending_order(s, n);

    printf("\nStudent Records in descending order of marks:\n");
    printf("\nRoll No\tStudent Name\tTotal Marks\tAverage Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t\t%.2f\n", s[i].roll_no, s[i].stud_name, s[i].total_marks, s[i].avg_marks);
    }

    return 0;
}