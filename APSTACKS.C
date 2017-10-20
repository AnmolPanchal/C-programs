#include<stdio.h>
#include<conio.h>
#define MAX 20

int st[MAX],top=-1;
void push(int st[],int val);
int pop(int st[]);
void display(int st[]);

int main()
{
int val,opt;
clrscr();
do
{
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("\nEnter your choice:-");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("enter value to push:\n");
	scanf("%d",&val);
	push(st,val);
	break;
case 2:val=pop(st);
	if(val!=-1)
	printf("element popped is %d",val);
	break;

case 3:display(st);
break;
}
}
while(opt!=4) ;
getch();
return 0;
}

void push(int st[], int val)
{
if(top==MAX-1)
{
printf("stack is overflow\n");
}
else
{

top++;
st[top]=val;
}  }

int pop(int st[])
{
int val;
if(top==-1)
{
printf("stack is underflow\n");
}

else
{
val=st[top];
top--;
return val;
}
}
void display(int st[])
{
int i;
if(top==-1)
{
printf("stack is empty\n");
}
else
{
for(i=top;i>=0;i--)
printf("\n\t%d",st[i]);
}
}