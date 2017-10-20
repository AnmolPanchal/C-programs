#include<stdio.h>
#include<conio.h>
void main()

{
int n,i;
long int factorial=1;
clrscr();

printf("enter number for obtaining its factorial\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
factorial=factorial*i;
}

printf("factorial=%d",factorial);
getch();
}