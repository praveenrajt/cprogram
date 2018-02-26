#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b1=0,b2=1,b3=0,i=0;
  clrscr();
  printf("\n Enter the num=");
  scanf("%d",&a);
  for(i=1;i<a;i++)
  {
  b3=b1+b2;
  b1=b2;
  b2=b3;
  printf("\n %d",b3);
  }
  getch();
}
  
