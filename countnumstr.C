#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int a=0,i=0;
  char s[200];
  printf("\n Enter the string=");
  gets(s);
  for(i=0;i<=strlen(s);i++)
  {
    if(s[i]>='0'&&s[i]<='9')
    {
      c++;
    }
  }
  printf("\n no of numeric in string=%d",c);
  getch();
}
