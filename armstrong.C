#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,no,num;
  printf("\n Enter any number=");
  scanf("%d",&a);
  b=a;
  while(b!=0)
  {
    no=b%10;
    num+=no*no*no;
    b/=0;
  }
  if(num==a)
  {
    printf("\n This is armstrong number");
  }
  else
  {
    printf("\n The number is not armstrong number");
  }
  getch();
}
