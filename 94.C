#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c[100];
printf("\n Enter a,b value\n");
scanf("%d%d",&a,&b);
for(i=1;i<=a;i++)
{
c[i]=i;
printf("%d",i);
}
printf("\n b th number is =%d",c[b]);
getch();
}
