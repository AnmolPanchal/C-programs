#include<stdio.h>
#include<conio.h>

long fact(int n)
{
if(n==0)
return 1;
else
return(n*fact(n-1));
}
void main()

{
int n;
clrscr();

printf("enter the number to obtain its factorial:");
scanf("%d",&n);

printf("factorial of%d is%1d",n,fact(n));

getch();
}