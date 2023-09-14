#include<stdio.h>
#define n 8
int dis(int a[])
{

 for (int i=0; i<n; i++)
  {

    printf("%d",a[i]);
  }
}
  
   int main()
   {

     int a[n],i;
     for(i=0; i<n; i++)
     {
        printf("enter value :");
        scanf("%d",&a[i]);

     }
       
     dis (a);
      
   }