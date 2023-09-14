#include<stdio.h>
int cl (int n)
{
            int a,k=0;
              for(a=1;a<n;a++)
              {
                if (n%a==0)
                {
                    k=k+a;
                    printf("\n%d",a);
                }
              }
    if (n==k)
    {
        printf("\n number is perfact",k);
    }
        else
        {
            printf("\n number is not perfect",k);
        }
}
       int main()
       {
          printf("\n welcome");
          int n;
          printf("\n enter n:");
          scanf("%d",&n);
          cl(n);
          printf("\n thank you");
       }