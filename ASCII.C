#include <stdio.h>
void main()
{
  char str[100];
  int i,count[100]={0},c,a,ans=0,sum[100]={0},strl=0;
  printf("Enter string:");
  gets(str);

  for(a=0;a<strlen(str);a++)
  {
   if( count[c] != 0 )
   {
    strl=str[a]-96;
    sum[a]=strl*(count[c]/count[c]);
   }
  }
  for(i=0;i<strlen(str);i++)
  {
   ans=ans+sum[i];
  }
  printf("%d ",ans);
}