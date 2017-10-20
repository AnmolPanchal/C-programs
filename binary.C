#include<stdio.h>
#include<conio.h>

void main()
  {
    int num,i=0,binary=0,num1, biny[30],counter=0;
clrscr();
 printf("Enter the Decimal  number:\n");
 scanf("%d",&num);
 num1=num;
  do
   {
    binary=num%2;
    biny[i]=binary;
    num=num/2;
    i++;
    counter++;
   } while(num>0);
  
  printf("\nThe given decimal %d number binary equalant is :\n",num1);
  counter--;
 while(counter>=0){
   printf("%d" ,biny[counter]);
      counter--;
 }
 
getch();
 }