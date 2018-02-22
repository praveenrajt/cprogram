#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,c=1,a=0;
printf("\n Enter a=");
scanf("%d",&a);
for(i=1;i<=0;i++)
{
c=c*2;
if(c==a)
{

break;
}
}
  if(c==a)
    printf("yes");
  else
    printf("no");
getch();
}
