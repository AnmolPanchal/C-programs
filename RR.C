#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,n,time,rem,flag=0,ts;
   int sumw=0,sumtr=0,at[10],bt[10],rt[10];
   clrscr();

   printf("Enter the no. of processes");
   scanf("%d",&n);
   rem=n;
   for(i=0;i<n;i++)
   {
      printf("Enter arr time and burst time for process %d",i+1);
      scanf("%d%d",&at[i],&bt[i]);
      rt[i]=bt[i];
   }
   printf("Enter the time slice");
   scanf("%d",&ts);
   printf("\n Process\t |tr\t|tw\n");
   for(time=0,i=0;rem!=0;)
   {
      if(rt[i]<=ts&&rt[i]>0)
      {
	 time+=rt[i];
	 rt[i]=0;
	 flag=1;
      }
      else if(rt[i]>0)
      {
	 rt[i]-=ts;
	 time+=ts;
      }
      if( rt[i]==0&&flag==1)
      {
	 rem--;
	 printf("p[%d]\t|%d\t|%d\n",i+1,time-at[i],time-at[i]-bt[i]);
	 sumw+=time-at[i]-bt[i];
	 sumtr+=time-at[i];
	 flag=0;
      }
      if(i==n-1)
      {
	i=0;
      }
      else if(at[i+1]<=time)
	i++;
      else
	i=0;
   }
   getch();
   }

