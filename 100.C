#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c[i],z=0,i=0,p=1;
printf("\n Enter numbers=");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c[i]=b;
i++;
a=a/10;
z++;
}
for(i=z;i<0;i--)
p=p*c[i];
printf(" product of given digits =%d",p);
getch();
}
