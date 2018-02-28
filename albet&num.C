#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int a=0,b=0,i=0;
  char s[100];
  printf("\n Enter any thing=");
  gets(s);
  for(i=1;i<=strlen(s);i++)
  {
    if(s[i]>='a'&&s[i]<='z')
      b++;
    else if(s[i]>=1&&s[i]<=9)
    a++;
    else
    c++;
   }
   if((a>0&&(b>0)
   printf("\n YES");
   else("\n NO");
   getch();
 }
