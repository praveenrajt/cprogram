#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,no,num;
  printf("\n Enter any two number=");
  scanf("%d%d",&a,&c);
  b=a;
  while(b<c)
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
