#include<stdio.h>
#include<conio.h>

void main()
{
   int k,r,ans=0,temp;
   clrscr();
   printf("enter number=");
   scanf("%d",&k);
   temp=k;

   while(k>0)
   {
      r=k%10;
      ans=(ans*10)+r;
      k/=10;
   }
   if(temp==ans)
   {
      printf("this is palindrome number");
   }
   else
   {
       printf("this is not palindrome number");
   }
   getch();

}