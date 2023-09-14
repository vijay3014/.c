#include <stdio.h>

// Function to calculate the total marks
int calculateTotal(int marks1, int marks2, int marks3) 
{
    return marks1 + marks2 + marks3;
}

// Function to calculate the percentage
float calculatePercentage(int total)
{
    return (float)total / 3;
}

// Function to calculate the grade based on percentage
char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else 
    {
        return 'F';
    }
}

int main() {
    int marks1, marks2, marks3;
    
    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);
    
    int total = calculateTotal(marks1, marks2, marks3);
    float percentage = calculatePercentage(total);
    char grade = calculateGrade(percentage);
    
    printf("\nTotal marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    
    return 0;
}
