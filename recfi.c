#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numTerms;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);
    
    if (numTerms < 0) {
        printf("Please enter a number.\n");
        return 1;
    }
    
    printf("Fibonacci Series:\n");
    for (int i = 0; i < numTerms; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    
    return 0;
}
