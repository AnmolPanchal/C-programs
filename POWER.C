#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("enter number\n");
scanf("%d",&a);

printf("enter power\n");
scanf("%d",&b);

c=pow(a,b);
printf("the ans is %d",c);

getch();
}