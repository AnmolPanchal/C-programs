

#include <stdio.h>
#include<conio.h>
int main(){
      float a, b, c;
clrscr();
      printf("Enter three numbers: ");
      scanf("%f %f %f", &a, &b, &c);
      if(a>=b && a>=c)
         printf("Largest number = %.2f", a);
      if(b>=a && b>=c)
         printf("Largest number = %.2f", b);
      if(c>=a && c>=b)
         printf("Largest number = %.2f", c);
      return 0;
}