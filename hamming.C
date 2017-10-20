#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int i,d[10],a[10],code[10],sum;
clrscr();
printf("enter 4 bit data\n");
for(i=4;i>=1;i--)
{
scanf("%d",&a[i]);
}
printf("\n");

d[7]=a[4];
d[6]=a[3];
d[5]=a[2];
d[3]=a[1];

d[1]=(d[3]+d[5]+d[7])%2;
d[2]=(d[3]+d[6]+d[7])%2;
d[4]=(d[5]+d[6]+d[7])%2;


printf("dATA BITS AFTER HAMMING CODE IS:\n");

for(i=7;i>=1;i--)

{
printf("%d",d[i]);
}

printf("enter recieved codeword:\n");

for(i=7;i>=1;i--)
{
scanf("%d",code[i]);
}


d[1]=(code[1]+code[3]+code[5]+code[7])%2;
d[2]=(code[2]+code[3]+code[6]+code[7])%2;
d[4]=(code[4]+code[5]+code[6]+code[7])%2;


sum=4*d[4]+2*d[2]+d[1];

if(sum==0)
{
printf("no error\n\t\n");
for(i=7;i>=1;i--)
{
printf("%d",code[i]);
}
}



else
{
printf("error at place %d",sum);
code[sum]=1-code[sum];
printf("corrected code is:\n");
for(i=7;i>=1;i--)
{
printf("%d",code[i]);
}
}
getch();
}

