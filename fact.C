#include<stdio.h>
#include<conio.h>
void main();
{
  int a,b=1,i;
  clrscr();
  printf("\n Enter the any number");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    b=b*i;
  }
  printf("\n The factorial value=%d",b);
  getch();
}
