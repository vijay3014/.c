#include<stdio.h>
int arrayview(int a[5])
    {
        for(int i=0;i<5;i++)
        {
            printf("%d",a[i]);
        }
        return 0;
    }
    
int main()
    {
        int arr[5];
          for(int i=0;i<5;i++)
             {
                printf("enter array value:");
              1  scanf("%d\n",&arr[i]);
             }
        arrayview(arr);
    }    
