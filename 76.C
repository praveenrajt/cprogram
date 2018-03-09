#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,b=0;;
printf("\n Enter no=");
scanf("%d",&a);
printf("\n Factors");
for(i=2;i<=a;i++)
{
if(a%i==0)
{
b++;
}
}
if(b>1)
printf("\n it is composite number");
else
printf("\n it is not composite number");
getch();
}
