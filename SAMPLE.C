#include<stdio.h>
#include<conio.h>

void main()
{
int x=10,y,z;
z=y=x;
y-=--x;
z-=x--;
x-=--x-x--;
printf("x=%d y=%d z=%d",x,y,z);
getch();
}