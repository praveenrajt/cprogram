#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int c=0,i=0;
  char s[200];
  printf("\n Enter the string=");
  gets(s);
  for(i=0;i<=strlen(s);i++)
  {
    if(s[i]!=((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    {
      c++;
    }
  }
  printf("\n no of special in string=%d",c);
  getch();
}
