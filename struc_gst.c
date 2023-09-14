#include<stdio.h>
struct bill
{
  char name[50];
  int number,rate,qty;
  float amt,dis,billamt,gst,netbill;
};
  
   int main()
 {
   struct bill k[5];
   int i;
   for(i=0; i<2; i++)
   {
      printf("enter a name :");
      scanf("%s",&k[i].name);
      printf("enter a number :");
      scanf("%d",&k[i].number);
      printf("enter a rate :");
      scanf("%d",&k[i].rate);
      printf("enter  a qty :");
      scanf("%d",&k[i].qty);

       printf("\n"); 
   } 

    
 printf("name\tnumber\trate\tqty\tdis\tbillamt\tgst\tnetbill\t :");
    
    int n,x;

    {
                                
      for(int i=0; i<n; i++)
      {
        printf("%d\t",n);
      }
    }
 
int main()
  
  {
     for(i=0; i<n; i++)
      {
        printf("enter a value :");
        scanf("%d",&x);
      }

      int dis(x);
      printf("\n minimum number : %d",(i));
      printf("\n maximum number : %d",(i));
     }

for(i=0; i<2; i++)
  {

   k[i].amt=(float)k[i].rate*k[i].qty;
   k[i].dis=(float)k[i].amt*5/100;
   k[i].billamt=(float)k[i].amt-k[i].dis;
   k[i].gst=(float)(k[i].billamt*18)/100;
   k[i].netbill=(float)k[i].billamt-k[i].gst;


   printf("\n%s\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",k[i].name,k[i].number,k[i].rate,k[i].qty,k[i].amt,k[i].dis,k[i].billamt,k[i].gst,k[i].netbill);



  }



 }  