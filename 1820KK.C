#include<stdio.h>
#include<conio.h>

void main()
{
      int k,fact=1;

      clrscr();

      printf("enter number of k=");

      scanf("%d",&k);

      while (k>=1)
      {
	    fact=k*fact;
	    printf("ans=%d\n",fact);
	    k--;
      }

      getch();

}