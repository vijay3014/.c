#include<stdio.h>
int squre(int a)
{
    return a*a;
}
     int main()
     {
        int x;
        printf("enter x:");
        scanf("%d",&x);
        for (int i=1;i<=x;i++)
           {
               printf("%d%d\n",i,squre(i));
           } 
     }

