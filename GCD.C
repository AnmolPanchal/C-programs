#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,x,y,t,gcd,lcm;
clrscr();
printf("enter two numbers\n");
scanf("%d%d",&x,&y);

a=x;
b=y;

while(b!=0)
{
t=b;
b=a%b;
a=t;
}

gcd=a;
lcm=(x*y)/gcd;

printf("gcd of %d and %d=%d\n",x,y,gcd);
printf("lcm of  %d and %d=%d\n",x,y,lcm);
getch();
}