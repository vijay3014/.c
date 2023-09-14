#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n; 

    printf("Fibonacci Series:\n");

    for (int i = 0; i < 50; i++) 
    {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}
