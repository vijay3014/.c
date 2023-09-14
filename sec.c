#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 3

typedef struct {
    int marks[NUM_SUBJECTS];
    int totalMarks;
    float percentage;
    char grade;
} Student;

void calculateResult(Student *student) {
    int i;
    student->totalMarks = 0;

    for (i = 0; i < NUM_SUBJECTS; i++) {
        student->totalMarks += student->marks[i];
    }

    student->percentage = (float)(student->totalMarks) / (NUM_SUBJECTS * 100) * 100;

    if (student->percentage >= 90) {
        student->grade = 'A';
    } else if (student->percentage >= 80) {
        student->grade = 'B';
    } else if (student->percentage >= 70) {
        student->grade = 'C';
    } else if (student->percentage >= 60) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}

int main() {
    Student students[NUM_STUDENTS];
    int i, j;

    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (j = 0; j < NUM_SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
    for (i = 0; i < NUM_STUDENTS; i++) {
        calculateResult(&students[i]);
    }

    printf("\n\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Total Marks: %d\n", students[i].totalMarks);
        printf("Percentage: %.2f%%\n", students[i].percentage);
        printf("Grade: %c\n", students[i].grade);
        printf("\n");
    }

    return 0;
}
