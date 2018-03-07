#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,z;
printf("\n Enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
for(i=b;i<=c;i++)
{
if(i==a)
{
z=1;
}
}
if(z==1)
printf("\n yes");
else
printf("\n no");
getch();
}
