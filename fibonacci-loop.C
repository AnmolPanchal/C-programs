#include<stdio.h>
#include<conio.h>

void main()
{
int a,b=0,c=1,next,d;
clrscr();

printf("enter number to obtain fibonacci series\n");
scanf("%d",&a);

printf("%dterms of fibonacci series are:-\n",a);

for(d=0;d<a;d++)
{
if(d<=1)
next=d;
else
{
next=b+c;
b=c;
c=next;
}
printf("%d\n",next);
}
getch();
}