#include <stdio.h>
#include <string.h>
 
void main()
{	int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,
o=15,p=16,q=17,r=18,s=19,t=20,u=21,v=22,w=23,x=24,y=25,z=26;
   char string[100];
   int ck = 0, count[26] = {0};
   clrscr();
 
   printf("Enter a string\n");
   gets(string);
 
   while ( string[ck] != '\0' )
   {
      /* Considering characters from 'a' to 'z' only */
 
      if ( string[ck] >= 'a' && string[ck] <= 'z' ) 
         count[string[ck]-'a']++;
 
      ck++;
   }
 
   for ( ck = 0 ; ck < 26 ; ck++ )
   {
      if( count[ck] != 0 )
	 printf("%c occurs %d times in the entered string.\n",ck+'a',count[ck]);
   }
 
  getch();
}