#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];   // Alphanumeric roll number
    float totalMarks;
};

int main() {
    struct Student s;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.studentName);   // Read full name with spaces

    printf("Enter Roll Number: ");
    scanf("%s", s.rollNo);   // Alphanumeric roll number

    printf("Enter Total Marks: ");
    scanf("%f", &s.totalMarks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.studentName);
    printf("Roll No: %s\n", s.rollNo);
    printf("Total Marks: %.2f\n", s.totalMarks);

    return 0;
}