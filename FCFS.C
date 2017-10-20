#include<stdio.h>
#include<fcntl.h>
#include<conio.h>

struct pro
{
int  tr,ts,tf,f1,tw;
int ta,tb,tc;
};
void main()
{
struct pro arr[10];
int i,n;
clrscr();
printf("enter the no.of processes\n");
scanf("%d",&n);
printf("enter the process name\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i].f1);
}
printf("enter ta \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i].ta);
}
printf("enter tb \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i].tb);
}
printf("\n");
printf("GANTT CHART");
printf("tc\n");
for(i=0;i<n;i++)
{
arr[0].tc=arr[0].tb;
arr[i+1].tc=arr[i+1].tb+arr[i].tc;
//printf("%d \n",arr[i].tc);
}
for(i=0;i<n;i++)
{
arr[i].tr=arr[i].tc-arr[i].ta;
}
for(i=0;i<n;i++)
{
arr[i].tw=arr[i].tr-arr[i].tb;
}
printf("f1\t ta\t tb\t tc\t tr\t tw\t \n");

for(i=0;i<n;i++)
{
printf("%d\t %d\t %d\t %d\t %d\t %d\t",arr[i].f1,arr[i].ta,arr[i].tb,arr[i].tc,arr[i].tr,arr[i].tw);
printf("\n");
}
printf("\n");
getch();
}




