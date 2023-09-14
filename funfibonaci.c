#include<stdio.h> 
              
               int fibonacciseries(int x)
               {
                    if (x==0)
                       return 0;
                    else if (x==1)
                       return 1;
                    else 
                       return (fibonacciseries(x-1)+fibonacciseries(x-2));        
                }

                int main()

                {
                    int a,i;

                    printf("enter value:\n");
                    
                }