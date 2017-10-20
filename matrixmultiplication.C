#include<stdio.h> 
#include<conio.h>

void read(intx[][10],int nr,int nc);
void multiply(int a[][10],int b[][10],int c[][10],int l,int m,int n);

void show(int y[][10],int nr,int nc);

void main()
{
int a[10][10],b[10][10],c[10][10],nra,nca,nrb,ncb;

clrscr();

printf("enter the number of rows and columns of first matrix:\n");
scanf("%d%d",&nra,&nca);


printf("enter the number of rows and columns of second matrix:\n");
scanf("%d%d",&nrb,&ncb);

if(nca==nrb)
{


printf("enter the elements of second matrix:\n");
read(b,nrb,ncb);

mutiply(a,b,c,nra,nca,ncb);
printf("the result of multiplication of matrix is:\n");

show(c,nra,ncb);
}
getch();
}
else
printf("matrix multiplication not possible:\n");
getch();
}


void read(int x[][10],int nr, int nc)
{
int r,c;
for(r=0;r<nr;r++)
for(c=0;c<nc;c++)
scanf("%d",&x[r][c]);
}

void multiply(int a[][10], int b[][10],int c[][10],int l, int m, int n)
{
int i,j,k;
for(i=0;i<l;i++)
for(j=0;j<n;j++)
{
c[i][j]=0;
for(k=0;k<m;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}

void show(int y[][10],int nr,int nc)
{
int r,c;
for(r=0;r<nr;r++)
{
for(c=0;c<nc;c++)
printf("%d",y[r][c]);
printf("\n");
}
}