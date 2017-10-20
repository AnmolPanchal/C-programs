#include<stdio.h>
#include<conio.h>

void main()
{
int a,reverse=0,temp;
clrscr();
printf("enter any number to check it is palindrome or not\n");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(a==reverse)

printf("it is a palindrome number\n");
else
printf("it is not a palindrome number\n");

getch();
}