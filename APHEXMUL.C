#include<conio.h>
#include<stdio.h>
void main()
{
 int l1,l2,i,j,k,a1[10],b1[10],c1[10],c=0,d=0;
 char a[10],b[10];
 int m,p,q,temp[10],ac,z;
 clrscr();
 printf("enter 1st no");
gets(a);
l1=strlen(a);
for (i=0;i<=l1;i++)
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
printf("enter no");
gets(b);
l2=strlen(b);
for (j=0;j<=l2;j++)
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
for(i=0;i<10;i++)
c1[i]=0;
for(p=0;p<l2;p++)

{
c=0;ac=0;
for(q=0;q<l1;q++)
    {
     temp[q]=(a1[q]*b1[p])+c;
     c1[q+d]=(temp[q]%16)+c1[q+d]+ac;
     c=0;
     ac=0;
    if(c1[q+d]>16)
    {
     z=c1[q+d];
     c1[q+d]/=16;
     ac++;
     }
     while(temp[q]!=0)
     {
      temp[q]=temp[q]/16;
      c=c+temp[q]%16;
      }
   }
   if(c>0)
   {
    c1[q+d]=c;
    }
    d++;
    if(z>=16)

    c1[q+d-1]+=ac;
}
printf("ans");
for(k=8;k>=0;k--)
{
if(c1[k]>=9)
printf("%c",c1[k]+55) ;
else
printf("%d",c1[k]);
}
getch();
}











