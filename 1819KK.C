#include<stdio.h>
#include<conio.h>

void main();
{
     int n,ans=0,first,last;

     printf("enter number");

     scanf("%d",&n);

     last=n%10;

     while(n>=10)
       {
	   n=n/10;
       }

       first=n;
       ans = first+last;

       printf("ans is=%d",ans);

}
