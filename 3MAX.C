#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  clrscr();
  printf("\nenter A:");
  scanf("%d",&a);
  printf("\nenter B:");
  scanf("%d",&b);
  printf("\nenter C:");
  scanf("%d",&c);
  if(a>b)
{
    if(a>c)
  {
    printf("\n A is a max number");
  }
  else
  {
    printf("\n B is a max number");
  }
}
 else if(b>c)
 {
   printf("\n B is a max number");
 }
 else
 {
   printf("\n C is a max number");
 }
 getch();
}

