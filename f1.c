#include <stdio.h>

int small(int a, int b) 
{
    if (a < b) 
     {
        return a;

        }
        else 
        {
        return b;
    }
}

int main() 
{
    int a, b;
    printf("Enter the small value: ");
    scanf("%d", &a);
    printf("Enter the big value: ");
    scanf("%d", &b);

    int smallest = small(a,b);

    printf("The smallest value is: %d\n", smallest);

    return 0;
}
