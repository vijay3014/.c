#include<stdio.h>
    int m,s,e,t;
    float per;
    void display()
    {
        printf("maths\tscience\tenglish\ttotal\tper :");
        printf ("\n%d\t%d\t%d\t%d\t%.2f",m,s,e,t,per);
    }
       
        void calc()
        {
          t=m+s+e;
         per=(float)t/3;
         display();
        } 

     void setdata()
     {
        printf("enetr maths marks :");
        scanf("%d",&m);
        printf("enter science marks :");
        scanf("%d",&s);
        printf("enter engalish marks :");
        scanf("%d",&e);
        calc(); 
    }

   int main()
   {
     setdata();
   }
     
