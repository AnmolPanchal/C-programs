#include<stdio.h>
#include<conio.h>
#define MAX 20

int queue[MAX];
int front=-1,rear=-1;
void insert(void);
int del(void);
void display(void);
int main()
{
int a,b;
clrscr();
do
{
printf("\n1.insert\n2.delete\n3display\n");
printf("enter your choice");
scanf("%d",&a);
switch(a)
{
case 1:insert();
	break;
case 2:del();if (b!=-1) printf("\nthe number is deleted:%d",b);
	break;
case 3:display();
	break;

}
}
while(a!=4);
getch();
return 0;
}

void insert()
{
int c;
printf("\nenter value to insert.");
scanf("%d",&c);
if(rear==MAX-1)
printf("\n overflow");
else if(front==-1 && rear==-1)
front=rear=0;
else
rear++;

queue[rear]=c;
}

int del()
{
int b;
if(front==-1||front>rear)
{
printf("\n underflow");
return -1;
}
else
{
b=queue[front];
front++;
if(front>rear)
front=rear=-1;
return b;
}
	      }

	      void display()
	      {
	      int i;
	      printf("\n");
	      if(front==-1||front>rear)
	      printf("\nqueue is empty");
	      else
	      {
	      for(i=front;i<=rear;i++)
	      printf("\t%d",queue[i]);
	      }
	      }