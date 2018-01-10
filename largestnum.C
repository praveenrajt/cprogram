#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  printf("\n Enter the any three number);
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  {
    printf("\n The largest number=%d",&a);
  }
  else if((b>a)&&(b>c))
  {
    printf("\n The largest number=%d",&b);
  }
  else
    printf("\n The largest number=%d",&c);
  getch();
}
