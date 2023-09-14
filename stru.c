#include<stdio.h>

int arrayview (int a[10])
{
    for(int i=0;i<10;i++)
    {
        printf("%d",a[1]);
    }
    return 0;
}

int main()
 
{
    int arr [10]; 
      for(int i=0;i<10;i++)
         {
            printf("enter arry value:");
            scanf("%d",&arr[i]);
         }    
              arrayview(arr);
}