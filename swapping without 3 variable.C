#include<stdio.h>
#include<conio.h>

void main()
{
int x,y;
clrscr();

printf("enter the two nos:");
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;

printf("after swapping:\n");
printf("x=%d y=%d",x,y);
getch();
}