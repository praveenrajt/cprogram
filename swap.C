#include<stdio.h>
#include<conio.h?
void main()
{
int a,b,c;
clrscr();
printf("\n Enter the a,b values");
scanf("%d%d",&a,&b);
printf("\n Before swapping a=%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf("\n After swapping a=%d,b=%d",a,b);
getch();
}
