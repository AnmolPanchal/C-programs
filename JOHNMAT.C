#include<stdio.h>
#include<conio.h>

void main()
{
long int i,n,a,b,c;
clrscr();

printf("enter no to verify:\n");
scanf("%d",&n);

printf("enter no to verify\n");
scanf("%d",&i);

a=n*(2*n-1);
printf("%d\t\n",a);

b=(i*i)/2+i/2;

printf("%d\t\n",b);

{

if(a==b)
{
printf("its a john mathew no.\n");
}
else
{
printf("its not a john mathew no.\n");
}
getch();
}

}