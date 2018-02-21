#include<stdio.h>
#include<conio.h>
void main()
{
  int a=0,b=0;
  printf("\n Enter a,b value=");
  scanf("%d%d",&a,&b);
  printf("\n before swapping of number=%d %d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("\n After swapping number=%d %d",a,b);
  getch();
}
