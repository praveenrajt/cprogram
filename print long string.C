#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int a=0,b=0;
  char c[100],d[100];
  printf("\n Enter first  string=");
  gets(c);
  printf("\n Enter the 2nd string=");
  a=strlen(c);
  b=strlen(b);
  if(a>b)
  printf("%s",c);
  else if(a<b)
  printf("%s",d);
  else
  printf("%s",c);
  getch();
}
