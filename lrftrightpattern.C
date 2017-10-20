#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
 
 
void main()
{
    int i, j, k;
    int n = 0;
    printf("Program for displaying pattern of *.\n");
    printf("Enter the maximum number of *: ");
    scanf("%d", &n);
 
    printf("\nPattern 1 - Left Aligned:\n");
 
    for (i = 1; i <= n; i++)
    {
          for (j = 1; j <= i; j++)
                printf("*");
          printf("\n");
      }
 
    printf("\nPattern 2 - Right Aligned:\n");
 
    for (i = n; i >= 1; i--)
    {
          for(j = 0; j < n - i; j++)
                printf(" ");
          for (j = 1; j <= i; j++)
                printf("*");
          printf("\n");
    }
    printf("\n");
getch();
}