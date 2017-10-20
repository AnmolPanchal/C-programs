#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct stack
{                int data;
struct stack*next;
};
struct stack*top=NULL;
struct stack*push(struct stack*,int);
struct stack*pop(struct stack*);
struct stack*display(struct stack*);

int main()
{
int val,opt;
clrscr();
do
{
printf("\n1.Push\n2.pop\n3.display\n4.exit\n");
printf("enter your option:\n");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("\nenter value to push");
	scanf("%d",&val);
	top=push(top,val);
	break;
case 2:top=pop(top);
	break;
case 3:top=display(top);
	break;
case 4:break;
}
}
while(opt!=4);
getch();
return 0;
}

struct stack *push(struct stack *top,int val)
{
struct stack *ptr;
ptr=(struct stack *)malloc(sizeof(struct stack));
ptr->data=val;
if(top==NULL)
{
ptr->next=NULL;
top=ptr;
}
else
{ptr->next=top;
top=ptr;
}
return top;
}

struct stack *display(struct stack *top)
{
struct stack *ptr;
ptr=top;
if(top==NULL)
printf("\n\tstack is empty");
else
{
while(ptr!=NULL)
{
printf("\n\t%d",ptr->data);
ptr=ptr->next;
}
}
return top;
}



struct stack *pop(struct stack *top)
{
struct stack *ptr;
ptr=top;
if(top==NULL)
printf("\n\tstack  underflow");
else
{
top=top->next;
printf("\nvalue pooped is %d",ptr->data);
free(ptr);
}
return top;
}