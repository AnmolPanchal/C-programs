#include<stdio.h>
#include<conio.h>

void main()
{
int a[100];
int i,j,k,n;
clrscr();

printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter the elements\n");
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
scanf("%d",&a[i]);
}
printf("enter position and value to insert\n");

scanf("%d%d",&j,&k);

for(i=n-1;i>=j-1;i--)
{
a[i+1]=a[i];
a[j-1]=k;
}
printf("resultant array is:\n");

for(i=0;i<=n;i++)
{
printf("%d\n",&a[i]);
}
getch();
}
