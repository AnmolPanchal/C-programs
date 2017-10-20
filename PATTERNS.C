#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,m;
clrscr();
for(i=0;i<=10;i++)
{
for(j=1;j<=10-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("$");
}
for(m=1;m<=i-1;m++)
{
printf("$");
}

printf("\n");
}
getch();
}