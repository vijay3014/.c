#include<stdio.h>
#include<conio.h>
void main()
{
	  int a;
	  clrscr();
	  printf("enter a:");
	  scanf("%d",&a);

	  if(a>0&&a!=0)
	  {
	      printf("a is positive:");
	  }
	  else if(a==0)
	  {
	      printf("a is zero:");
	  }
	  else
	  {
	      printf("a is nagetive:");
	  }
	  getch();
}