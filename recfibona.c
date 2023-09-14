#include<stdio.h>
int fibonacci(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
            
}
    int main()
      {
          int i,n;
          printf("enter a number:");
          scanf("%d",&n);
            for(i=0;i<n;i++)
               {
                 printf("%d",fibonacci(i));
               }  
      }