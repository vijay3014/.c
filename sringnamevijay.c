#include<stdio.h>
int main() 
{
    char str[] = "vijay";
      for(int i=0;i<=5;i++)
        {
            for(int j=0;j<i;j++)
               {
                 printf("%c",str[j]);
               }
               printf("\n");
        }
        return  0 ;
}