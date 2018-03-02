#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0;
printf("\n Enter a value=");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
sum=sum+b;
a=a/10;
}
printf("\n Sum of digits=%d",sum);
getch();
}
