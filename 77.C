#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
printf("\n Enter no=");
scanf("%d",&a);
printf("\n Factors");
for(i=1;i<=a;i++)
{
if(a%i==0)
printf("%d",i);
}
getch();
}
