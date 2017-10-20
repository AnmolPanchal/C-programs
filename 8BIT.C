#include<stdio.h>
#include<conio.h>

void main()
{
int a[10],b[10],c[15],sum=0,carry,count;
  int i,j;
clrscr();


printf("Enter 8-bit no 1:\n");
for(i=0;i<8;i++)
{
scanf("%d",&a[i]);
}

printf("Enter 8-bit no 2:\n");
for(i=0;i<8;i++)
{
scanf("%d",&b[i]);
}



for(count=1;count<=8;count++)
{
carry=0;
if(b[7]==1)
for(j=7;j>=0;j--)
{
sum=c[j]+a[j]+carry;
c[j]=sum%2;
carry=sum/2;
}

for(i=14;i>=0;i--)
c[i+1]=c[i];
c[0]=carry;

for(i=6;i>=0;i--)
b[i+1]=b[i];


}


printf("Result:\n");
for(i=0;i<16;i++)
printf("%d",c[i]);

getch();
}
