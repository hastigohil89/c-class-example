#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b;
   clrscr();
   printf("\n enter A:");
   scanf("%d" ,&a);
   printf("\n enter B:");
   scanf("%d" ,&b);
   if(a>b)
   {
      printf("\n A is a max number");
   }
   else
   {
       printf("\n B is a max number");
   }
   getch();
}