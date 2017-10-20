#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int size,pass=1;
void swap(int *x,int *y)
{
   int temp;clrscr():
   temp = *x;
   *x = *y;
   *y = temp;
}
void quicksort(int list[],int m,int n)
{
   int key,i,j,k;
   if( m < n)
   {
		k=m;
      swap(&list[m],&list[k]);
      key = list[m];
      i = m+1;
      j = n;
      while(i <= j)
      {
	 while((i <= n) && (list[i] <= key))
		i++;
	 while((j >= m) && (list[j] > key))
		j--;
	 if( i < j)
		swap(&list[i],&list[j]);
      }
	  // swap two elements
      swap(&list[m],&list[j]);
	  // recursively sort the lesser list
		printf("Array after %d pass\n",pass++);
		for(i=0;i<size;i++)
			printf("%d\n",list[i]);
      quicksort(list,m,j-1);
      quicksort(list,j+1,n);
   }
}
void main()
{
   int list[100],n;

   int i = 0;
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	printf("Enter elements\n");
   for(i = 0; i <n; i++ )
		{
	   scanf("%d",&list[i]);
   }
		size=n;
   printf("The list before sorting is:\n");
   for(i=0;i<n;i++)
		printf("%d\n",list[i]);

   // sort the list using quicksort
   quicksort(list,0,n-1);

   // print the result
   printf("The list after sorting using quicksort algorithm:\n");
   for(i=0;i<n;i++)
		printf("%d\n",list[i]);  getch();
}