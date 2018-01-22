#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i=0;
  clrscr();
  printf("\n enter a,b value=");
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
    if(i%2==0)
    {
      printf("\n even number are=%d",i);
    }
  }
  getch();
}
