#include<stdio.h>
#include<conio.h>
void main()
{
  int len,i,num;
  clrscr();
  printf("\n Enter ur program=");
  scanf("%d",&num);
  len=num;
  while(len!=0)
  {
    i=i*10;
    i=i+len%10;
    len=len/10;
  }
  if(num==i)
  {
    printf("\n The num is palindrome");
  }
  else
  {
    printf("\n the num is not palindrome");
  }
  getch();
}
