#include<stdio.h>
int main()
{
      int a[3][3],b=1;
          
          for(int i=0; i<3;i++)
             {
     	    for(int j=0;j<3;j++)
	     {
                    a[i][j]=b++;
	
	printf("a[%d][%d]:%d\n",i,j,a[i][j]);
	  
           }

 	 }
                 printf("\n");  
    
            for(int i=0;i<3;i++)

		{

	for(int j=0;j<3;j++)
              
               {

           printf("%d",a[i][j]);

                }

             printf("\n");

         }                   
        return 0;
}