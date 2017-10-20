#include<stdio.h>
#include<conio.h>

void main()
{
int n;
float i,s=0;

clrscr();

printf("enter the no.");
scanf("%d",&n);

for(i=1;i<=n;i++)
s=s+1/i;
printf("sum of the required series is %f",s);
getch();
}