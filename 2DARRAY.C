#include<stdio.h>
#include<conio.h>

void main()
{
     int a[3][3],b[3][3],c[3][3],i,j;
     clrscr();
     printf("\nenter 2 D array A\n");
     for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
	 {
	      printf("\nenter %d row & %d column : ",i,j);
	      scanf("%d",&a[i][j]);
	 }
     }
     printf("\nenter 2 D array B\n");
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	   {
	   printf("\nenter %d row & %d column:",i,j);
	   scanf("%d", & b[i][j]);
	   }
     }
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
	   {
		 c[i][j]=a[i][j]+b[i][j];
	   }
     }
	printf("\naddition of 2 D array is\n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	      // printf("\nA[%d][%d]=%d",i,j,a[i][j]);
	      printf("\t%d" , c[i][j]);
	    }
	    printf("\n");
	}
	getch();
}