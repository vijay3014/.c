#include <stdio.h>

void calculateTotalMarks(int guj1, int math2, int sci3, int *total) {
    *total = guj1 + math2 + sci3;
}

           float calculatePercentage(int total) {
               return (total / 300.0) * 100;
        }

           void Result(int total, float percentage) {
               printf("Total Marks: %d\n", total);
                  printf("Percentage: %f\n", percentage);
          }

int main() {
               int mark1, mark2, mark3;
               int totalMarks;
               float percentage;
       
                    printf("Enter guj 1:");
                    scanf("%d", &mark1);
                    printf("Enter math 2:");
                    scanf("%d", &mark2);
                    printf("Enter sci 3:");
                    scanf("%d", &mark3);

       calculateTotalMarks(mark1, mark2, mark3, &totalMarks);
       percentage = calculatePercentage(totalMarks);
       Result(totalMarks, percentage);

    return 0;
}
                    