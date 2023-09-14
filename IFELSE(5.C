#include<conio.h>
#include<stdio.h>
void main()
{
      int m,s,e,total;
      clrscr();
      printf("enter m:");
      scanf("%d",&m);
      printf("enter s:");
      scanf("%d",&s);
      printf("enter e:");
      scanf("%d",&e);
      total=(m+s+e)*100/300;
      printf("enter total %d",total);
      if(33<total)
      {
	  printf("pass:");
	  }
	  else
	  {
	  printf("fail:");
	  }
      getch();
      }


