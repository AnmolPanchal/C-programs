#include<stdio.h>
#include<conio.h>

long fibo(int n)
{
if((n==1)||(n==2))
return 1;

else
return(fibo(n-1)+fibo(n-2));
}

void main()
{int i,n;
clrscr();
printf("enter the no of terms:");
scanf("%d",&n);

printf("first %d terms of fibonacci series are:\n",n);
for(i=1;i<=n;i++)
printf("%d\n",fibo(i));
getch();
}