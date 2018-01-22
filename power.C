#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,val=1,i=1;
  printf("\n Enter the number=");
  scanf("%d",&a);
  printf("\n Enter the power value=");
  scanf("%d",&b);
  for(i=1;i<=b;i++)
  {
    val=val*a;
  }
  printf("\n squre value =%d",val);
  getch();
}
