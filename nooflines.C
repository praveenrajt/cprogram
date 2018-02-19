#includ<stdio.h>
#include<conio.h>
void main()
{
  int c;
  char s[100];
  printf("\n Enter sentence=");
  gets(s);
  for(i=0;i<=strlen(s);i++)
  {
  if(s[i]=='.')
      c++;
  }
  printf("\n no.of para=%d",c);
  getch();
}
