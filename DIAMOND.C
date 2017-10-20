#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
 
 
void main()
{
    int i, j, k;
    int n = 0;clrscr();
    printf("Program for displaying pattern of *.\n");
    printf("Enter the maximum number of *: ");
    scanf("%d", &n);

    printf("\nHere is the Diamond of Stars\n");

    for (i = 1; i <= n; i++)
    {
	  for (j = 0; j < (n - i); j++)
                printf(" ");
          for (j = 1; j <= i; j++)
                printf("*");
          for (k = 1; k < i; k++)
                printf("*");
          printf("\n");
    }
 
    for (i = n - 1; i >= 1; i--)
    {
          for (j = 0; j < (n - i); j++)
                printf(" ");
          for (j = 1; j <= i; j++)
                printf("*");
          for (k = 1; k < i; k++)
                printf("*");
          printf("\n");
    }
   

    printf("\n");
getch();
}