#include<stdio.h>
int main()
{
              int i,j,a[5][5],b[5][5],c[5][5];
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                {    
                printf("enter a[%d][%d][%d]:",i,j,c);
                scanf("%d",&a[i][j][c]);
                }
                       //this program has so much improvement
}           
                   for(i=0;i<3;i++)
                   {
                    for(j=0;j<3;j++)
                      {
                        printf("enter b[%d][%d][%d]:",i,j,c);
                        scanf("%d",&b[i][j][c]);
                      }
                   }
                    for(i=0;i<3;i++)
                {

}           
                          printf("\n");
                          for(i=0;i<3;i++)
                          {
                              for(j=0;j<3;j++)
                                {
                                    printf("\t%d",a[i][j]);
                                }
                                    printf("\t");
                                       for(j=0;j<3;j++)
                                       {
                                         printf("\t%d",b[i][j]);
                                       }    
                                               
                                       printf("\n");     
                          }
                          return 0;
}

