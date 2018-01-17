#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0,i=0;
printf("\n Enter the numbers=");
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
printf("%d",&i);
}
for(i=1;i<=b;i++)
{
c=c+i;
}
printf("\n sum of num=%d",&c);
getch();
}
