#include<stdio.h>
#include<conio.h>
void main()
{
int no,i=0,a,b;
clrscr();
printf("\n Enter the a,b value=");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
  if(i%2!=0)
  {
    printf("\t %d",i);
  }
}
getch();
}
