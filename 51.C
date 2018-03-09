#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,c,r,i;
printf("\n Enter the n=");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
c++;
}
for(i=0;i<=c;i++)
{
r=a%10;
a[i]=r;
}
for(i=c;i<=1;i--)
{
printf("%d",a[i]);
}
getch():
}
