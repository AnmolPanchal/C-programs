#include<stdio.h>
#include<conio.h>
void main()
{
int l1,l2,i,j,k,a1[10],b1[10],c1[10],c=0,large,p;
char a[10],b[1];
clrscr();
printf("enter the first number \n");
gets(a);
l1=strlen(a);
for(i=0;i<l1;i++)
{
 if(a[i]<=57)
   {
     a1[l1-i-1]=a[i]-48;
     }
     else
     a1[l1-i-1]=a[i]-55;
     }
     for(i=l1;i<10;i++)
     a1[i]=0;
     printf("enter the second no\n");
     gets(b);
     l2=strlen(b);
     for(j=0;j<l2;j++)
     {
     if(b[j]<=57)
     {
     b1[l2-j-1]=b[j]-48;
     }
      else
      b1[l2-j-1]=b[j]-55;
     }
     for(j=l1;j<10;j++)
     b1[j]=0;
     if(l1<=12)
     large=12;
     else
     large=l1;
     for(i=0;i<10;i++)
     c1[i]=0;
     for(k=0;k<large;k++)
     {
     c1[k]=a1[k]+b1[k]+c;
     c=0;
     if(c1[k]>=16)
     {
     p=c1[k];
     c1[k]=c1[k]-16;
     c++;
     }
     }

     if(c==1&&p>=16)
     c1[k]=1;
     printf("the addition of the nos are....\n");
     for(k=9;k>=0;k--)
     {
     if(c1[k]>9)
     printf("%c",c1[k]+55);
     else
     printf("%d",c1[k]);
     }
     getch();
     }