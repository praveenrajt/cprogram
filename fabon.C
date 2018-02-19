#include<stdio.h>
#include<conio.h
void main()
{
  int a,i=0,b1=0,b2=1,b3;
  printf("\n Enter limit=");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    b3=b1+b1;
    printf("\n%d",b3);
    b1=b2;
    b2=b3;
  }
  getch();
}
