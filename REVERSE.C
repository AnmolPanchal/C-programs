#include<stdio.h>
#include<conio.h>

void main()

{
 int a,b=0,r,temp;
 clrscr();

 printf("enter a no.\n");
 scanf("%d",&a);

 temp=a;
 while(a!=0)

 {
  r=a%10;
  b=b*10+r;
  a=a/10;
  }
  printf("reverse of %d is %d ",temp,b);
  getch();
  }