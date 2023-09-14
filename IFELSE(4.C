#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	
	printf("enter five and three:");
	scanf("%d",&a);

	if(a%5==0&&a%3==0)
	{
	    printf("divisible by five:");
	 }
	 else
	 {
	    printf("divisible by three:");
	    }
	    return 0;
	    }