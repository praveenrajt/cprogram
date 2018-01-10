#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("\n Enter integer value");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
b=b+1;
}
printf("\n counter is=%d",&b);
getch();
}
