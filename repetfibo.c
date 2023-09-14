#include<stdio.h>
int fibonacci(int n)
{
   if(n<=0)
   return n;
   return fibonacci(n-1) + fibonacci(n-2);
}
int main() 
{
      int n;
      printf("Enter the number of terms:");
      {
      for(int i=0;i<10;i++)
      printf("%d ",fibonacci(i));
}
   printf("\n");
   return 0;
}   