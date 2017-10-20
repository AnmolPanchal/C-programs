#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,n,c;
clrscr();
printf("enter number of terms to display pattern--");
scanf("%d",&n);

c=n;

for(a=1;a<=n;a++)
{
for(b=1;b<a;b++)
{
printf("$");
}
c--;
for(b=1;b<=2*a-1;b++)
{printf("");}
}
printf("\n");

getch();


}