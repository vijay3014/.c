#include<stdio.h>
int main() {
    int h;
    printf("enter a number:");
    scanf("%d",&h);
    if(h>0)
    {
        printf("%d number is positive",h);
    }
    else
    {
        printf("%d number is negative",h);
    }    
    return 0;
}       