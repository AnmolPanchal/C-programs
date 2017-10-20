#include <stdio.h>

void exchange(int, int);

void main()
{ 
	int a, b; 
	a = 5;
	b = 7;
	printf(" In main: a = %d, b = %d\n", a, b);
	exchange(a, b); 
	printf("\n Back in main: ");
	printf("a = %d, b = %d\n", a, b);
	getch();
} 

void exchange(int a, int b)
{

	int temp; 
	printf("\n In function exchange() before change: just received from\
	main... a=%d and b=%d",a,b);
	temp = a;
	a = b;
	b = temp; 
	printf("\n In function exchange() after change: ");
	printf("a = %d, b = %d\n", a, b);

} 
 