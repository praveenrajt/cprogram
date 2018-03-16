#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i;
printf("\n Enter n value=");
scanf("%d",&n);
printf("\n Enter num=");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
if(i!=a[i])
{
printf("\n missing mumber=%d",i);
}
}
getch();
}
