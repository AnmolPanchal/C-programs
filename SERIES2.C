#include<stdio.h>
#include<conio.h>

void main()
{
int n;
float i,f=1,s=0;
clrscr();

printf("enter any number:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
f=f*i;
s=s+1/f;
}

printf("sum of the required series is %f",s);

getch();
}