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
    if((s[i]>='a'&&s[i]=<'z')||(s[i]>='A'&&s[i]<='Z'))
   
    else
      c++;
  }
}
