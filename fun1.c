#include <stdio.h>

int isDivisibleByFiveAndThree(int number) {
    if (number % 5 == 0 && number %3==0)
 
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDivisibleByFiveAndThree(num))
        printf("%d is divided by 5:\n",num);

    else
         printf("%d is divided by 3:\n'num);
{
   else if 
        printf("%d is not divisible by both 5 and 3.\n", num);
}
    return 0;
}
