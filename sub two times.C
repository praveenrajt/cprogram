#include<stdio.h>
#include<conio.h>
void main()
{
  int h1,h2,m1,m2,subh,subm;
  printf("\n Enter 1st time =");
  scanf("%d%d",&h1,&m1);
  printf("\n Enter 2nd time=");
  scanf("%d%d",&h2,&m2);
  
  if(m1<m2)
  {
    h1=h1-1;
    m1=m1+60;
  }
  subh=h1-h2;
  subm=m1-m2;
  printf("between time=%d:%d",subh,subm);
  getch();
}
