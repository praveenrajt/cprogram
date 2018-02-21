#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,c=0,a=0;
printf("\n Enter a=");
scanf("%d",&a);
for(i=1;i!=0;i++)
{
c=c*i;
if(c==a)
{
printf("\n yes");
break;
}
}
getch();
}
