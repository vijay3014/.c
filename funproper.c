#include<stdio.h>
 int grandtotal(int mark1, int mark2, int mark3)
{
    return mark1,mark2,mark3;
}
 float grandpercentage(int total)
{
    return(float)total/3;
}
 char grandgrade(int percentage)
 {
     if (percentage >= 90)
     {
        return 'A';
    } 
    else if (percentage >= 80) 
    {
        return 'B';
    } 
    else if (percentage >= 70) 
    {
        return 'C';
    }
     else if (percentage >= 60) 
     {
        return 'D';
    } 
    else 
    {
        return 'F';
    }
 }
int main()
{
    int mark1,mark2,mark3;
      printf("enter gujrati");
      scanf("%d",&mark1);
      printf("\n enter maths");
      scanf("%d",&mark2);
      printf("\n enter english ");
      scanf("%d", &mark3 );

      int total=grandtotal(mark1,mark2,mark3);
      float percentage=grandpercentage(total);
      char grade=grandgrade(percentage);

      printf("%d total marks",total);
      printf("\n %.2f percentages ",percentage);
      printf("\n%c grades",grade) ;
} 








