#include<stdio.h>
#include<conio.h>

void main()
{
int x,y,temp;
 clrscr();
printf("enter the numbers for swapping\n");
scanf("%d%d",&x,&y);

printf("before swapping\nx=%d\ny=%d\n",x,y);

temp=x;
x=y;
y=temp;

printf("after swapping\nx=%d\ny=%d\n",x,y);
getch();
}