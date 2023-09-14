#include <stdio.h>

int check(int marks)
{
    if (marks >= 32) 
   {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (check(marks)) 
    {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }

    return 0;
}
