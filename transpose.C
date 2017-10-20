#include <stdio.h>
#include <conio.h>
 
void main()
{
 int i,j,M,N;
 int A[10][10], B[10][10];
 
 int transpose(int A[][10], int r, int c); 
 
 clrscr();
 
 printf("Enter the order of matrix A\n");
 scanf("%d %d", &M, &N);
 
 printf("Enter the elements of matrix\n");
 for(i=0;i<M;i++)
 {
  for(j=0;j<N;j++)
  {
   scanf("%d",&A[i][j]);
  }
 }
 
 printf("Matrix A is\n");
 for(i=0;i<M;i++)
 {
  for(j=0;j<N;j++)
  {
   printf("%3d",A[i][j]);
  }
  printf("\n");
 }
 

 for(i=0;i<M;i++)
 {
  for(j=0;j<N;j++)
  {
   B[i][j] =  A[j][i];
  }
 }
 
 printf("Its Transpose is\n");
 for(i=0;i<M;i++)
 {
  for(j=0;j<N;j++)
  {
   printf("%3d",B[i][j]);
  }
  printf("\n");
 
getch():
}