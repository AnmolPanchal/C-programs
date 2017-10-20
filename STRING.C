#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()

{
int i;
char a[10];
clrscr();

printf("enter the string:\n");

gets(a);
strreverse(a);
printf("the reverse string is %s",a);
getch();
}