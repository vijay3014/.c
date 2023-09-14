#include<stdio.h>
int main()
{
          int i,a,v=30;
            for(i=1;i<=5;a++)
               {
 		for(a=1;a<=v;a++)
                  printf("      ");
                     for(a=1;a<=i;a++)
                          {
                   printf("*   ");
                          }
                   v--;
                  printf("\n");
          for(i=4;i>=1;i--)
            {
              for(a=-1;a<=v;a++)
                printf("   ");
                      
                     for(a=1;a<=i;a++)
                       {
                          printf("    *");
                       }
                      v++;
                       printf("\n");
                       }
                       return 0;
}
}