#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,a,c;
printf("\n Enter cuboid length,breath,heigt");
scanf("%d%d%d",&l,&b,&h);
a=l*b;
c=a*h;
printf("\n the cuboid surface and volume:%d,%d",a,c);
getch();
}
