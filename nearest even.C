#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  printf("\n Enter a value=");
  scanf("%d",&a);
  if(a%2==0)
  printf("\n nearest even no=%d",a);
  else
  printf("\n nearest even no=%d",a-1);
  getch();
}
  
