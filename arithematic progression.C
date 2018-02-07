#include<conio.h>
#include<stdio.h>
void main()
{
  int a[100],n=0,i=0,ap=0;
  clrscr();
  printf("\n Enter the n series=");
  scanf("%d",&n);
  printf("\n Enter the number=");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  ap=(n*(a[1]+a[n]))/2;
  printf("\n The progession series=%d",ap);
  getch();
}
