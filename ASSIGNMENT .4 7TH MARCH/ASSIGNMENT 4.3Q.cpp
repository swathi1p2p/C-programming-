#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    char name[50];
    int roll_no;
    struct tm birthday;
    struct tm admission_date;
};

int calculate_age(struct tm birthday, struct tm admission_date) {
    int age = admission_date.tm_year - birthday.tm_year;
    if (admission_date.tm_mon < birthday.tm_mon ||
        (admission_date.tm_mon == birthday.tm_mon && admission_date.tm_mday < birthday.tm_mday)) {
        age--;
    }
    return age;
}

int main() {
    struct student s;
    printf("Enter student name: ");
    scanf("%[^\n]%*c", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter birthday (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &s.birthday.tm_mday, &s.birthday.tm_mon, &s.birthday.tm_year);
    printf("Enter admission date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &s.admission_date.tm_mday, &s.admission_date.tm_mon, &s.admission_date.tm_year);

    // convert input dates to tm structure
    s.birthday.tm_mon -= 1;
    s.birthday.tm_year -= 1900;
    s.admission_date.tm_mon -= 1;
    s.admission_date.tm_year -= 1900;

    // calculate age at admission
    int age = calculate_age(s.birthday, s.admission_date);

    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll_no);
    printf("Birthday: %d/%d/%d\n", s.birthday.tm_mday, s.birthday.tm_mon + 1, s.birthday.tm_year + 1900);
    printf("Admission date: %d/%d/%d\n", s.admission_date.tm_mday, s.admission_date.tm_mon + 1, s.admission_date.tm_year + 1900);
    printf("Age at admission: %d\n", age);
    
    return 0;
}