#include<stdio.h>
#include<conio.h>
void main()
{
     char c;
     int lower,upper;
     clrscr();
     printf("enter alfphabat:");
     scanf("%c",&c);
     lower=(c=='a' ||c=='e'||c=='i'||c=='o'||c=='u');
     upper=(c=='A' ||c=='E'||c=='I'||c=='O'||c=='U');
     if(lower||upper){
     printf( "vowel",c);
     }
     else{
     printf("consonal",c);
     }
     getch();
     }





