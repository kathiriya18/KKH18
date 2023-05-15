#include<stdio.h>
#include<conio.h>

void main()

{
    int n,a=0,b=1,c;
    clrscr();
    printf("enter number=");
    scanf("%D",&n);


    while(n>a)
    {
	printf("%d",a);
	c=a+b;
	a=b;
	b=c;
    }
    getch();


}