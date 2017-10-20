#include<stdio.h>
#include<conio.h>

void main()
{
int n,a=0,r,temp;
clrscr();

printf("enter a number:\t");
scanf("%d",&n);

temp=n;
while(n!=0)
{
r=n%10;
a=a+r*r*r;
n=n/10;
}
if(a==temp)
printf("it is an armstrong number\t",temp);
else
printf("it is not an armstrong number\t",temp);

getch();
}