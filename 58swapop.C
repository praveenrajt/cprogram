#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  printf("\n Enter a,b value=");
  scanf("%d%d",&a,&b);
  printf("\n Before swapping of two no=%d %d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("\n after swapping no a=%d,b=%d",a,b);
  getch();
}
